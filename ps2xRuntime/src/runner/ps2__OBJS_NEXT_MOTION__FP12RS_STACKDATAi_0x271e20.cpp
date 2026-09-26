#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _OBJS_NEXT_MOTION__FP12RS_STACKDATAi
// Address: 0x271e20 - 0x27201c
void ps2__OBJS_NEXT_MOTION__FP12RS_STACKDATAi_0x271e20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__OBJS_NEXT_MOTION__FP12RS_STACKDATAi_0x271e20");
#endif

    switch (ctx->pc) {
        case 0x271e88u: goto label_271e88;
        case 0x271eacu: goto label_271eac;
        case 0x271f1cu: goto label_271f1c;
        case 0x271f2cu: goto label_271f2c;
        case 0x271f48u: goto label_271f48;
        case 0x271f60u: goto label_271f60;
        case 0x271f74u: goto label_271f74;
        case 0x271f84u: goto label_271f84;
        case 0x271fa0u: goto label_271fa0;
        case 0x271fb8u: goto label_271fb8;
        case 0x271fd4u: goto label_271fd4;
        case 0x271ff4u: goto label_271ff4;
        default: break;
    }

    ctx->pc = 0x271e20u;

    // 0x271e20: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x271e20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x271e24: 0x3c03bf80  lui         $v1, 0xBF80
    ctx->pc = 0x271e24u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49024 << 16));
    // 0x271e28: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x271e28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x271e2c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x271e2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x271e30: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x271e30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x271e34: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x271e34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x271e38: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x271e38u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x271e3c: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x271e3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x271e40: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x271e40u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x271e44: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x271e44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x271e48: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x271e48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x271e4c: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x271e4cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x271e50: 0x4483a000  mtc1        $v1, $f20
    ctx->pc = 0x271e50u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x271e54: 0x12620044  beq         $s3, $v0, . + 4 + (0x44 << 2)
    ctx->pc = 0x271E54u;
    {
        const bool branch_taken_0x271e54 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        ctx->pc = 0x271E58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x271E54u;
            // 0x271e58: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x271e54) {
            ctx->pc = 0x271F68u;
            goto label_271f68;
        }
    }
    ctx->pc = 0x271E5Cu;
    // 0x271e5c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x271e5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x271e60: 0x12620041  beq         $s3, $v0, . + 4 + (0x41 << 2)
    ctx->pc = 0x271E60u;
    {
        const bool branch_taken_0x271e60 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        ctx->pc = 0x271E64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x271E60u;
            // 0x271e64: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x271e60) {
            ctx->pc = 0x271F68u;
            goto label_271f68;
        }
    }
    ctx->pc = 0x271E68u;
    // 0x271e68: 0x1262003f  beq         $s3, $v0, . + 4 + (0x3F << 2)
    ctx->pc = 0x271E68u;
    {
        const bool branch_taken_0x271e68 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        ctx->pc = 0x271E6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x271E68u;
            // 0x271e6c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x271e68) {
            ctx->pc = 0x271F68u;
            goto label_271f68;
        }
    }
    ctx->pc = 0x271E70u;
    // 0x271e70: 0x12620003  beq         $s3, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x271E70u;
    {
        const bool branch_taken_0x271e70 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        if (branch_taken_0x271e70) {
            ctx->pc = 0x271E80u;
            goto label_271e80;
        }
    }
    ctx->pc = 0x271E78u;
    // 0x271e78: 0x10000051  b           . + 4 + (0x51 << 2)
    ctx->pc = 0x271E78u;
    {
        const bool branch_taken_0x271e78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x271E7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x271E78u;
            // 0x271e7c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x271e78) {
            ctx->pc = 0x271FC0u;
            goto label_271fc0;
        }
    }
    ctx->pc = 0x271E80u;
label_271e80:
    // 0x271e80: 0xc097e18  jal         func_25F860
    ctx->pc = 0x271E80u;
    SET_GPR_U32(ctx, 31, 0x271E88u);
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x271E88u; }
        if (ctx->pc != 0x271E88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x271E88u; }
        if (ctx->pc != 0x271E88u) { return; }
    }
    ctx->pc = 0x271E88u;
label_271e88:
    // 0x271e88: 0x3c0101f0  lui         $at, 0x1F0
    ctx->pc = 0x271e88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)496 << 16));
    // 0x271e8c: 0x8c262a34  lw          $a2, 0x2A34($at)
    ctx->pc = 0x271e8cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 10804)));
    // 0x271e90: 0x14c00003  bnez        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x271E90u;
    {
        const bool branch_taken_0x271e90 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x271E94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x271E90u;
            // 0x271e94: 0x3c0101f0  lui         $at, 0x1F0 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)496 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x271e90) {
            ctx->pc = 0x271EA0u;
            goto label_271ea0;
        }
    }
    ctx->pc = 0x271E98u;
    // 0x271e98: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x271E98u;
    {
        const bool branch_taken_0x271e98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x271E9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x271E98u;
            // 0x271e9c: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x271e98) {
            ctx->pc = 0x271F04u;
            goto label_271f04;
        }
    }
    ctx->pc = 0x271EA0u;
label_271ea0:
    // 0x271ea0: 0x8c242a38  lw          $a0, 0x2A38($at)
    ctx->pc = 0x271ea0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 10808)));
    // 0x271ea4: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x271EA4u;
    {
        const bool branch_taken_0x271ea4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x271EA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x271EA4u;
            // 0x271ea8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x271ea4) {
            ctx->pc = 0x271ED8u;
            goto label_271ed8;
        }
    }
    ctx->pc = 0x271EACu;
label_271eac:
    // 0x271eac: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x271eacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x271eb0: 0x1043000c  beq         $v0, $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x271EB0u;
    {
        const bool branch_taken_0x271eb0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x271eb0) {
            ctx->pc = 0x271EE4u;
            goto label_271ee4;
        }
    }
    ctx->pc = 0x271EB8u;
    // 0x271eb8: 0x8cc6000c  lw          $a2, 0xC($a2)
    ctx->pc = 0x271eb8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x271ebc: 0x10c00003  beqz        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x271EBCu;
    {
        const bool branch_taken_0x271ebc = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x271ebc) {
            ctx->pc = 0x271ECCu;
            goto label_271ecc;
        }
    }
    ctx->pc = 0x271EC4u;
    // 0x271ec4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x271EC4u;
    {
        const bool branch_taken_0x271ec4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x271EC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x271EC4u;
            // 0x271ec8: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x271ec4) {
            ctx->pc = 0x271ED8u;
            goto label_271ed8;
        }
    }
    ctx->pc = 0x271ECCu;
label_271ecc:
    // 0x271ecc: 0x0  nop
    ctx->pc = 0x271eccu;
    // NOP
    // 0x271ed0: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x271ED0u;
    {
        const bool branch_taken_0x271ed0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x271ED4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x271ED0u;
            // 0x271ed4: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x271ed0) {
            ctx->pc = 0x271F04u;
            goto label_271f04;
        }
    }
    ctx->pc = 0x271ED8u;
label_271ed8:
    // 0x271ed8: 0xa4182a  slt         $v1, $a1, $a0
    ctx->pc = 0x271ed8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x271edc: 0x1460fff3  bnez        $v1, . + 4 + (-0xD << 2)
    ctx->pc = 0x271EDCu;
    {
        const bool branch_taken_0x271edc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x271edc) {
            ctx->pc = 0x271EACu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_271eac;
        }
    }
    ctx->pc = 0x271EE4u;
label_271ee4:
    // 0x271ee4: 0x0  nop
    ctx->pc = 0x271ee4u;
    // NOP
    // 0x271ee8: 0x14c00003  bnez        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x271EE8u;
    {
        const bool branch_taken_0x271ee8 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x271EECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x271EE8u;
            // 0x271eec: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x271ee8) {
            ctx->pc = 0x271EF8u;
            goto label_271ef8;
        }
    }
    ctx->pc = 0x271EF0u;
    // 0x271ef0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x271EF0u;
    {
        const bool branch_taken_0x271ef0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x271ef0) {
            ctx->pc = 0x271F04u;
            goto label_271f04;
        }
    }
    ctx->pc = 0x271EF8u;
label_271ef8:
    // 0x271ef8: 0x8cd30008  lw          $s3, 0x8($a2)
    ctx->pc = 0x271ef8u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x271efc: 0x8cd40004  lw          $s4, 0x4($a2)
    ctx->pc = 0x271efcu;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x271f00: 0x0  nop
    ctx->pc = 0x271f00u;
    // NOP
label_271f04:
    // 0x271f04: 0x16800003  bnez        $s4, . + 4 + (0x3 << 2)
    ctx->pc = 0x271F04u;
    {
        const bool branch_taken_0x271f04 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x271F08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x271F04u;
            // 0x271f08: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x271f04) {
            ctx->pc = 0x271F14u;
            goto label_271f14;
        }
    }
    ctx->pc = 0x271F0Cu;
    // 0x271f0c: 0x1000003a  b           . + 4 + (0x3A << 2)
    ctx->pc = 0x271F0Cu;
    {
        const bool branch_taken_0x271f0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x271F10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x271F0Cu;
            // 0x271f10: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x271f0c) {
            ctx->pc = 0x271FF8u;
            goto label_271ff8;
        }
    }
    ctx->pc = 0x271F14u;
label_271f14:
    // 0x271f14: 0xc097f6c  jal         func_25FDB0
    ctx->pc = 0x271F14u;
    SET_GPR_U32(ctx, 31, 0x271F1Cu);
    ctx->pc = 0x271F18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x271F14u;
            // 0x271f18: 0x24940008  addiu       $s4, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25FDB0u;
    if (runtime->hasFunction(0x25FDB0u)) {
        auto targetFn = runtime->lookupFunction(0x25FDB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x271F1Cu; }
        if (ctx->pc != 0x271F1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetArgInt__FP8ARG_DATA_0x25fdb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x271F1Cu; }
        if (ctx->pc != 0x271F1Cu) { return; }
    }
    ctx->pc = 0x271F1Cu;
label_271f1c:
    // 0x271f1c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x271f1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x271f20: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x271f20u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x271f24: 0xc097f98  jal         func_25FE60
    ctx->pc = 0x271F24u;
    SET_GPR_U32(ctx, 31, 0x271F2Cu);
    ctx->pc = 0x271F28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x271F24u;
            // 0x271f28: 0x24940008  addiu       $s4, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25FE60u;
    if (runtime->hasFunction(0x25FE60u)) {
        auto targetFn = runtime->lookupFunction(0x25FE60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x271F2Cu; }
        if (ctx->pc != 0x271F2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetArgString__FP8ARG_DATA_0x25fe60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x271F2Cu; }
        if (ctx->pc != 0x271F2Cu) { return; }
    }
    ctx->pc = 0x271F2Cu;
label_271f2c:
    // 0x271f2c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x271f2cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x271f30: 0x2a620003  slti        $v0, $s3, 0x3
    ctx->pc = 0x271f30u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x271f34: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x271F34u;
    {
        const bool branch_taken_0x271f34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x271F38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x271F34u;
            // 0x271f38: 0x2a620004  slti        $v0, $s3, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)4) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x271f34) {
            ctx->pc = 0x271F50u;
            goto label_271f50;
        }
    }
    ctx->pc = 0x271F3Cu;
    // 0x271f3c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x271f3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x271f40: 0xc097f6c  jal         func_25FDB0
    ctx->pc = 0x271F40u;
    SET_GPR_U32(ctx, 31, 0x271F48u);
    ctx->pc = 0x271F44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x271F40u;
            // 0x271f44: 0x24940008  addiu       $s4, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25FDB0u;
    if (runtime->hasFunction(0x25FDB0u)) {
        auto targetFn = runtime->lookupFunction(0x25FDB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x271F48u; }
        if (ctx->pc != 0x271F48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetArgInt__FP8ARG_DATA_0x25fdb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x271F48u; }
        if (ctx->pc != 0x271F48u) { return; }
    }
    ctx->pc = 0x271F48u;
label_271f48:
    // 0x271f48: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x271f48u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x271f4c: 0x2a620004  slti        $v0, $s3, 0x4
    ctx->pc = 0x271f4cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)4) ? 1 : 0);
label_271f50:
    // 0x271f50: 0x1440001e  bnez        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x271F50u;
    {
        const bool branch_taken_0x271f50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x271F54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x271F50u;
            // 0x271f54: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x271f50) {
            ctx->pc = 0x271FCCu;
            goto label_271fcc;
        }
    }
    ctx->pc = 0x271F58u;
    // 0x271f58: 0xc097f84  jal         func_25FE10
    ctx->pc = 0x271F58u;
    SET_GPR_U32(ctx, 31, 0x271F60u);
    ctx->pc = 0x271F5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x271F58u;
            // 0x271f5c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25FE10u;
    if (runtime->hasFunction(0x25FE10u)) {
        auto targetFn = runtime->lookupFunction(0x25FE10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x271F60u; }
        if (ctx->pc != 0x271F60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetArgFloat__FP8ARG_DATA_0x25fe10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x271F60u; }
        if (ctx->pc != 0x271F60u) { return; }
    }
    ctx->pc = 0x271F60u;
label_271f60:
    // 0x271f60: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x271F60u;
    {
        const bool branch_taken_0x271f60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x271F64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x271F60u;
            // 0x271f64: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x271f60) {
            ctx->pc = 0x271FC8u;
            goto label_271fc8;
        }
    }
    ctx->pc = 0x271F68u;
label_271f68:
    // 0x271f68: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x271f68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x271f6c: 0xc097e18  jal         func_25F860
    ctx->pc = 0x271F6Cu;
    SET_GPR_U32(ctx, 31, 0x271F74u);
    ctx->pc = 0x271F70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x271F6Cu;
            // 0x271f70: 0x24940008  addiu       $s4, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x271F74u; }
        if (ctx->pc != 0x271F74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x271F74u; }
        if (ctx->pc != 0x271F74u) { return; }
    }
    ctx->pc = 0x271F74u;
label_271f74:
    // 0x271f74: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x271f74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x271f78: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x271f78u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x271f7c: 0xc097e48  jal         func_25F920
    ctx->pc = 0x271F7Cu;
    SET_GPR_U32(ctx, 31, 0x271F84u);
    ctx->pc = 0x271F80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x271F7Cu;
            // 0x271f80: 0x24940008  addiu       $s4, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F920u;
    if (runtime->hasFunction(0x25F920u)) {
        auto targetFn = runtime->lookupFunction(0x25F920u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x271F84u; }
        if (ctx->pc != 0x271F84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackString__FP12RS_STACKDATA_0x25f920(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x271F84u; }
        if (ctx->pc != 0x271F84u) { return; }
    }
    ctx->pc = 0x271F84u;
label_271f84:
    // 0x271f84: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x271f84u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x271f88: 0x2a620003  slti        $v0, $s3, 0x3
    ctx->pc = 0x271f88u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x271f8c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x271F8Cu;
    {
        const bool branch_taken_0x271f8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x271F90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x271F8Cu;
            // 0x271f90: 0x2a620004  slti        $v0, $s3, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)4) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x271f8c) {
            ctx->pc = 0x271FA8u;
            goto label_271fa8;
        }
    }
    ctx->pc = 0x271F94u;
    // 0x271f94: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x271f94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x271f98: 0xc097e18  jal         func_25F860
    ctx->pc = 0x271F98u;
    SET_GPR_U32(ctx, 31, 0x271FA0u);
    ctx->pc = 0x271F9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x271F98u;
            // 0x271f9c: 0x24940008  addiu       $s4, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x271FA0u; }
        if (ctx->pc != 0x271FA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x271FA0u; }
        if (ctx->pc != 0x271FA0u) { return; }
    }
    ctx->pc = 0x271FA0u;
label_271fa0:
    // 0x271fa0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x271fa0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x271fa4: 0x2a620004  slti        $v0, $s3, 0x4
    ctx->pc = 0x271fa4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)4) ? 1 : 0);
label_271fa8:
    // 0x271fa8: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x271FA8u;
    {
        const bool branch_taken_0x271fa8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x271FACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x271FA8u;
            // 0x271fac: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x271fa8) {
            ctx->pc = 0x271FC8u;
            goto label_271fc8;
        }
    }
    ctx->pc = 0x271FB0u;
    // 0x271fb0: 0xc097e28  jal         func_25F8A0
    ctx->pc = 0x271FB0u;
    SET_GPR_U32(ctx, 31, 0x271FB8u);
    ctx->pc = 0x25F8A0u;
    if (runtime->hasFunction(0x25F8A0u)) {
        auto targetFn = runtime->lookupFunction(0x25F8A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x271FB8u; }
        if (ctx->pc != 0x271FB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackFloat__FP12RS_STACKDATA_0x25f8a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x271FB8u; }
        if (ctx->pc != 0x271FB8u) { return; }
    }
    ctx->pc = 0x271FB8u;
label_271fb8:
    // 0x271fb8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x271FB8u;
    {
        const bool branch_taken_0x271fb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x271FBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x271FB8u;
            // 0x271fbc: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x271fb8) {
            ctx->pc = 0x271FC8u;
            goto label_271fc8;
        }
    }
    ctx->pc = 0x271FC0u;
label_271fc0:
    // 0x271fc0: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x271FC0u;
    {
        const bool branch_taken_0x271fc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x271FC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x271FC0u;
            // 0x271fc4: 0xdfbf0060  ld          $ra, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x271fc0) {
            ctx->pc = 0x271FFCu;
            goto label_271ffc;
        }
    }
    ctx->pc = 0x271FC8u;
label_271fc8:
    // 0x271fc8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x271fc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_271fcc:
    // 0x271fcc: 0xc098a44  jal         func_262910
    ctx->pc = 0x271FCCu;
    SET_GPR_U32(ctx, 31, 0x271FD4u);
    ctx->pc = 0x262910u;
    if (runtime->hasFunction(0x262910u)) {
        auto targetFn = runtime->lookupFunction(0x262910u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x271FD4u; }
        if (ctx->pc != 0x271FD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetObjSeq__Fi_0x262910(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x271FD4u; }
        if (ctx->pc != 0x271FD4u) { return; }
    }
    ctx->pc = 0x271FD4u;
label_271fd4:
    // 0x271fd4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x271FD4u;
    {
        const bool branch_taken_0x271fd4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x271FD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x271FD4u;
            // 0x271fd8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x271fd4) {
            ctx->pc = 0x271FE4u;
            goto label_271fe4;
        }
    }
    ctx->pc = 0x271FDCu;
    // 0x271fdc: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x271FDCu;
    {
        const bool branch_taken_0x271fdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x271FE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x271FDCu;
            // 0x271fe0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x271fdc) {
            ctx->pc = 0x271FF8u;
            goto label_271ff8;
        }
    }
    ctx->pc = 0x271FE4u;
label_271fe4:
    // 0x271fe4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x271fe4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x271fe8: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x271fe8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x271fec: 0xc0973e4  jal         func_25CF90
    ctx->pc = 0x271FECu;
    SET_GPR_U32(ctx, 31, 0x271FF4u);
    ctx->pc = 0x271FF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x271FECu;
            // 0x271ff0: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x25CF90u;
    if (runtime->hasFunction(0x25CF90u)) {
        auto targetFn = runtime->lookupFunction(0x25CF90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x271FF4u; }
        if (ctx->pc != 0x271FF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        NextMotion__12CSceneObjSeqFPcif_0x25cf90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x271FF4u; }
        if (ctx->pc != 0x271FF4u) { return; }
    }
    ctx->pc = 0x271FF4u;
label_271ff4:
    // 0x271ff4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x271ff4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_271ff8:
    // 0x271ff8: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x271ff8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_271ffc:
    // 0x271ffc: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x271ffcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x272000: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x272000u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x272004: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x272004u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x272008: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x272008u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x27200c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x27200cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x272010: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x272010u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x272014: 0x3e00008  jr          $ra
    ctx->pc = 0x272014u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x272018u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x272014u;
            // 0x272018: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x27201Cu;
}
