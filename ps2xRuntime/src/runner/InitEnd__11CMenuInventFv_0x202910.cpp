#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: InitEnd__11CMenuInventFv
// Address: 0x202910 - 0x2029c4
void InitEnd__11CMenuInventFv_0x202910(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("InitEnd__11CMenuInventFv_0x202910");
#endif

    switch (ctx->pc) {
        case 0x202934u: goto label_202934;
        case 0x202940u: goto label_202940;
        case 0x202968u: goto label_202968;
        case 0x202978u: goto label_202978;
        case 0x202988u: goto label_202988;
        case 0x202994u: goto label_202994;
        case 0x2029acu: goto label_2029ac;
        default: break;
    }

    ctx->pc = 0x202910u;

    // 0x202910: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x202910u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x202914: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x202914u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x202918: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x202918u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x20291c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x20291cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x202920: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x202920u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x202924: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x202924u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202928: 0x8f909114  lw          $s0, -0x6EEC($gp)
    ctx->pc = 0x202928u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938900)));
    // 0x20292c: 0xc065af8  jal         func_196BE0
    ctx->pc = 0x20292Cu;
    SET_GPR_U32(ctx, 31, 0x202934u);
    ctx->pc = 0x202930u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20292Cu;
            // 0x202930: 0xa0820258  sb          $v0, 0x258($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 600), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x196BE0u;
    if (runtime->hasFunction(0x196BE0u)) {
        auto targetFn = runtime->lookupFunction(0x196BE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x202934u; }
        if (ctx->pc != 0x202934u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetUserDataMan__Fv_0x196be0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x202934u; }
        if (ctx->pc != 0x202934u) { return; }
    }
    ctx->pc = 0x202934u;
label_202934:
    // 0x202934: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x202934u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202938: 0xc067778  jal         func_19DDE0
    ctx->pc = 0x202938u;
    SET_GPR_U32(ctx, 31, 0x202940u);
    ctx->pc = 0x20293Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x202938u;
            // 0x20293c: 0x24050165  addiu       $a1, $zero, 0x165 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 357));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19DDE0u;
    if (runtime->hasFunction(0x19DDE0u)) {
        auto targetFn = runtime->lookupFunction(0x19DDE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x202940u; }
        if (ctx->pc != 0x202940u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetNumSameItem__16CUserDataManagerFi_0x19dde0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x202940u; }
        if (ctx->pc != 0x202940u) { return; }
    }
    ctx->pc = 0x202940u;
label_202940:
    // 0x202940: 0x1c400002  bgtz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x202940u;
    {
        const bool branch_taken_0x202940 = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x202940) {
            ctx->pc = 0x20294Cu;
            goto label_20294c;
        }
    }
    ctx->pc = 0x202948u;
    // 0x202948: 0xa2200258  sb          $zero, 0x258($s1)
    ctx->pc = 0x202948u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 600), (uint8_t)GPR_U32(ctx, 0));
label_20294c:
    // 0x20294c: 0x86230110  lh          $v1, 0x110($s1)
    ctx->pc = 0x20294cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 272)));
    // 0x202950: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x202950u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x202954: 0x14620010  bne         $v1, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x202954u;
    {
        const bool branch_taken_0x202954 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x202958u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x202954u;
            // 0x202958: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202954) {
            ctx->pc = 0x202998u;
            goto label_202998;
        }
    }
    ctx->pc = 0x20295Cu;
    // 0x20295c: 0x8e050110  lw          $a1, 0x110($s0)
    ctx->pc = 0x20295cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 272)));
    // 0x202960: 0xc080a9c  jal         func_202A70
    ctx->pc = 0x202960u;
    SET_GPR_U32(ctx, 31, 0x202968u);
    ctx->pc = 0x202964u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x202960u;
            // 0x202964: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x202A70u;
    if (runtime->hasFunction(0x202A70u)) {
        auto targetFn = runtime->lookupFunction(0x202A70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x202968u; }
        if (ctx->pc != 0x202968u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnterDataMenu__11CMenuInventFPUc_0x202a70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x202968u; }
        if (ctx->pc != 0x202968u) { return; }
    }
    ctx->pc = 0x202968u;
label_202968:
    // 0x202968: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x202968u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x20296c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x20296cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202970: 0xc08e7cc  jal         func_239F30
    ctx->pc = 0x202970u;
    SET_GPR_U32(ctx, 31, 0x202978u);
    ctx->pc = 0x202974u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x202970u;
            // 0x202974: 0x24a59298  addiu       $a1, $a1, -0x6D68 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294939288));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239F30u;
    if (runtime->hasFunction(0x239F30u)) {
        auto targetFn = runtime->lookupFunction(0x239F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x202978u; }
        if (ctx->pc != 0x202978u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ExeScript__14CBaseMenuClassFPc_0x239f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x202978u; }
        if (ctx->pc != 0x202978u) { return; }
    }
    ctx->pc = 0x202978u;
label_202978:
    // 0x202978: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x202978u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x20297c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x20297cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202980: 0xc08e7cc  jal         func_239F30
    ctx->pc = 0x202980u;
    SET_GPR_U32(ctx, 31, 0x202988u);
    ctx->pc = 0x202984u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x202980u;
            // 0x202984: 0x24a593b0  addiu       $a1, $a1, -0x6C50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294939568));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239F30u;
    if (runtime->hasFunction(0x239F30u)) {
        auto targetFn = runtime->lookupFunction(0x239F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x202988u; }
        if (ctx->pc != 0x202988u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ExeScript__14CBaseMenuClassFPc_0x239f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x202988u; }
        if (ctx->pc != 0x202988u) { return; }
    }
    ctx->pc = 0x202988u;
label_202988:
    // 0x202988: 0x86250014  lh          $a1, 0x14($s1)
    ctx->pc = 0x202988u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x20298c: 0xc0807e0  jal         func_201F80
    ctx->pc = 0x20298Cu;
    SET_GPR_U32(ctx, 31, 0x202994u);
    ctx->pc = 0x202990u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20298Cu;
            // 0x202990: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x201F80u;
    if (runtime->hasFunction(0x201F80u)) {
        auto targetFn = runtime->lookupFunction(0x201F80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x202994u; }
        if (ctx->pc != 0x202994u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PrepareNextMode__11CMenuInventFi_0x201f80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x202994u; }
        if (ctx->pc != 0x202994u) { return; }
    }
    ctx->pc = 0x202994u;
label_202994:
    // 0x202994: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x202994u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_202998:
    // 0x202998: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x202998u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x20299c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x20299cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2029a0: 0xa2220eb6  sb          $v0, 0xEB6($s1)
    ctx->pc = 0x2029a0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 3766), (uint8_t)GPR_U32(ctx, 2));
    // 0x2029a4: 0xc08e7cc  jal         func_239F30
    ctx->pc = 0x2029A4u;
    SET_GPR_U32(ctx, 31, 0x2029ACu);
    ctx->pc = 0x2029A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2029A4u;
            // 0x2029a8: 0x24a593c8  addiu       $a1, $a1, -0x6C38 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294939592));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239F30u;
    if (runtime->hasFunction(0x239F30u)) {
        auto targetFn = runtime->lookupFunction(0x239F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2029ACu; }
        if (ctx->pc != 0x2029ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ExeScript__14CBaseMenuClassFPc_0x239f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2029ACu; }
        if (ctx->pc != 0x2029ACu) { return; }
    }
    ctx->pc = 0x2029ACu;
label_2029ac:
    // 0x2029ac: 0xa38093f8  sb          $zero, -0x6C08($gp)
    ctx->pc = 0x2029acu;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294939640), (uint8_t)GPR_U32(ctx, 0));
    // 0x2029b0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2029b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2029b4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2029b4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2029b8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2029b8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2029bc: 0x3e00008  jr          $ra
    ctx->pc = 0x2029BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2029C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2029BCu;
            // 0x2029c0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2029C4u;
}
