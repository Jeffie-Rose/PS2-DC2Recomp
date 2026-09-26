#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: IsSealFloor__16CDngFloorManagerFi
// Address: 0x2f9840 - 0x2f9944
void IsSealFloor__16CDngFloorManagerFi_0x2f9840(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("IsSealFloor__16CDngFloorManagerFi_0x2f9840");
#endif

    switch (ctx->pc) {
        case 0x2f9860u: goto label_2f9860;
        case 0x2f9898u: goto label_2f9898;
        case 0x2f98bcu: goto label_2f98bc;
        case 0x2f98e0u: goto label_2f98e0;
        case 0x2f98f0u: goto label_2f98f0;
        default: break;
    }

    ctx->pc = 0x2f9840u;

    // 0x2f9840: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2f9840u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2f9844: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2f9844u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2f9848: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2f9848u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2f984c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2f984cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2f9850: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2f9850u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f9854: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2f9854u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f9858: 0xc08ca98  jal         func_232A60
    ctx->pc = 0x2F9858u;
    SET_GPR_U32(ctx, 31, 0x2F9860u);
    ctx->pc = 0x2F985Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F9858u;
            // 0x2f985c: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x232A60u;
    if (runtime->hasFunction(0x232A60u)) {
        auto targetFn = runtime->lookupFunction(0x232A60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F9860u; }
        if (ctx->pc != 0x2F9860u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        menu_GetSaveDataDungeon__Fv_0x232a60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F9860u; }
        if (ctx->pc != 0x2F9860u) { return; }
    }
    ctx->pc = 0x2F9860u;
label_2f9860:
    // 0x2f9860: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2f9860u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f9864: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2F9864u;
    {
        const bool branch_taken_0x2f9864 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F9868u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F9864u;
            // 0x2f9868: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f9864) {
            ctx->pc = 0x2F9874u;
            goto label_2f9874;
        }
    }
    ctx->pc = 0x2F986Cu;
    // 0x2f986c: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x2F986Cu;
    {
        const bool branch_taken_0x2f986c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F9870u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F986Cu;
            // 0x2f9870: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f986c) {
            ctx->pc = 0x2F9930u;
            goto label_2f9930;
        }
    }
    ctx->pc = 0x2F9874u;
label_2f9874:
    // 0x2f9874: 0x6410006  bgez        $s2, . + 4 + (0x6 << 2)
    ctx->pc = 0x2F9874u;
    {
        const bool branch_taken_0x2f9874 = (GPR_S32(ctx, 18) >= 0);
        ctx->pc = 0x2F9878u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F9874u;
            // 0x2f9878: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f9874) {
            ctx->pc = 0x2F9890u;
            goto label_2f9890;
        }
    }
    ctx->pc = 0x2F987Cu;
    // 0x2f987c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2f987cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2f9880: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2f9880u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2f9884: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x2f9884u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x2f9888: 0x8c520004  lw          $s2, 0x4($v0)
    ctx->pc = 0x2f9888u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2f988c: 0x0  nop
    ctx->pc = 0x2f988cu;
    // NOP
label_2f9890:
    // 0x2f9890: 0xc0be768  jal         func_2F9DA0
    ctx->pc = 0x2F9890u;
    SET_GPR_U32(ctx, 31, 0x2F9898u);
    ctx->pc = 0x2F9894u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F9890u;
            // 0x2f9894: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F9DA0u;
    if (runtime->hasFunction(0x2F9DA0u)) {
        auto targetFn = runtime->lookupFunction(0x2F9DA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F9898u; }
        if (ctx->pc != 0x2F9898u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDngMapFloorInfo__16CDngFloorManagerFi_0x2f9da0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F9898u; }
        if (ctx->pc != 0x2F9898u) { return; }
    }
    ctx->pc = 0x2F9898u;
label_2f9898:
    // 0x2f9898: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2f9898u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f989c: 0x16200003  bnez        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2F989Cu;
    {
        const bool branch_taken_0x2f989c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F98A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F989Cu;
            // 0x2f98a0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f989c) {
            ctx->pc = 0x2F98ACu;
            goto label_2f98ac;
        }
    }
    ctx->pc = 0x2F98A4u;
    // 0x2f98a4: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x2F98A4u;
    {
        const bool branch_taken_0x2f98a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f98a4) {
            ctx->pc = 0x2F992Cu;
            goto label_2f992c;
        }
    }
    ctx->pc = 0x2F98ACu;
label_2f98ac:
    // 0x2f98ac: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x2f98acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2f98b0: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x2f98b0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f98b4: 0xc0bdc7c  jal         func_2F71F0
    ctx->pc = 0x2F98B4u;
    SET_GPR_U32(ctx, 31, 0x2F98BCu);
    ctx->pc = 0x2F98B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F98B4u;
            // 0x2f98b8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F71F0u;
    if (runtime->hasFunction(0x2F71F0u)) {
        auto targetFn = runtime->lookupFunction(0x2F71F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F98BCu; }
        if (ctx->pc != 0x2F98BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetFloorInfoPtr__16CSaveDataDungeonFii_0x2f71f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F98BCu; }
        if (ctx->pc != 0x2F98BCu) { return; }
    }
    ctx->pc = 0x2F98BCu;
label_2f98bc:
    // 0x2f98bc: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2F98BCu;
    {
        const bool branch_taken_0x2f98bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F98C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F98BCu;
            // 0x2f98c0: 0x82300014  lb          $s0, 0x14($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f98bc) {
            ctx->pc = 0x2F98D8u;
            goto label_2f98d8;
        }
    }
    ctx->pc = 0x2F98C4u;
    // 0x2f98c4: 0x9442000e  lhu         $v0, 0xE($v0)
    ctx->pc = 0x2f98c4u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 14)));
    // 0x2f98c8: 0x30420400  andi        $v0, $v0, 0x400
    ctx->pc = 0x2f98c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1024);
    // 0x2f98cc: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2F98CCu;
    {
        const bool branch_taken_0x2f98cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f98cc) {
            ctx->pc = 0x2F98D8u;
            goto label_2f98d8;
        }
    }
    ctx->pc = 0x2F98D4u;
    // 0x2f98d4: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2f98d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f98d8:
    // 0x2f98d8: 0xc065af8  jal         func_196BE0
    ctx->pc = 0x2F98D8u;
    SET_GPR_U32(ctx, 31, 0x2F98E0u);
    ctx->pc = 0x196BE0u;
    if (runtime->hasFunction(0x196BE0u)) {
        auto targetFn = runtime->lookupFunction(0x196BE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F98E0u; }
        if (ctx->pc != 0x2F98E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetUserDataMan__Fv_0x196be0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F98E0u; }
        if (ctx->pc != 0x2F98E0u) { return; }
    }
    ctx->pc = 0x2F98E0u;
label_2f98e0:
    // 0x2f98e0: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x2F98E0u;
    {
        const bool branch_taken_0x2f98e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F98E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F98E0u;
            // 0x2f98e4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f98e0) {
            ctx->pc = 0x2F9928u;
            goto label_2f9928;
        }
    }
    ctx->pc = 0x2F98E8u;
    // 0x2f98e8: 0xc066e94  jal         func_19BA50
    ctx->pc = 0x2F98E8u;
    SET_GPR_U32(ctx, 31, 0x2F98F0u);
    ctx->pc = 0x19BA50u;
    if (runtime->hasFunction(0x19BA50u)) {
        auto targetFn = runtime->lookupFunction(0x19BA50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F98F0u; }
        if (ctx->pc != 0x2F98F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetNowPartyMember__16CUserDataManagerFv_0x19ba50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F98F0u; }
        if (ctx->pc != 0x2F98F0u) { return; }
    }
    ctx->pc = 0x2F98F0u;
label_2f98f0:
    // 0x2f98f0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2f98f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f98f4: 0x16030006  bne         $s0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2F98F4u;
    {
        const bool branch_taken_0x2f98f4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 3));
        ctx->pc = 0x2F98F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F98F4u;
            // 0x2f98f8: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f98f4) {
            ctx->pc = 0x2F9910u;
            goto label_2f9910;
        }
    }
    ctx->pc = 0x2F98FCu;
    // 0x2f98fc: 0x30430002  andi        $v1, $v0, 0x2
    ctx->pc = 0x2f98fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x2f9900: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x2F9900u;
    {
        const bool branch_taken_0x2f9900 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f9900) {
            ctx->pc = 0x2F990Cu;
            goto label_2f990c;
        }
    }
    ctx->pc = 0x2F9908u;
    // 0x2f9908: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2f9908u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f990c:
    // 0x2f990c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2f990cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2f9910:
    // 0x2f9910: 0x16030005  bne         $s0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2F9910u;
    {
        const bool branch_taken_0x2f9910 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 3));
        if (branch_taken_0x2f9910) {
            ctx->pc = 0x2F9928u;
            goto label_2f9928;
        }
    }
    ctx->pc = 0x2F9918u;
    // 0x2f9918: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2f9918u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2f991c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2F991Cu;
    {
        const bool branch_taken_0x2f991c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F9920u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F991Cu;
            // 0x2f9920: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f991c) {
            ctx->pc = 0x2F992Cu;
            goto label_2f992c;
        }
    }
    ctx->pc = 0x2F9924u;
    // 0x2f9924: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2f9924u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f9928:
    // 0x2f9928: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2f9928u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2f992c:
    // 0x2f992c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2f992cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_2f9930:
    // 0x2f9930: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2f9930u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2f9934: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2f9934u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f9938: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2f9938u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f993c: 0x3e00008  jr          $ra
    ctx->pc = 0x2F993Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F9940u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F993Cu;
            // 0x2f9940: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2F9944u;
}
