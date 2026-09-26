#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _OBJS_ADD_PAS__FP12RS_STACKDATAi
// Address: 0x270e40 - 0x270f7c
void ps2__OBJS_ADD_PAS__FP12RS_STACKDATAi_0x270e40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__OBJS_ADD_PAS__FP12RS_STACKDATAi_0x270e40");
#endif

    switch (ctx->pc) {
        case 0x270e74u: goto label_270e74;
        case 0x270e98u: goto label_270e98;
        case 0x270f00u: goto label_270f00;
        case 0x270f10u: goto label_270f10;
        case 0x270f20u: goto label_270f20;
        case 0x270f30u: goto label_270f30;
        case 0x270f4cu: goto label_270f4c;
        case 0x270f64u: goto label_270f64;
        default: break;
    }

    ctx->pc = 0x270e40u;

    // 0x270e40: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x270e40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x270e44: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x270e44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x270e48: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x270e48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x270e4c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x270e4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x270e50: 0x10a20031  beq         $a1, $v0, . + 4 + (0x31 << 2)
    ctx->pc = 0x270E50u;
    {
        const bool branch_taken_0x270e50 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x270E54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x270E50u;
            // 0x270e54: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x270e50) {
            ctx->pc = 0x270F18u;
            goto label_270f18;
        }
    }
    ctx->pc = 0x270E58u;
    // 0x270e58: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x270e58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x270e5c: 0x10a20003  beq         $a1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x270E5Cu;
    {
        const bool branch_taken_0x270e5c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x270e5c) {
            ctx->pc = 0x270E6Cu;
            goto label_270e6c;
        }
    }
    ctx->pc = 0x270E64u;
    // 0x270e64: 0x10000034  b           . + 4 + (0x34 << 2)
    ctx->pc = 0x270E64u;
    {
        const bool branch_taken_0x270e64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x270E68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x270E64u;
            // 0x270e68: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x270e64) {
            ctx->pc = 0x270F38u;
            goto label_270f38;
        }
    }
    ctx->pc = 0x270E6Cu;
label_270e6c:
    // 0x270e6c: 0xc097e18  jal         func_25F860
    ctx->pc = 0x270E6Cu;
    SET_GPR_U32(ctx, 31, 0x270E74u);
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x270E74u; }
        if (ctx->pc != 0x270E74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x270E74u; }
        if (ctx->pc != 0x270E74u) { return; }
    }
    ctx->pc = 0x270E74u;
label_270e74:
    // 0x270e74: 0x3c0101f0  lui         $at, 0x1F0
    ctx->pc = 0x270e74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)496 << 16));
    // 0x270e78: 0x8c262a34  lw          $a2, 0x2A34($at)
    ctx->pc = 0x270e78u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 10804)));
    // 0x270e7c: 0x14c00003  bnez        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x270E7Cu;
    {
        const bool branch_taken_0x270e7c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x270E80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x270E7Cu;
            // 0x270e80: 0x3c0101f0  lui         $at, 0x1F0 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)496 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x270e7c) {
            ctx->pc = 0x270E8Cu;
            goto label_270e8c;
        }
    }
    ctx->pc = 0x270E84u;
    // 0x270e84: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x270E84u;
    {
        const bool branch_taken_0x270e84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x270E88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x270E84u;
            // 0x270e88: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x270e84) {
            ctx->pc = 0x270EE8u;
            goto label_270ee8;
        }
    }
    ctx->pc = 0x270E8Cu;
label_270e8c:
    // 0x270e8c: 0x8c242a38  lw          $a0, 0x2A38($at)
    ctx->pc = 0x270e8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 10808)));
    // 0x270e90: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x270E90u;
    {
        const bool branch_taken_0x270e90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x270E94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x270E90u;
            // 0x270e94: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x270e90) {
            ctx->pc = 0x270EC0u;
            goto label_270ec0;
        }
    }
    ctx->pc = 0x270E98u;
label_270e98:
    // 0x270e98: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x270e98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x270e9c: 0x1043000b  beq         $v0, $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x270E9Cu;
    {
        const bool branch_taken_0x270e9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x270e9c) {
            ctx->pc = 0x270ECCu;
            goto label_270ecc;
        }
    }
    ctx->pc = 0x270EA4u;
    // 0x270ea4: 0x8cc6000c  lw          $a2, 0xC($a2)
    ctx->pc = 0x270ea4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x270ea8: 0x10c00003  beqz        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x270EA8u;
    {
        const bool branch_taken_0x270ea8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x270ea8) {
            ctx->pc = 0x270EB8u;
            goto label_270eb8;
        }
    }
    ctx->pc = 0x270EB0u;
    // 0x270eb0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x270EB0u;
    {
        const bool branch_taken_0x270eb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x270EB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x270EB0u;
            // 0x270eb4: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x270eb0) {
            ctx->pc = 0x270EC0u;
            goto label_270ec0;
        }
    }
    ctx->pc = 0x270EB8u;
label_270eb8:
    // 0x270eb8: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x270EB8u;
    {
        const bool branch_taken_0x270eb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x270EBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x270EB8u;
            // 0x270ebc: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x270eb8) {
            ctx->pc = 0x270EE8u;
            goto label_270ee8;
        }
    }
    ctx->pc = 0x270EC0u;
label_270ec0:
    // 0x270ec0: 0xa4182a  slt         $v1, $a1, $a0
    ctx->pc = 0x270ec0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x270ec4: 0x1460fff4  bnez        $v1, . + 4 + (-0xC << 2)
    ctx->pc = 0x270EC4u;
    {
        const bool branch_taken_0x270ec4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x270ec4) {
            ctx->pc = 0x270E98u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_270e98;
        }
    }
    ctx->pc = 0x270ECCu;
label_270ecc:
    // 0x270ecc: 0x0  nop
    ctx->pc = 0x270eccu;
    // NOP
    // 0x270ed0: 0x14c00003  bnez        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x270ED0u;
    {
        const bool branch_taken_0x270ed0 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x270ED4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x270ED0u;
            // 0x270ed4: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x270ed0) {
            ctx->pc = 0x270EE0u;
            goto label_270ee0;
        }
    }
    ctx->pc = 0x270ED8u;
    // 0x270ed8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x270ED8u;
    {
        const bool branch_taken_0x270ed8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x270ed8) {
            ctx->pc = 0x270EE8u;
            goto label_270ee8;
        }
    }
    ctx->pc = 0x270EE0u;
label_270ee0:
    // 0x270ee0: 0x8cd10004  lw          $s1, 0x4($a2)
    ctx->pc = 0x270ee0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x270ee4: 0x0  nop
    ctx->pc = 0x270ee4u;
    // NOP
label_270ee8:
    // 0x270ee8: 0x16200003  bnez        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x270EE8u;
    {
        const bool branch_taken_0x270ee8 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x270EECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x270EE8u;
            // 0x270eec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x270ee8) {
            ctx->pc = 0x270EF8u;
            goto label_270ef8;
        }
    }
    ctx->pc = 0x270EF0u;
    // 0x270ef0: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x270EF0u;
    {
        const bool branch_taken_0x270ef0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x270EF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x270EF0u;
            // 0x270ef4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x270ef0) {
            ctx->pc = 0x270F68u;
            goto label_270f68;
        }
    }
    ctx->pc = 0x270EF8u;
label_270ef8:
    // 0x270ef8: 0xc097f6c  jal         func_25FDB0
    ctx->pc = 0x270EF8u;
    SET_GPR_U32(ctx, 31, 0x270F00u);
    ctx->pc = 0x270EFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x270EF8u;
            // 0x270efc: 0x24910008  addiu       $s1, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25FDB0u;
    if (runtime->hasFunction(0x25FDB0u)) {
        auto targetFn = runtime->lookupFunction(0x25FDB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x270F00u; }
        if (ctx->pc != 0x270F00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetArgInt__FP8ARG_DATA_0x25fdb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x270F00u; }
        if (ctx->pc != 0x270F00u) { return; }
    }
    ctx->pc = 0x270F00u;
label_270f00:
    // 0x270f00: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x270f00u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x270f04: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x270f04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x270f08: 0xc097fa8  jal         func_25FEA0
    ctx->pc = 0x270F08u;
    SET_GPR_U32(ctx, 31, 0x270F10u);
    ctx->pc = 0x270F0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x270F08u;
            // 0x270f0c: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25FEA0u;
    if (runtime->hasFunction(0x25FEA0u)) {
        auto targetFn = runtime->lookupFunction(0x25FEA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x270F10u; }
        if (ctx->pc != 0x270F10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetArgVector__FPfP8ARG_DATA_0x25fea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x270F10u; }
        if (ctx->pc != 0x270F10u) { return; }
    }
    ctx->pc = 0x270F10u;
label_270f10:
    // 0x270f10: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x270F10u;
    {
        const bool branch_taken_0x270f10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x270F14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x270F10u;
            // 0x270f14: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x270f10) {
            ctx->pc = 0x270F44u;
            goto label_270f44;
        }
    }
    ctx->pc = 0x270F18u;
label_270f18:
    // 0x270f18: 0xc097e18  jal         func_25F860
    ctx->pc = 0x270F18u;
    SET_GPR_U32(ctx, 31, 0x270F20u);
    ctx->pc = 0x270F1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x270F18u;
            // 0x270f1c: 0x24910008  addiu       $s1, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x270F20u; }
        if (ctx->pc != 0x270F20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x270F20u; }
        if (ctx->pc != 0x270F20u) { return; }
    }
    ctx->pc = 0x270F20u;
label_270f20:
    // 0x270f20: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x270f20u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x270f24: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x270f24u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x270f28: 0xc097e34  jal         func_25F8D0
    ctx->pc = 0x270F28u;
    SET_GPR_U32(ctx, 31, 0x270F30u);
    ctx->pc = 0x270F2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x270F28u;
            // 0x270f2c: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F8D0u;
    if (runtime->hasFunction(0x25F8D0u)) {
        auto targetFn = runtime->lookupFunction(0x25F8D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x270F30u; }
        if (ctx->pc != 0x270F30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackVector__FPfP12RS_STACKDATA_0x25f8d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x270F30u; }
        if (ctx->pc != 0x270F30u) { return; }
    }
    ctx->pc = 0x270F30u;
label_270f30:
    // 0x270f30: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x270F30u;
    {
        const bool branch_taken_0x270f30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x270f30) {
            ctx->pc = 0x270F40u;
            goto label_270f40;
        }
    }
    ctx->pc = 0x270F38u;
label_270f38:
    // 0x270f38: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x270F38u;
    {
        const bool branch_taken_0x270f38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x270F3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x270F38u;
            // 0x270f3c: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x270f38) {
            ctx->pc = 0x270F6Cu;
            goto label_270f6c;
        }
    }
    ctx->pc = 0x270F40u;
label_270f40:
    // 0x270f40: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x270f40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_270f44:
    // 0x270f44: 0xc098a44  jal         func_262910
    ctx->pc = 0x270F44u;
    SET_GPR_U32(ctx, 31, 0x270F4Cu);
    ctx->pc = 0x262910u;
    if (runtime->hasFunction(0x262910u)) {
        auto targetFn = runtime->lookupFunction(0x262910u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x270F4Cu; }
        if (ctx->pc != 0x270F4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetObjSeq__Fi_0x262910(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x270F4Cu; }
        if (ctx->pc != 0x270F4Cu) { return; }
    }
    ctx->pc = 0x270F4Cu;
label_270f4c:
    // 0x270f4c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x270F4Cu;
    {
        const bool branch_taken_0x270f4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x270F50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x270F4Cu;
            // 0x270f50: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x270f4c) {
            ctx->pc = 0x270F5Cu;
            goto label_270f5c;
        }
    }
    ctx->pc = 0x270F54u;
    // 0x270f54: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x270F54u;
    {
        const bool branch_taken_0x270f54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x270F58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x270F54u;
            // 0x270f58: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x270f54) {
            ctx->pc = 0x270F68u;
            goto label_270f68;
        }
    }
    ctx->pc = 0x270F5Cu;
label_270f5c:
    // 0x270f5c: 0xc0972bc  jal         func_25CAF0
    ctx->pc = 0x270F5Cu;
    SET_GPR_U32(ctx, 31, 0x270F64u);
    ctx->pc = 0x270F60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x270F5Cu;
            // 0x270f60: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25CAF0u;
    if (runtime->hasFunction(0x25CAF0u)) {
        auto targetFn = runtime->lookupFunction(0x25CAF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x270F64u; }
        if (ctx->pc != 0x270F64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AddPas__12CSceneObjSeqFPf_0x25caf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x270F64u; }
        if (ctx->pc != 0x270F64u) { return; }
    }
    ctx->pc = 0x270F64u;
label_270f64:
    // 0x270f64: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x270f64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_270f68:
    // 0x270f68: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x270f68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_270f6c:
    // 0x270f6c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x270f6cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x270f70: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x270f70u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x270f74: 0x3e00008  jr          $ra
    ctx->pc = 0x270F74u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x270F78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x270F74u;
            // 0x270f78: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x270F7Cu;
}
