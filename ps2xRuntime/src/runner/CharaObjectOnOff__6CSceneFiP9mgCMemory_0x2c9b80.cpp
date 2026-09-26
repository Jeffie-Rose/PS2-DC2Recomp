#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: CharaObjectOnOff__6CSceneFiP9mgCMemory
// Address: 0x2c9b80 - 0x2c9d40
void CharaObjectOnOff__6CSceneFiP9mgCMemory_0x2c9b80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CharaObjectOnOff__6CSceneFiP9mgCMemory_0x2c9b80");
#endif

    switch (ctx->pc) {
        case 0x2c9bacu: goto label_2c9bac;
        case 0x2c9bc8u: goto label_2c9bc8;
        case 0x2c9be8u: goto label_2c9be8;
        case 0x2c9bfcu: goto label_2c9bfc;
        case 0x2c9c2cu: goto label_2c9c2c;
        case 0x2c9c38u: goto label_2c9c38;
        case 0x2c9c48u: goto label_2c9c48;
        case 0x2c9c84u: goto label_2c9c84;
        case 0x2c9c98u: goto label_2c9c98;
        case 0x2c9cccu: goto label_2c9ccc;
        case 0x2c9cd8u: goto label_2c9cd8;
        case 0x2c9ce8u: goto label_2c9ce8;
        default: break;
    }

    ctx->pc = 0x2c9b80u;

    // 0x2c9b80: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x2c9b80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x2c9b84: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x2c9b84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x2c9b88: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x2c9b88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x2c9b8c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x2c9b8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x2c9b90: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2c9b90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x2c9b94: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x2c9b94u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c9b98: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2c9b98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2c9b9c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2c9b9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2c9ba0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2c9ba0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2c9ba4: 0xc0a0cd0  jal         func_283340
    ctx->pc = 0x2C9BA4u;
    SET_GPR_U32(ctx, 31, 0x2C9BACu);
    ctx->pc = 0x2C9BA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C9BA4u;
            // 0x2c9ba8: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x283340u;
    if (runtime->hasFunction(0x283340u)) {
        auto targetFn = runtime->lookupFunction(0x283340u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C9BACu; }
        if (ctx->pc != 0x2C9BACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetSceneCharacter__6CSceneFi_0x283340(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C9BACu; }
        if (ctx->pc != 0x2C9BACu) { return; }
    }
    ctx->pc = 0x2C9BACu;
label_2c9bac:
    // 0x2c9bac: 0x1040005a  beqz        $v0, . + 4 + (0x5A << 2)
    ctx->pc = 0x2C9BACu;
    {
        const bool branch_taken_0x2c9bac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c9bac) {
            ctx->pc = 0x2C9D18u;
            goto label_2c9d18;
        }
    }
    ctx->pc = 0x2C9BB4u;
    // 0x2c9bb4: 0x8c520034  lw          $s2, 0x34($v0)
    ctx->pc = 0x2c9bb4u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x2c9bb8: 0x12400057  beqz        $s2, . + 4 + (0x57 << 2)
    ctx->pc = 0x2C9BB8u;
    {
        const bool branch_taken_0x2c9bb8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c9bb8) {
            ctx->pc = 0x2C9D18u;
            goto label_2c9d18;
        }
    }
    ctx->pc = 0x2C9BC0u;
    // 0x2c9bc0: 0xc0c65c4  jal         func_319710
    ctx->pc = 0x2C9BC0u;
    SET_GPR_U32(ctx, 31, 0x2C9BC8u);
    ctx->pc = 0x2C9BC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C9BC0u;
            // 0x2c9bc4: 0x8c44003c  lw          $a0, 0x3C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x319710u;
    if (runtime->hasFunction(0x319710u)) {
        auto targetFn = runtime->lookupFunction(0x319710u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C9BC8u; }
        if (ctx->pc != 0x2C9BC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetVillagerInfo__Fi_0x319710(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C9BC8u; }
        if (ctx->pc != 0x2C9BC8u) { return; }
    }
    ctx->pc = 0x2C9BC8u;
label_2c9bc8:
    // 0x2c9bc8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2c9bc8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c9bcc: 0x12000052  beqz        $s0, . + 4 + (0x52 << 2)
    ctx->pc = 0x2C9BCCu;
    {
        const bool branch_taken_0x2c9bcc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c9bcc) {
            ctx->pc = 0x2C9D18u;
            goto label_2c9d18;
        }
    }
    ctx->pc = 0x2C9BD4u;
    // 0x2c9bd4: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x2c9bd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x2c9bd8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2c9bd8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c9bdc: 0x27a60080  addiu       $a2, $sp, 0x80
    ctx->pc = 0x2c9bdcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2c9be0: 0xc0b2698  jal         func_2C9A60
    ctx->pc = 0x2C9BE0u;
    SET_GPR_U32(ctx, 31, 0x2C9BE8u);
    ctx->pc = 0x2C9BE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C9BE0u;
            // 0x2c9be4: 0x24070010  addiu       $a3, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C9A60u;
    if (runtime->hasFunction(0x2C9A60u)) {
        auto targetFn = runtime->lookupFunction(0x2C9A60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C9BE8u; }
        if (ctx->pc != 0x2C9BE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetObjectNameList__FPcP11CCharacter2PP8mgCFramei_0x2c9a60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C9BE8u; }
        if (ctx->pc != 0x2C9BE8u) { return; }
    }
    ctx->pc = 0x2C9BE8u;
label_2c9be8:
    // 0x2c9be8: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x2c9be8u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c9bec: 0x16082a  slt         $at, $zero, $s6
    ctx->pc = 0x2c9becu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 22)) ? 1 : 0);
    // 0x2c9bf0: 0x1020001f  beqz        $at, . + 4 + (0x1F << 2)
    ctx->pc = 0x2C9BF0u;
    {
        const bool branch_taken_0x2c9bf0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C9BF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C9BF0u;
            // 0x2c9bf4: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c9bf0) {
            ctx->pc = 0x2C9C70u;
            goto label_2c9c70;
        }
    }
    ctx->pc = 0x2C9BF8u;
    // 0x2c9bf8: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x2c9bf8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c9bfc:
    // 0x2c9bfc: 0x27d1021  addu        $v0, $s3, $sp
    ctx->pc = 0x2c9bfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 29)));
    // 0x2c9c00: 0x24540080  addiu       $s4, $v0, 0x80
    ctx->pc = 0x2c9c00u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
    // 0x2c9c04: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x2c9c04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x2c9c08: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x2C9C08u;
    {
        const bool branch_taken_0x2c9c08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c9c08) {
            ctx->pc = 0x2C9C5Cu;
            goto label_2c9c5c;
        }
    }
    ctx->pc = 0x2C9C10u;
    // 0x2c9c10: 0x8c4200f4  lw          $v0, 0xF4($v0)
    ctx->pc = 0x2c9c10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 244)));
    // 0x2c9c14: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x2C9C14u;
    {
        const bool branch_taken_0x2c9c14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c9c14) {
            ctx->pc = 0x2C9C50u;
            goto label_2c9c50;
        }
    }
    ctx->pc = 0x2C9C1Cu;
    // 0x2c9c1c: 0x12a0000c  beqz        $s5, . + 4 + (0xC << 2)
    ctx->pc = 0x2C9C1Cu;
    {
        const bool branch_taken_0x2c9c1c = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C9C20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C9C1Cu;
            // 0x2c9c20: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c9c1c) {
            ctx->pc = 0x2C9C50u;
            goto label_2c9c50;
        }
    }
    ctx->pc = 0x2C9C24u;
    // 0x2c9c24: 0xc04e748  jal         func_139D20
    ctx->pc = 0x2C9C24u;
    SET_GPR_U32(ctx, 31, 0x2C9C2Cu);
    ctx->pc = 0x2C9C28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C9C24u;
            // 0x2c9c28: 0x2405000b  addiu       $a1, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C9C2Cu; }
        if (ctx->pc != 0x2C9C2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C9C2Cu; }
        if (ctx->pc != 0x2C9C2Cu) { return; }
    }
    ctx->pc = 0x2C9C2Cu;
label_2c9c2c:
    // 0x2c9c2c: 0x24040090  addiu       $a0, $zero, 0x90
    ctx->pc = 0x2c9c2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
    // 0x2c9c30: 0xc04e638  jal         func_1398E0
    ctx->pc = 0x2C9C30u;
    SET_GPR_U32(ctx, 31, 0x2C9C38u);
    ctx->pc = 0x2C9C34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C9C30u;
            // 0x2c9c34: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1398E0u;
    if (runtime->hasFunction(0x1398E0u)) {
        auto targetFn = runtime->lookupFunction(0x1398E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C9C38u; }
        if (ctx->pc != 0x2C9C38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___nw__FUiP1_0x1398e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C9C38u; }
        if (ctx->pc != 0x2C9C38u) { return; }
    }
    ctx->pc = 0x2C9C38u;
label_2c9c38:
    // 0x2c9c38: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2C9C38u;
    {
        const bool branch_taken_0x2c9c38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C9C3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C9C38u;
            // 0x2c9c3c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c9c38) {
            ctx->pc = 0x2C9C48u;
            goto label_2c9c48;
        }
    }
    ctx->pc = 0x2C9C40u;
    // 0x2c9c40: 0xc04d6d8  jal         func_135B60
    ctx->pc = 0x2C9C40u;
    SET_GPR_U32(ctx, 31, 0x2C9C48u);
    ctx->pc = 0x135B60u;
    if (runtime->hasFunction(0x135B60u)) {
        auto targetFn = runtime->lookupFunction(0x135B60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C9C48u; }
        if (ctx->pc != 0x2C9C48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__12mgCFrameAttrFv_0x135b60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C9C48u; }
        if (ctx->pc != 0x2C9C48u) { return; }
    }
    ctx->pc = 0x2C9C48u;
label_2c9c48:
    // 0x2c9c48: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x2c9c48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x2c9c4c: 0xac6200f4  sw          $v0, 0xF4($v1)
    ctx->pc = 0x2c9c4cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 244), GPR_U32(ctx, 2));
label_2c9c50:
    // 0x2c9c50: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2C9C50u;
    {
        const bool branch_taken_0x2c9c50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C9C54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C9C50u;
            // 0x2c9c54: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c9c50) {
            ctx->pc = 0x2C9C5Cu;
            goto label_2c9c5c;
        }
    }
    ctx->pc = 0x2C9C58u;
    // 0x2c9c58: 0xac430018  sw          $v1, 0x18($v0)
    ctx->pc = 0x2c9c58u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 3));
label_2c9c5c:
    // 0x2c9c5c: 0x0  nop
    ctx->pc = 0x2c9c5cu;
    // NOP
    // 0x2c9c60: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2c9c60u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x2c9c64: 0x236102a  slt         $v0, $s1, $s6
    ctx->pc = 0x2c9c64u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 22)) ? 1 : 0);
    // 0x2c9c68: 0x1440ffe4  bnez        $v0, . + 4 + (-0x1C << 2)
    ctx->pc = 0x2C9C68u;
    {
        const bool branch_taken_0x2c9c68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C9C6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C9C68u;
            // 0x2c9c6c: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c9c68) {
            ctx->pc = 0x2C9BFCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2c9bfc;
        }
    }
    ctx->pc = 0x2C9C70u;
label_2c9c70:
    // 0x2c9c70: 0x8e040010  lw          $a0, 0x10($s0)
    ctx->pc = 0x2c9c70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x2c9c74: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2c9c74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c9c78: 0x27a60080  addiu       $a2, $sp, 0x80
    ctx->pc = 0x2c9c78u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2c9c7c: 0xc0b2698  jal         func_2C9A60
    ctx->pc = 0x2C9C7Cu;
    SET_GPR_U32(ctx, 31, 0x2C9C84u);
    ctx->pc = 0x2C9C80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C9C7Cu;
            // 0x2c9c80: 0x24070010  addiu       $a3, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C9A60u;
    if (runtime->hasFunction(0x2C9A60u)) {
        auto targetFn = runtime->lookupFunction(0x2C9A60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C9C84u; }
        if (ctx->pc != 0x2C9C84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetObjectNameList__FPcP11CCharacter2PP8mgCFramei_0x2c9a60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C9C84u; }
        if (ctx->pc != 0x2C9C84u) { return; }
    }
    ctx->pc = 0x2C9C84u;
label_2c9c84:
    // 0x2c9c84: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2c9c84u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c9c88: 0x12082a  slt         $at, $zero, $s2
    ctx->pc = 0x2c9c88u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x2c9c8c: 0x10200022  beqz        $at, . + 4 + (0x22 << 2)
    ctx->pc = 0x2C9C8Cu;
    {
        const bool branch_taken_0x2c9c8c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C9C90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C9C8Cu;
            // 0x2c9c90: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c9c8c) {
            ctx->pc = 0x2C9D18u;
            goto label_2c9d18;
        }
    }
    ctx->pc = 0x2C9C94u;
    // 0x2c9c94: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2c9c94u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c9c98:
    // 0x2c9c98: 0x23d1821  addu        $v1, $s1, $sp
    ctx->pc = 0x2c9c98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 29)));
    // 0x2c9c9c: 0x24730080  addiu       $s3, $v1, 0x80
    ctx->pc = 0x2c9c9cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), 128));
    // 0x2c9ca0: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x2c9ca0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x2c9ca4: 0x10600017  beqz        $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x2C9CA4u;
    {
        const bool branch_taken_0x2c9ca4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c9ca4) {
            ctx->pc = 0x2C9D04u;
            goto label_2c9d04;
        }
    }
    ctx->pc = 0x2C9CACu;
    // 0x2c9cac: 0x8c6400f4  lw          $a0, 0xF4($v1)
    ctx->pc = 0x2c9cacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 244)));
    // 0x2c9cb0: 0x14800011  bnez        $a0, . + 4 + (0x11 << 2)
    ctx->pc = 0x2C9CB0u;
    {
        const bool branch_taken_0x2c9cb0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c9cb0) {
            ctx->pc = 0x2C9CF8u;
            goto label_2c9cf8;
        }
    }
    ctx->pc = 0x2C9CB8u;
    // 0x2c9cb8: 0x12a0000f  beqz        $s5, . + 4 + (0xF << 2)
    ctx->pc = 0x2C9CB8u;
    {
        const bool branch_taken_0x2c9cb8 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c9cb8) {
            ctx->pc = 0x2C9CF8u;
            goto label_2c9cf8;
        }
    }
    ctx->pc = 0x2C9CC0u;
    // 0x2c9cc0: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2c9cc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c9cc4: 0xc04e748  jal         func_139D20
    ctx->pc = 0x2C9CC4u;
    SET_GPR_U32(ctx, 31, 0x2C9CCCu);
    ctx->pc = 0x2C9CC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C9CC4u;
            // 0x2c9cc8: 0x2405000b  addiu       $a1, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C9CCCu; }
        if (ctx->pc != 0x2C9CCCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C9CCCu; }
        if (ctx->pc != 0x2C9CCCu) { return; }
    }
    ctx->pc = 0x2C9CCCu;
label_2c9ccc:
    // 0x2c9ccc: 0x24040090  addiu       $a0, $zero, 0x90
    ctx->pc = 0x2c9cccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
    // 0x2c9cd0: 0xc04e638  jal         func_1398E0
    ctx->pc = 0x2C9CD0u;
    SET_GPR_U32(ctx, 31, 0x2C9CD8u);
    ctx->pc = 0x2C9CD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C9CD0u;
            // 0x2c9cd4: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1398E0u;
    if (runtime->hasFunction(0x1398E0u)) {
        auto targetFn = runtime->lookupFunction(0x1398E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C9CD8u; }
        if (ctx->pc != 0x2C9CD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___nw__FUiP1_0x1398e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C9CD8u; }
        if (ctx->pc != 0x2C9CD8u) { return; }
    }
    ctx->pc = 0x2C9CD8u;
label_2c9cd8:
    // 0x2c9cd8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C9CD8u;
    {
        const bool branch_taken_0x2c9cd8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C9CDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C9CD8u;
            // 0x2c9cdc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c9cd8) {
            ctx->pc = 0x2C9CECu;
            goto label_2c9cec;
        }
    }
    ctx->pc = 0x2C9CE0u;
    // 0x2c9ce0: 0xc04d6d8  jal         func_135B60
    ctx->pc = 0x2C9CE0u;
    SET_GPR_U32(ctx, 31, 0x2C9CE8u);
    ctx->pc = 0x135B60u;
    if (runtime->hasFunction(0x135B60u)) {
        auto targetFn = runtime->lookupFunction(0x135B60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C9CE8u; }
        if (ctx->pc != 0x2C9CE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__12mgCFrameAttrFv_0x135b60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C9CE8u; }
        if (ctx->pc != 0x2C9CE8u) { return; }
    }
    ctx->pc = 0x2C9CE8u;
label_2c9ce8:
    // 0x2c9ce8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2c9ce8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2c9cec:
    // 0x2c9cec: 0x0  nop
    ctx->pc = 0x2c9cecu;
    // NOP
    // 0x2c9cf0: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x2c9cf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x2c9cf4: 0xac6400f4  sw          $a0, 0xF4($v1)
    ctx->pc = 0x2c9cf4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 244), GPR_U32(ctx, 4));
label_2c9cf8:
    // 0x2c9cf8: 0x10800002  beqz        $a0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2C9CF8u;
    {
        const bool branch_taken_0x2c9cf8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C9CFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C9CF8u;
            // 0x2c9cfc: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c9cf8) {
            ctx->pc = 0x2C9D04u;
            goto label_2c9d04;
        }
    }
    ctx->pc = 0x2C9D00u;
    // 0x2c9d00: 0xac830018  sw          $v1, 0x18($a0)
    ctx->pc = 0x2c9d00u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 3));
label_2c9d04:
    // 0x2c9d04: 0x0  nop
    ctx->pc = 0x2c9d04u;
    // NOP
    // 0x2c9d08: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2c9d08u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x2c9d0c: 0x212182a  slt         $v1, $s0, $s2
    ctx->pc = 0x2c9d0cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x2c9d10: 0x1460ffe1  bnez        $v1, . + 4 + (-0x1F << 2)
    ctx->pc = 0x2C9D10u;
    {
        const bool branch_taken_0x2c9d10 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C9D14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C9D10u;
            // 0x2c9d14: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c9d10) {
            ctx->pc = 0x2C9C98u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2c9c98;
        }
    }
    ctx->pc = 0x2C9D18u;
label_2c9d18:
    // 0x2c9d18: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x2c9d18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2c9d1c: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x2c9d1cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2c9d20: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x2c9d20u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2c9d24: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2c9d24u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2c9d28: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2c9d28u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2c9d2c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2c9d2cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2c9d30: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2c9d30u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c9d34: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2c9d34u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c9d38: 0x3e00008  jr          $ra
    ctx->pc = 0x2C9D38u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C9D3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C9D38u;
            // 0x2c9d3c: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2C9D40u;
}
