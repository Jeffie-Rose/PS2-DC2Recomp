#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: IsClearMostFastDestroy__16CDngFloorManagerFv
// Address: 0x2f9950 - 0x2f9a6c
void IsClearMostFastDestroy__16CDngFloorManagerFv_0x2f9950(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("IsClearMostFastDestroy__16CDngFloorManagerFv_0x2f9950");
#endif

    switch (ctx->pc) {
        case 0x2f9970u: goto label_2f9970;
        case 0x2f9978u: goto label_2f9978;
        case 0x2f99bcu: goto label_2f99bc;
        case 0x2f99d0u: goto label_2f99d0;
        case 0x2f9a1cu: goto label_2f9a1c;
        case 0x2f9a28u: goto label_2f9a28;
        default: break;
    }

    ctx->pc = 0x2f9950u;

    // 0x2f9950: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2f9950u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2f9954: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2f9954u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2f9958: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2f9958u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2f995c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2f995cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2f9960: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2f9960u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f9964: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2f9964u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2f9968: 0xc08caa8  jal         func_232AA0
    ctx->pc = 0x2F9968u;
    SET_GPR_U32(ctx, 31, 0x2F9970u);
    ctx->pc = 0x2F996Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F9968u;
            // 0x2f996c: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x232AA0u;
    if (runtime->hasFunction(0x232AA0u)) {
        auto targetFn = runtime->lookupFunction(0x232AA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F9970u; }
        if (ctx->pc != 0x2F9970u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        menu_GetBattleAreaScene__Fv_0x232aa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F9970u; }
        if (ctx->pc != 0x2F9970u) { return; }
    }
    ctx->pc = 0x2F9970u;
label_2f9970:
    // 0x2f9970: 0xc064220  jal         func_190880
    ctx->pc = 0x2F9970u;
    SET_GPR_U32(ctx, 31, 0x2F9978u);
    ctx->pc = 0x2F9974u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F9970u;
            // 0x2f9974: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x190880u;
    if (runtime->hasFunction(0x190880u)) {
        auto targetFn = runtime->lookupFunction(0x190880u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F9978u; }
        if (ctx->pc != 0x2F9978u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetSaveData__Fv_0x190880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F9978u; }
        if (ctx->pc != 0x2F9978u) { return; }
    }
    ctx->pc = 0x2F9978u;
label_2f9978:
    // 0x2f9978: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x2f9978u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x2f997c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2f997cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f9980: 0x3421c5b4  ori         $at, $at, 0xC5B4
    ctx->pc = 0x2f9980u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)50612);
    // 0x2f9984: 0x2218021  addu        $s0, $s1, $at
    ctx->pc = 0x2f9984u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 1)));
    // 0x2f9988: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2F9988u;
    {
        const bool branch_taken_0x2f9988 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F998Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F9988u;
            // 0x2f998c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f9988) {
            ctx->pc = 0x2F9998u;
            goto label_2f9998;
        }
    }
    ctx->pc = 0x2F9990u;
    // 0x2f9990: 0x16400003  bnez        $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x2F9990u;
    {
        const bool branch_taken_0x2f9990 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f9990) {
            ctx->pc = 0x2F99A0u;
            goto label_2f99a0;
        }
    }
    ctx->pc = 0x2F9998u;
label_2f9998:
    // 0x2f9998: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x2F9998u;
    {
        const bool branch_taken_0x2f9998 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F999Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F9998u;
            // 0x2f999c: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f9998) {
            ctx->pc = 0x2F9A54u;
            goto label_2f9a54;
        }
    }
    ctx->pc = 0x2F99A0u;
label_2f99a0:
    // 0x2f99a0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2f99a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2f99a4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2f99a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f99a8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2f99a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2f99ac: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x2f99acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x2f99b0: 0x8c530004  lw          $s3, 0x4($v0)
    ctx->pc = 0x2f99b0u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2f99b4: 0xc0be768  jal         func_2F9DA0
    ctx->pc = 0x2F99B4u;
    SET_GPR_U32(ctx, 31, 0x2F99BCu);
    ctx->pc = 0x2F99B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F99B4u;
            // 0x2f99b8: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F9DA0u;
    if (runtime->hasFunction(0x2F9DA0u)) {
        auto targetFn = runtime->lookupFunction(0x2F9DA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F99BCu; }
        if (ctx->pc != 0x2F99BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDngMapFloorInfo__16CDngFloorManagerFi_0x2f9da0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F99BCu; }
        if (ctx->pc != 0x2F99BCu) { return; }
    }
    ctx->pc = 0x2F99BCu;
label_2f99bc:
    // 0x2f99bc: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x2f99bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2f99c0: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x2f99c0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f99c4: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x2f99c4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f99c8: 0xc0bdc7c  jal         func_2F71F0
    ctx->pc = 0x2F99C8u;
    SET_GPR_U32(ctx, 31, 0x2F99D0u);
    ctx->pc = 0x2F99CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F99C8u;
            // 0x2f99cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F71F0u;
    if (runtime->hasFunction(0x2F71F0u)) {
        auto targetFn = runtime->lookupFunction(0x2F71F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F99D0u; }
        if (ctx->pc != 0x2F99D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetFloorInfoPtr__16CSaveDataDungeonFii_0x2f71f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F99D0u; }
        if (ctx->pc != 0x2F99D0u) { return; }
    }
    ctx->pc = 0x2F99D0u;
label_2f99d0:
    // 0x2f99d0: 0x12600003  beqz        $s3, . + 4 + (0x3 << 2)
    ctx->pc = 0x2F99D0u;
    {
        const bool branch_taken_0x2f99d0 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F99D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F99D0u;
            // 0x2f99d4: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f99d0) {
            ctx->pc = 0x2F99E0u;
            goto label_2f99e0;
        }
    }
    ctx->pc = 0x2F99D8u;
    // 0x2f99d8: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2F99D8u;
    {
        const bool branch_taken_0x2f99d8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f99d8) {
            ctx->pc = 0x2F99E8u;
            goto label_2f99e8;
        }
    }
    ctx->pc = 0x2F99E0u;
label_2f99e0:
    // 0x2f99e0: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x2F99E0u;
    {
        const bool branch_taken_0x2f99e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F99E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F99E0u;
            // 0x2f99e4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f99e0) {
            ctx->pc = 0x2F9A50u;
            goto label_2f9a50;
        }
    }
    ctx->pc = 0x2F99E8u;
label_2f99e8:
    // 0x2f99e8: 0x8e231a00  lw          $v1, 0x1A00($s1)
    ctx->pc = 0x2f99e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 6656)));
    // 0x2f99ec: 0x8e420090  lw          $v0, 0x90($s2)
    ctx->pc = 0x2f99ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 144)));
    // 0x2f99f0: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x2f99f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2f99f4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2f99f4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f99f8: 0x1480000f  bnez        $a0, . + 4 + (0xF << 2)
    ctx->pc = 0x2F99F8u;
    {
        const bool branch_taken_0x2f99f8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F99FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F99F8u;
            // 0x2f99fc: 0x621823  subu        $v1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f99f8) {
            ctx->pc = 0x2F9A38u;
            goto label_2f9a38;
        }
    }
    ctx->pc = 0x2F9A00u;
    // 0x2f9a00: 0x8e620010  lw          $v0, 0x10($s3)
    ctx->pc = 0x2f9a00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x2f9a04: 0x62082a  slt         $at, $v1, $v0
    ctx->pc = 0x2f9a04u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2f9a08: 0x10200011  beqz        $at, . + 4 + (0x11 << 2)
    ctx->pc = 0x2F9A08u;
    {
        const bool branch_taken_0x2f9a08 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F9A0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F9A08u;
            // 0x2f9a0c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f9a08) {
            ctx->pc = 0x2F9A50u;
            goto label_2f9a50;
        }
    }
    ctx->pc = 0x2F9A10u;
    // 0x2f9a10: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x2f9a10u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
    // 0x2f9a14: 0xc065af8  jal         func_196BE0
    ctx->pc = 0x2F9A14u;
    SET_GPR_U32(ctx, 31, 0x2F9A1Cu);
    ctx->pc = 0x2F9A18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F9A14u;
            // 0x2f9a18: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x196BE0u;
    if (runtime->hasFunction(0x196BE0u)) {
        auto targetFn = runtime->lookupFunction(0x196BE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F9A1Cu; }
        if (ctx->pc != 0x2F9A1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetUserDataMan__Fv_0x196be0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F9A1Cu; }
        if (ctx->pc != 0x2F9A1Cu) { return; }
    }
    ctx->pc = 0x2F9A1Cu;
label_2f9a1c:
    // 0x2f9a1c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2f9a1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f9a20: 0xc0677dc  jal         func_19DF70
    ctx->pc = 0x2F9A20u;
    SET_GPR_U32(ctx, 31, 0x2F9A28u);
    ctx->pc = 0x2F9A24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F9A20u;
            // 0x2f9a24: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19DF70u;
    if (runtime->hasFunction(0x19DF70u)) {
        auto targetFn = runtime->lookupFunction(0x19DF70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F9A28u; }
        if (ctx->pc != 0x2F9A28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AddYarikomiMedal__16CUserDataManagerFi_0x19df70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F9A28u; }
        if (ctx->pc != 0x2F9A28u) { return; }
    }
    ctx->pc = 0x2F9A28u;
label_2f9a28:
    // 0x2f9a28: 0x9602000e  lhu         $v0, 0xE($s0)
    ctx->pc = 0x2f9a28u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 14)));
    // 0x2f9a2c: 0x34420010  ori         $v0, $v0, 0x10
    ctx->pc = 0x2f9a2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
    // 0x2f9a30: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2F9A30u;
    {
        const bool branch_taken_0x2f9a30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F9A34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F9A30u;
            // 0x2f9a34: 0xa602000e  sh          $v0, 0xE($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 14), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f9a30) {
            ctx->pc = 0x2F9A4Cu;
            goto label_2f9a4c;
        }
    }
    ctx->pc = 0x2F9A38u;
label_2f9a38:
    // 0x2f9a38: 0x64082a  slt         $at, $v1, $a0
    ctx->pc = 0x2f9a38u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x2f9a3c: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x2F9A3Cu;
    {
        const bool branch_taken_0x2f9a3c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f9a3c) {
            ctx->pc = 0x2F9A4Cu;
            goto label_2f9a4c;
        }
    }
    ctx->pc = 0x2F9A44u;
    // 0x2f9a44: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x2f9a44u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
    // 0x2f9a48: 0x24110002  addiu       $s1, $zero, 0x2
    ctx->pc = 0x2f9a48u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2f9a4c:
    // 0x2f9a4c: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2f9a4cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2f9a50:
    // 0x2f9a50: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2f9a50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_2f9a54:
    // 0x2f9a54: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2f9a54u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2f9a58: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2f9a58u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2f9a5c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2f9a5cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f9a60: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2f9a60u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f9a64: 0x3e00008  jr          $ra
    ctx->pc = 0x2F9A64u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F9A68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F9A64u;
            // 0x2f9a68: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2F9A6Cu;
}
