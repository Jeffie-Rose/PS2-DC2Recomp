#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _OBJS_SET_MOTION__FP12RS_STACKDATAi
// Address: 0x271bb0 - 0x271e18
void ps2__OBJS_SET_MOTION__FP12RS_STACKDATAi_0x271bb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__OBJS_SET_MOTION__FP12RS_STACKDATAi_0x271bb0");
#endif

    switch (ctx->pc) {
        case 0x271c28u: goto label_271c28;
        case 0x271c4cu: goto label_271c4c;
        case 0x271cbcu: goto label_271cbc;
        case 0x271cccu: goto label_271ccc;
        case 0x271ce8u: goto label_271ce8;
        case 0x271d04u: goto label_271d04;
        case 0x271d1cu: goto label_271d1c;
        case 0x271d30u: goto label_271d30;
        case 0x271d40u: goto label_271d40;
        case 0x271d5cu: goto label_271d5c;
        case 0x271d78u: goto label_271d78;
        case 0x271d90u: goto label_271d90;
        case 0x271dacu: goto label_271dac;
        case 0x271dd0u: goto label_271dd0;
        case 0x271de4u: goto label_271de4;
        case 0x271decu: goto label_271dec;
        default: break;
    }

    ctx->pc = 0x271bb0u;

    // 0x271bb0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x271bb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x271bb4: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x271bb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x271bb8: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x271bb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x271bbc: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x271bbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x271bc0: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x271bc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x271bc4: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x271bc4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x271bc8: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x271bc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x271bcc: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x271bccu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x271bd0: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x271bd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x271bd4: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x271bd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x271bd8: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x271bd8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x271bdc: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x271bdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x271be0: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x271be0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x271be4: 0x4482a000  mtc1        $v0, $f20
    ctx->pc = 0x271be4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x271be8: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x271be8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x271bec: 0x12a2004d  beq         $s5, $v0, . + 4 + (0x4D << 2)
    ctx->pc = 0x271BECu;
    {
        const bool branch_taken_0x271bec = (GPR_U64(ctx, 21) == GPR_U64(ctx, 2));
        ctx->pc = 0x271BF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x271BECu;
            // 0x271bf0: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x271bec) {
            ctx->pc = 0x271D24u;
            goto label_271d24;
        }
    }
    ctx->pc = 0x271BF4u;
    // 0x271bf4: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x271bf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x271bf8: 0x12a2004a  beq         $s5, $v0, . + 4 + (0x4A << 2)
    ctx->pc = 0x271BF8u;
    {
        const bool branch_taken_0x271bf8 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 2));
        ctx->pc = 0x271BFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x271BF8u;
            // 0x271bfc: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x271bf8) {
            ctx->pc = 0x271D24u;
            goto label_271d24;
        }
    }
    ctx->pc = 0x271C00u;
    // 0x271c00: 0x12a20048  beq         $s5, $v0, . + 4 + (0x48 << 2)
    ctx->pc = 0x271C00u;
    {
        const bool branch_taken_0x271c00 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 2));
        ctx->pc = 0x271C04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x271C00u;
            // 0x271c04: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x271c00) {
            ctx->pc = 0x271D24u;
            goto label_271d24;
        }
    }
    ctx->pc = 0x271C08u;
    // 0x271c08: 0x12a20046  beq         $s5, $v0, . + 4 + (0x46 << 2)
    ctx->pc = 0x271C08u;
    {
        const bool branch_taken_0x271c08 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 2));
        ctx->pc = 0x271C0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x271C08u;
            // 0x271c0c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x271c08) {
            ctx->pc = 0x271D24u;
            goto label_271d24;
        }
    }
    ctx->pc = 0x271C10u;
    // 0x271c10: 0x12a20003  beq         $s5, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x271C10u;
    {
        const bool branch_taken_0x271c10 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 2));
        if (branch_taken_0x271c10) {
            ctx->pc = 0x271C20u;
            goto label_271c20;
        }
    }
    ctx->pc = 0x271C18u;
    // 0x271c18: 0x1000005f  b           . + 4 + (0x5F << 2)
    ctx->pc = 0x271C18u;
    {
        const bool branch_taken_0x271c18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x271C1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x271C18u;
            // 0x271c1c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x271c18) {
            ctx->pc = 0x271D98u;
            goto label_271d98;
        }
    }
    ctx->pc = 0x271C20u;
label_271c20:
    // 0x271c20: 0xc097e18  jal         func_25F860
    ctx->pc = 0x271C20u;
    SET_GPR_U32(ctx, 31, 0x271C28u);
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x271C28u; }
        if (ctx->pc != 0x271C28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x271C28u; }
        if (ctx->pc != 0x271C28u) { return; }
    }
    ctx->pc = 0x271C28u;
label_271c28:
    // 0x271c28: 0x3c0101f0  lui         $at, 0x1F0
    ctx->pc = 0x271c28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)496 << 16));
    // 0x271c2c: 0x8c262a34  lw          $a2, 0x2A34($at)
    ctx->pc = 0x271c2cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 10804)));
    // 0x271c30: 0x14c00003  bnez        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x271C30u;
    {
        const bool branch_taken_0x271c30 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x271C34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x271C30u;
            // 0x271c34: 0x3c0101f0  lui         $at, 0x1F0 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)496 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x271c30) {
            ctx->pc = 0x271C40u;
            goto label_271c40;
        }
    }
    ctx->pc = 0x271C38u;
    // 0x271c38: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x271C38u;
    {
        const bool branch_taken_0x271c38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x271C3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x271C38u;
            // 0x271c3c: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x271c38) {
            ctx->pc = 0x271CA4u;
            goto label_271ca4;
        }
    }
    ctx->pc = 0x271C40u;
label_271c40:
    // 0x271c40: 0x8c242a38  lw          $a0, 0x2A38($at)
    ctx->pc = 0x271c40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 10808)));
    // 0x271c44: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x271C44u;
    {
        const bool branch_taken_0x271c44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x271C48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x271C44u;
            // 0x271c48: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x271c44) {
            ctx->pc = 0x271C78u;
            goto label_271c78;
        }
    }
    ctx->pc = 0x271C4Cu;
label_271c4c:
    // 0x271c4c: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x271c4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x271c50: 0x1043000c  beq         $v0, $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x271C50u;
    {
        const bool branch_taken_0x271c50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x271c50) {
            ctx->pc = 0x271C84u;
            goto label_271c84;
        }
    }
    ctx->pc = 0x271C58u;
    // 0x271c58: 0x8cc6000c  lw          $a2, 0xC($a2)
    ctx->pc = 0x271c58u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x271c5c: 0x10c00003  beqz        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x271C5Cu;
    {
        const bool branch_taken_0x271c5c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x271c5c) {
            ctx->pc = 0x271C6Cu;
            goto label_271c6c;
        }
    }
    ctx->pc = 0x271C64u;
    // 0x271c64: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x271C64u;
    {
        const bool branch_taken_0x271c64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x271C68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x271C64u;
            // 0x271c68: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x271c64) {
            ctx->pc = 0x271C78u;
            goto label_271c78;
        }
    }
    ctx->pc = 0x271C6Cu;
label_271c6c:
    // 0x271c6c: 0x0  nop
    ctx->pc = 0x271c6cu;
    // NOP
    // 0x271c70: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x271C70u;
    {
        const bool branch_taken_0x271c70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x271C74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x271C70u;
            // 0x271c74: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x271c70) {
            ctx->pc = 0x271CA4u;
            goto label_271ca4;
        }
    }
    ctx->pc = 0x271C78u;
label_271c78:
    // 0x271c78: 0xa4182a  slt         $v1, $a1, $a0
    ctx->pc = 0x271c78u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x271c7c: 0x1460fff3  bnez        $v1, . + 4 + (-0xD << 2)
    ctx->pc = 0x271C7Cu;
    {
        const bool branch_taken_0x271c7c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x271c7c) {
            ctx->pc = 0x271C4Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_271c4c;
        }
    }
    ctx->pc = 0x271C84u;
label_271c84:
    // 0x271c84: 0x0  nop
    ctx->pc = 0x271c84u;
    // NOP
    // 0x271c88: 0x14c00003  bnez        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x271C88u;
    {
        const bool branch_taken_0x271c88 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x271C8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x271C88u;
            // 0x271c8c: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x271c88) {
            ctx->pc = 0x271C98u;
            goto label_271c98;
        }
    }
    ctx->pc = 0x271C90u;
    // 0x271c90: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x271C90u;
    {
        const bool branch_taken_0x271c90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x271c90) {
            ctx->pc = 0x271CA4u;
            goto label_271ca4;
        }
    }
    ctx->pc = 0x271C98u;
label_271c98:
    // 0x271c98: 0x8cd50008  lw          $s5, 0x8($a2)
    ctx->pc = 0x271c98u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x271c9c: 0x8cd40004  lw          $s4, 0x4($a2)
    ctx->pc = 0x271c9cu;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x271ca0: 0x0  nop
    ctx->pc = 0x271ca0u;
    // NOP
label_271ca4:
    // 0x271ca4: 0x16800003  bnez        $s4, . + 4 + (0x3 << 2)
    ctx->pc = 0x271CA4u;
    {
        const bool branch_taken_0x271ca4 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x271CA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x271CA4u;
            // 0x271ca8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x271ca4) {
            ctx->pc = 0x271CB4u;
            goto label_271cb4;
        }
    }
    ctx->pc = 0x271CACu;
    // 0x271cac: 0x10000050  b           . + 4 + (0x50 << 2)
    ctx->pc = 0x271CACu;
    {
        const bool branch_taken_0x271cac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x271CB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x271CACu;
            // 0x271cb0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x271cac) {
            ctx->pc = 0x271DF0u;
            goto label_271df0;
        }
    }
    ctx->pc = 0x271CB4u;
label_271cb4:
    // 0x271cb4: 0xc097f6c  jal         func_25FDB0
    ctx->pc = 0x271CB4u;
    SET_GPR_U32(ctx, 31, 0x271CBCu);
    ctx->pc = 0x271CB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x271CB4u;
            // 0x271cb8: 0x24940008  addiu       $s4, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25FDB0u;
    if (runtime->hasFunction(0x25FDB0u)) {
        auto targetFn = runtime->lookupFunction(0x25FDB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x271CBCu; }
        if (ctx->pc != 0x271CBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetArgInt__FP8ARG_DATA_0x25fdb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x271CBCu; }
        if (ctx->pc != 0x271CBCu) { return; }
    }
    ctx->pc = 0x271CBCu;
label_271cbc:
    // 0x271cbc: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x271cbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x271cc0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x271cc0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x271cc4: 0xc097f98  jal         func_25FE60
    ctx->pc = 0x271CC4u;
    SET_GPR_U32(ctx, 31, 0x271CCCu);
    ctx->pc = 0x271CC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x271CC4u;
            // 0x271cc8: 0x24940008  addiu       $s4, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25FE60u;
    if (runtime->hasFunction(0x25FE60u)) {
        auto targetFn = runtime->lookupFunction(0x25FE60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x271CCCu; }
        if (ctx->pc != 0x271CCCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetArgString__FP8ARG_DATA_0x25fe60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x271CCCu; }
        if (ctx->pc != 0x271CCCu) { return; }
    }
    ctx->pc = 0x271CCCu;
label_271ccc:
    // 0x271ccc: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x271cccu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x271cd0: 0x2aa20003  slti        $v0, $s5, 0x3
    ctx->pc = 0x271cd0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x271cd4: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x271CD4u;
    {
        const bool branch_taken_0x271cd4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x271CD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x271CD4u;
            // 0x271cd8: 0x2aa20004  slti        $v0, $s5, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)(int32_t)4) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x271cd4) {
            ctx->pc = 0x271CF0u;
            goto label_271cf0;
        }
    }
    ctx->pc = 0x271CDCu;
    // 0x271cdc: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x271cdcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x271ce0: 0xc097f6c  jal         func_25FDB0
    ctx->pc = 0x271CE0u;
    SET_GPR_U32(ctx, 31, 0x271CE8u);
    ctx->pc = 0x271CE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x271CE0u;
            // 0x271ce4: 0x24940008  addiu       $s4, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25FDB0u;
    if (runtime->hasFunction(0x25FDB0u)) {
        auto targetFn = runtime->lookupFunction(0x25FDB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x271CE8u; }
        if (ctx->pc != 0x271CE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetArgInt__FP8ARG_DATA_0x25fdb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x271CE8u; }
        if (ctx->pc != 0x271CE8u) { return; }
    }
    ctx->pc = 0x271CE8u;
label_271ce8:
    // 0x271ce8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x271ce8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x271cec: 0x2aa20004  slti        $v0, $s5, 0x4
    ctx->pc = 0x271cecu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)(int32_t)4) ? 1 : 0);
label_271cf0:
    // 0x271cf0: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x271CF0u;
    {
        const bool branch_taken_0x271cf0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x271CF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x271CF0u;
            // 0x271cf4: 0x2aa20005  slti        $v0, $s5, 0x5 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)(int32_t)5) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x271cf0) {
            ctx->pc = 0x271D0Cu;
            goto label_271d0c;
        }
    }
    ctx->pc = 0x271CF8u;
    // 0x271cf8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x271cf8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x271cfc: 0xc097f84  jal         func_25FE10
    ctx->pc = 0x271CFCu;
    SET_GPR_U32(ctx, 31, 0x271D04u);
    ctx->pc = 0x271D00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x271CFCu;
            // 0x271d00: 0x24940008  addiu       $s4, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25FE10u;
    if (runtime->hasFunction(0x25FE10u)) {
        auto targetFn = runtime->lookupFunction(0x25FE10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x271D04u; }
        if (ctx->pc != 0x271D04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetArgFloat__FP8ARG_DATA_0x25fe10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x271D04u; }
        if (ctx->pc != 0x271D04u) { return; }
    }
    ctx->pc = 0x271D04u;
label_271d04:
    // 0x271d04: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x271d04u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x271d08: 0x2aa20005  slti        $v0, $s5, 0x5
    ctx->pc = 0x271d08u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)(int32_t)5) ? 1 : 0);
label_271d0c:
    // 0x271d0c: 0x14400025  bnez        $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x271D0Cu;
    {
        const bool branch_taken_0x271d0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x271D10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x271D0Cu;
            // 0x271d10: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x271d0c) {
            ctx->pc = 0x271DA4u;
            goto label_271da4;
        }
    }
    ctx->pc = 0x271D14u;
    // 0x271d14: 0xc097f6c  jal         func_25FDB0
    ctx->pc = 0x271D14u;
    SET_GPR_U32(ctx, 31, 0x271D1Cu);
    ctx->pc = 0x271D18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x271D14u;
            // 0x271d18: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25FDB0u;
    if (runtime->hasFunction(0x25FDB0u)) {
        auto targetFn = runtime->lookupFunction(0x25FDB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x271D1Cu; }
        if (ctx->pc != 0x271D1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetArgInt__FP8ARG_DATA_0x25fdb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x271D1Cu; }
        if (ctx->pc != 0x271D1Cu) { return; }
    }
    ctx->pc = 0x271D1Cu;
label_271d1c:
    // 0x271d1c: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x271D1Cu;
    {
        const bool branch_taken_0x271d1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x271D20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x271D1Cu;
            // 0x271d20: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x271d1c) {
            ctx->pc = 0x271DA0u;
            goto label_271da0;
        }
    }
    ctx->pc = 0x271D24u;
label_271d24:
    // 0x271d24: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x271d24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x271d28: 0xc097e18  jal         func_25F860
    ctx->pc = 0x271D28u;
    SET_GPR_U32(ctx, 31, 0x271D30u);
    ctx->pc = 0x271D2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x271D28u;
            // 0x271d2c: 0x24940008  addiu       $s4, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x271D30u; }
        if (ctx->pc != 0x271D30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x271D30u; }
        if (ctx->pc != 0x271D30u) { return; }
    }
    ctx->pc = 0x271D30u;
label_271d30:
    // 0x271d30: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x271d30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x271d34: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x271d34u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x271d38: 0xc097e48  jal         func_25F920
    ctx->pc = 0x271D38u;
    SET_GPR_U32(ctx, 31, 0x271D40u);
    ctx->pc = 0x271D3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x271D38u;
            // 0x271d3c: 0x24940008  addiu       $s4, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F920u;
    if (runtime->hasFunction(0x25F920u)) {
        auto targetFn = runtime->lookupFunction(0x25F920u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x271D40u; }
        if (ctx->pc != 0x271D40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackString__FP12RS_STACKDATA_0x25f920(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x271D40u; }
        if (ctx->pc != 0x271D40u) { return; }
    }
    ctx->pc = 0x271D40u;
label_271d40:
    // 0x271d40: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x271d40u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x271d44: 0x2aa20003  slti        $v0, $s5, 0x3
    ctx->pc = 0x271d44u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x271d48: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x271D48u;
    {
        const bool branch_taken_0x271d48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x271D4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x271D48u;
            // 0x271d4c: 0x2aa20004  slti        $v0, $s5, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)(int32_t)4) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x271d48) {
            ctx->pc = 0x271D64u;
            goto label_271d64;
        }
    }
    ctx->pc = 0x271D50u;
    // 0x271d50: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x271d50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x271d54: 0xc097e18  jal         func_25F860
    ctx->pc = 0x271D54u;
    SET_GPR_U32(ctx, 31, 0x271D5Cu);
    ctx->pc = 0x271D58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x271D54u;
            // 0x271d58: 0x24940008  addiu       $s4, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x271D5Cu; }
        if (ctx->pc != 0x271D5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x271D5Cu; }
        if (ctx->pc != 0x271D5Cu) { return; }
    }
    ctx->pc = 0x271D5Cu;
label_271d5c:
    // 0x271d5c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x271d5cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x271d60: 0x2aa20004  slti        $v0, $s5, 0x4
    ctx->pc = 0x271d60u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)(int32_t)4) ? 1 : 0);
label_271d64:
    // 0x271d64: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x271D64u;
    {
        const bool branch_taken_0x271d64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x271D68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x271D64u;
            // 0x271d68: 0x2aa20005  slti        $v0, $s5, 0x5 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)(int32_t)5) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x271d64) {
            ctx->pc = 0x271D80u;
            goto label_271d80;
        }
    }
    ctx->pc = 0x271D6Cu;
    // 0x271d6c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x271d6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x271d70: 0xc097e28  jal         func_25F8A0
    ctx->pc = 0x271D70u;
    SET_GPR_U32(ctx, 31, 0x271D78u);
    ctx->pc = 0x271D74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x271D70u;
            // 0x271d74: 0x24940008  addiu       $s4, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F8A0u;
    if (runtime->hasFunction(0x25F8A0u)) {
        auto targetFn = runtime->lookupFunction(0x25F8A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x271D78u; }
        if (ctx->pc != 0x271D78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackFloat__FP12RS_STACKDATA_0x25f8a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x271D78u; }
        if (ctx->pc != 0x271D78u) { return; }
    }
    ctx->pc = 0x271D78u;
label_271d78:
    // 0x271d78: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x271d78u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x271d7c: 0x2aa20005  slti        $v0, $s5, 0x5
    ctx->pc = 0x271d7cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)(int32_t)5) ? 1 : 0);
label_271d80:
    // 0x271d80: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x271D80u;
    {
        const bool branch_taken_0x271d80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x271D84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x271D80u;
            // 0x271d84: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x271d80) {
            ctx->pc = 0x271DA0u;
            goto label_271da0;
        }
    }
    ctx->pc = 0x271D88u;
    // 0x271d88: 0xc097e18  jal         func_25F860
    ctx->pc = 0x271D88u;
    SET_GPR_U32(ctx, 31, 0x271D90u);
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x271D90u; }
        if (ctx->pc != 0x271D90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x271D90u; }
        if (ctx->pc != 0x271D90u) { return; }
    }
    ctx->pc = 0x271D90u;
label_271d90:
    // 0x271d90: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x271D90u;
    {
        const bool branch_taken_0x271d90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x271D94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x271D90u;
            // 0x271d94: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x271d90) {
            ctx->pc = 0x271DA0u;
            goto label_271da0;
        }
    }
    ctx->pc = 0x271D98u;
label_271d98:
    // 0x271d98: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x271D98u;
    {
        const bool branch_taken_0x271d98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x271D9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x271D98u;
            // 0x271d9c: 0xdfbf0070  ld          $ra, 0x70($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x271d98) {
            ctx->pc = 0x271DF4u;
            goto label_271df4;
        }
    }
    ctx->pc = 0x271DA0u;
label_271da0:
    // 0x271da0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x271da0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_271da4:
    // 0x271da4: 0xc098a44  jal         func_262910
    ctx->pc = 0x271DA4u;
    SET_GPR_U32(ctx, 31, 0x271DACu);
    ctx->pc = 0x262910u;
    if (runtime->hasFunction(0x262910u)) {
        auto targetFn = runtime->lookupFunction(0x262910u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x271DACu; }
        if (ctx->pc != 0x271DACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetObjSeq__Fi_0x262910(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x271DACu; }
        if (ctx->pc != 0x271DACu) { return; }
    }
    ctx->pc = 0x271DACu;
label_271dac:
    // 0x271dac: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x271dacu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x271db0: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x271DB0u;
    {
        const bool branch_taken_0x271db0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x271DB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x271DB0u;
            // 0x271db4: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x271db0) {
            ctx->pc = 0x271DC0u;
            goto label_271dc0;
        }
    }
    ctx->pc = 0x271DB8u;
    // 0x271db8: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x271DB8u;
    {
        const bool branch_taken_0x271db8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x271DBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x271DB8u;
            // 0x271dbc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x271db8) {
            ctx->pc = 0x271DF0u;
            goto label_271df0;
        }
    }
    ctx->pc = 0x271DC0u;
label_271dc0:
    // 0x271dc0: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x271dc0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x271dc4: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x271dc4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x271dc8: 0xc0973c8  jal         func_25CF20
    ctx->pc = 0x271DC8u;
    SET_GPR_U32(ctx, 31, 0x271DD0u);
    ctx->pc = 0x271DCCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x271DC8u;
            // 0x271dcc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25CF20u;
    if (runtime->hasFunction(0x25CF20u)) {
        auto targetFn = runtime->lookupFunction(0x25CF20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x271DD0u; }
        if (ctx->pc != 0x271DD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetMotion__12CSceneObjSeqFPcif_0x25cf20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x271DD0u; }
        if (ctx->pc != 0x271DD0u) { return; }
    }
    ctx->pc = 0x271DD0u;
label_271dd0:
    // 0x271dd0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x271dd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x271dd4: 0x16420006  bne         $s2, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x271DD4u;
    {
        const bool branch_taken_0x271dd4 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        ctx->pc = 0x271DD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x271DD4u;
            // 0x271dd8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x271dd4) {
            ctx->pc = 0x271DF0u;
            goto label_271df0;
        }
    }
    ctx->pc = 0x271DDCu;
    // 0x271ddc: 0xc097470  jal         func_25D1C0
    ctx->pc = 0x271DDCu;
    SET_GPR_U32(ctx, 31, 0x271DE4u);
    ctx->pc = 0x271DE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x271DDCu;
            // 0x271de0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25D1C0u;
    if (runtime->hasFunction(0x25D1C0u)) {
        auto targetFn = runtime->lookupFunction(0x25D1C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x271DE4u; }
        if (ctx->pc != 0x271DE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        NormalDrive__12CSceneObjSeqFv_0x25d1c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x271DE4u; }
        if (ctx->pc != 0x271DE4u) { return; }
    }
    ctx->pc = 0x271DE4u;
label_271de4:
    // 0x271de4: 0xc097520  jal         func_25D480
    ctx->pc = 0x271DE4u;
    SET_GPR_U32(ctx, 31, 0x271DECu);
    ctx->pc = 0x271DE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x271DE4u;
            // 0x271de8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25D480u;
    if (runtime->hasFunction(0x25D480u)) {
        auto targetFn = runtime->lookupFunction(0x25D480u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x271DECu; }
        if (ctx->pc != 0x271DECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ResetDAPosition__12CSceneObjSeqFv_0x25d480(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x271DECu; }
        if (ctx->pc != 0x271DECu) { return; }
    }
    ctx->pc = 0x271DECu;
label_271dec:
    // 0x271dec: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x271decu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_271df0:
    // 0x271df0: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x271df0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_271df4:
    // 0x271df4: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x271df4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x271df8: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x271df8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x271dfc: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x271dfcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x271e00: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x271e00u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x271e04: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x271e04u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x271e08: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x271e08u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x271e0c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x271e0cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x271e10: 0x3e00008  jr          $ra
    ctx->pc = 0x271E10u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x271E14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x271E10u;
            // 0x271e14: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x271E18u;
}
