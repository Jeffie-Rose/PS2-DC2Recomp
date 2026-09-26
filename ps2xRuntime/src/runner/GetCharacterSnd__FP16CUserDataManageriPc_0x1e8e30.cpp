#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetCharacterSnd__FP16CUserDataManageriPc
// Address: 0x1e8e30 - 0x1e8f28
void GetCharacterSnd__FP16CUserDataManageriPc_0x1e8e30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetCharacterSnd__FP16CUserDataManageriPc_0x1e8e30");
#endif

    switch (ctx->pc) {
        case 0x1e8e54u: goto label_1e8e54;
        case 0x1e8e90u: goto label_1e8e90;
        case 0x1e8eb4u: goto label_1e8eb4;
        case 0x1e8eccu: goto label_1e8ecc;
        case 0x1e8ee8u: goto label_1e8ee8;
        case 0x1e8efcu: goto label_1e8efc;
        case 0x1e8f10u: goto label_1e8f10;
        default: break;
    }

    ctx->pc = 0x1e8e30u;

    // 0x1e8e30: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x1e8e30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x1e8e34: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1e8e34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1e8e38: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1e8e38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1e8e3c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1e8e3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1e8e40: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1e8e40u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e8e44: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1e8e44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1e8e48: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1e8e48u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e8e4c: 0xc066d24  jal         func_19B490
    ctx->pc = 0x1E8E4Cu;
    SET_GPR_U32(ctx, 31, 0x1E8E54u);
    ctx->pc = 0x1E8E50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E8E4Cu;
            // 0x1e8e50: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19B490u;
    if (runtime->hasFunction(0x19B490u)) {
        auto targetFn = runtime->lookupFunction(0x19B490u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E8E54u; }
        if (ctx->pc != 0x1E8E54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCharaDataPtr__16CUserDataManagerFi_0x19b490(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E8E54u; }
        if (ctx->pc != 0x1E8E54u) { return; }
    }
    ctx->pc = 0x1E8E54u;
label_1e8e54:
    // 0x1e8e54: 0x24430170  addiu       $v1, $v0, 0x170
    ctx->pc = 0x1e8e54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 368));
    // 0x1e8e58: 0x1060002d  beqz        $v1, . + 4 + (0x2D << 2)
    ctx->pc = 0x1E8E58u;
    {
        const bool branch_taken_0x1e8e58 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e8e58) {
            ctx->pc = 0x1E8F10u;
            goto label_1e8f10;
        }
    }
    ctx->pc = 0x1E8E60u;
    // 0x1e8e60: 0x1620001a  bnez        $s1, . + 4 + (0x1A << 2)
    ctx->pc = 0x1E8E60u;
    {
        const bool branch_taken_0x1e8e60 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e8e60) {
            ctx->pc = 0x1E8ECCu;
            goto label_1e8ecc;
        }
    }
    ctx->pc = 0x1E8E68u;
    // 0x1e8e68: 0x8463006e  lh          $v1, 0x6E($v1)
    ctx->pc = 0x1e8e68u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 110)));
    // 0x1e8e6c: 0x28620016  slti        $v0, $v1, 0x16
    ctx->pc = 0x1e8e6cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)22) ? 1 : 0);
    // 0x1e8e70: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1E8E70u;
    {
        const bool branch_taken_0x1e8e70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E8E74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E8E70u;
            // 0x1e8e74: 0x3c050037  lui         $a1, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e8e70) {
            ctx->pc = 0x1E8E84u;
            goto label_1e8e84;
        }
    }
    ctx->pc = 0x1E8E78u;
    // 0x1e8e78: 0x28610029  slti        $at, $v1, 0x29
    ctx->pc = 0x1e8e78u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)41) ? 1 : 0);
    // 0x1e8e7c: 0x14200006  bnez        $at, . + 4 + (0x6 << 2)
    ctx->pc = 0x1E8E7Cu;
    {
        const bool branch_taken_0x1e8e7c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E8E80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E8E7Cu;
            // 0x1e8e80: 0x28610020  slti        $at, $v1, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)32) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e8e7c) {
            ctx->pc = 0x1E8E98u;
            goto label_1e8e98;
        }
    }
    ctx->pc = 0x1E8E84u;
label_1e8e84:
    // 0x1e8e84: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e8e84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e8e88: 0xc04a234  jal         func_1288D0
    ctx->pc = 0x1E8E88u;
    SET_GPR_U32(ctx, 31, 0x1E8E90u);
    ctx->pc = 0x1E8E8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E8E88u;
            // 0x1e8e8c: 0x24a582b0  addiu       $a1, $a1, -0x7D50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294935216));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1288D0u;
    if (runtime->hasFunction(0x1288D0u)) {
        auto targetFn = runtime->lookupFunction(0x1288D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E8E90u; }
        if (ctx->pc != 0x1E8E90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x1288d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E8E90u; }
        if (ctx->pc != 0x1E8E90u) { return; }
    }
    ctx->pc = 0x1E8E90u;
label_1e8e90:
    // 0x1e8e90: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x1E8E90u;
    {
        const bool branch_taken_0x1e8e90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E8E94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E8E90u;
            // 0x1e8e94: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e8e90) {
            ctx->pc = 0x1E8F14u;
            goto label_1e8f14;
        }
    }
    ctx->pc = 0x1E8E98u;
label_1e8e98:
    // 0x1e8e98: 0x10200008  beqz        $at, . + 4 + (0x8 << 2)
    ctx->pc = 0x1E8E98u;
    {
        const bool branch_taken_0x1e8e98 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E8E9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E8E98u;
            // 0x1e8e9c: 0x3c050037  lui         $a1, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e8e98) {
            ctx->pc = 0x1E8EBCu;
            goto label_1e8ebc;
        }
    }
    ctx->pc = 0x1E8EA0u;
    // 0x1e8ea0: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x1e8ea0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x1e8ea4: 0x2466ffea  addiu       $a2, $v1, -0x16
    ctx->pc = 0x1e8ea4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967274));
    // 0x1e8ea8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e8ea8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e8eac: 0xc04a234  jal         func_1288D0
    ctx->pc = 0x1E8EACu;
    SET_GPR_U32(ctx, 31, 0x1E8EB4u);
    ctx->pc = 0x1E8EB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E8EACu;
            // 0x1e8eb0: 0x24a582d0  addiu       $a1, $a1, -0x7D30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294935248));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1288D0u;
    if (runtime->hasFunction(0x1288D0u)) {
        auto targetFn = runtime->lookupFunction(0x1288D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E8EB4u; }
        if (ctx->pc != 0x1E8EB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x1288d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E8EB4u; }
        if (ctx->pc != 0x1E8EB4u) { return; }
    }
    ctx->pc = 0x1E8EB4u;
label_1e8eb4:
    // 0x1e8eb4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1E8EB4u;
    {
        const bool branch_taken_0x1e8eb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E8EB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E8EB4u;
            // 0x1e8eb8: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e8eb4) {
            ctx->pc = 0x1E8ED0u;
            goto label_1e8ed0;
        }
    }
    ctx->pc = 0x1E8EBCu;
label_1e8ebc:
    // 0x1e8ebc: 0x2466ffea  addiu       $a2, $v1, -0x16
    ctx->pc = 0x1e8ebcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967274));
    // 0x1e8ec0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e8ec0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e8ec4: 0xc04a234  jal         func_1288D0
    ctx->pc = 0x1E8EC4u;
    SET_GPR_U32(ctx, 31, 0x1E8ECCu);
    ctx->pc = 0x1E8EC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E8EC4u;
            // 0x1e8ec8: 0x24a582f0  addiu       $a1, $a1, -0x7D10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294935280));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1288D0u;
    if (runtime->hasFunction(0x1288D0u)) {
        auto targetFn = runtime->lookupFunction(0x1288D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E8ECCu; }
        if (ctx->pc != 0x1E8ECCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x1288d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E8ECCu; }
        if (ctx->pc != 0x1E8ECCu) { return; }
    }
    ctx->pc = 0x1E8ECCu;
label_1e8ecc:
    // 0x1e8ecc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1e8eccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e8ed0:
    // 0x1e8ed0: 0x16230006  bne         $s1, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1E8ED0u;
    {
        const bool branch_taken_0x1e8ed0 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 3));
        ctx->pc = 0x1E8ED4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E8ED0u;
            // 0x1e8ed4: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e8ed0) {
            ctx->pc = 0x1E8EECu;
            goto label_1e8eec;
        }
    }
    ctx->pc = 0x1E8ED8u;
    // 0x1e8ed8: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x1e8ed8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x1e8edc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e8edcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e8ee0: 0xc04a234  jal         func_1288D0
    ctx->pc = 0x1E8EE0u;
    SET_GPR_U32(ctx, 31, 0x1E8EE8u);
    ctx->pc = 0x1E8EE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E8EE0u;
            // 0x1e8ee4: 0x24a58310  addiu       $a1, $a1, -0x7CF0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294935312));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1288D0u;
    if (runtime->hasFunction(0x1288D0u)) {
        auto targetFn = runtime->lookupFunction(0x1288D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E8EE8u; }
        if (ctx->pc != 0x1E8EE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x1288d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E8EE8u; }
        if (ctx->pc != 0x1E8EE8u) { return; }
    }
    ctx->pc = 0x1E8EE8u;
label_1e8ee8:
    // 0x1e8ee8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1e8ee8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1e8eec:
    // 0x1e8eec: 0x16230008  bne         $s1, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1E8EECu;
    {
        const bool branch_taken_0x1e8eec = (GPR_U64(ctx, 17) != GPR_U64(ctx, 3));
        ctx->pc = 0x1E8EF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E8EECu;
            // 0x1e8ef0: 0x26444690  addiu       $a0, $s2, 0x4690 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 18064));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e8eec) {
            ctx->pc = 0x1E8F10u;
            goto label_1e8f10;
        }
    }
    ctx->pc = 0x1E8EF4u;
    // 0x1e8ef4: 0xc06612c  jal         func_1984B0
    ctx->pc = 0x1E8EF4u;
    SET_GPR_U32(ctx, 31, 0x1E8EFCu);
    ctx->pc = 0x1E8EF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E8EF4u;
            // 0x1e8ef8: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1984B0u;
    if (runtime->hasFunction(0x1984B0u)) {
        auto targetFn = runtime->lookupFunction(0x1984B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E8EFCu; }
        if (ctx->pc != 0x1E8EFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetRoboSoundFileName__13CGameDataUsedFPc_0x1984b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E8EFCu; }
        if (ctx->pc != 0x1E8EFCu) { return; }
    }
    ctx->pc = 0x1E8EFCu;
label_1e8efc:
    // 0x1e8efc: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x1e8efcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x1e8f00: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e8f00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e8f04: 0x24a58330  addiu       $a1, $a1, -0x7CD0
    ctx->pc = 0x1e8f04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294935344));
    // 0x1e8f08: 0xc04a234  jal         func_1288D0
    ctx->pc = 0x1E8F08u;
    SET_GPR_U32(ctx, 31, 0x1E8F10u);
    ctx->pc = 0x1E8F0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E8F08u;
            // 0x1e8f0c: 0x27a60040  addiu       $a2, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1288D0u;
    if (runtime->hasFunction(0x1288D0u)) {
        auto targetFn = runtime->lookupFunction(0x1288D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E8F10u; }
        if (ctx->pc != 0x1E8F10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x1288d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E8F10u; }
        if (ctx->pc != 0x1E8F10u) { return; }
    }
    ctx->pc = 0x1E8F10u;
label_1e8f10:
    // 0x1e8f10: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1e8f10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1e8f14:
    // 0x1e8f14: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1e8f14u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e8f18: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1e8f18u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e8f1c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e8f1cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e8f20: 0x3e00008  jr          $ra
    ctx->pc = 0x1E8F20u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E8F24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E8F20u;
            // 0x1e8f24: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E8F28u;
}
