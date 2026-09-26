#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: YesNoCursor2__7CDC2MesFi
// Address: 0x21d950 - 0x21da40
void YesNoCursor2__7CDC2MesFi_0x21d950(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("YesNoCursor2__7CDC2MesFi_0x21d950");
#endif

    switch (ctx->pc) {
        case 0x21d980u: goto label_21d980;
        case 0x21d998u: goto label_21d998;
        case 0x21d9bcu: goto label_21d9bc;
        case 0x21d9ccu: goto label_21d9cc;
        case 0x21d9d4u: goto label_21d9d4;
        default: break;
    }

    ctx->pc = 0x21d950u;

    // 0x21d950: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x21d950u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x21d954: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x21d954u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x21d958: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x21d958u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x21d95c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x21d95cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x21d960: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x21d960u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21d964: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x21d964u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21d968: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x21d968u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
    // 0x21d96c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x21d96cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x21d970: 0x248476e0  addiu       $a0, $a0, 0x76E0
    ctx->pc = 0x21d970u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
    // 0x21d974: 0x34058000  ori         $a1, $zero, 0x8000
    ctx->pc = 0x21d974u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x21d978: 0xc052d0c  jal         func_14B430
    ctx->pc = 0x21D978u;
    SET_GPR_U32(ctx, 31, 0x21D980u);
    ctx->pc = 0x21D97Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21D978u;
            // 0x21d97c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B430u;
    if (runtime->hasFunction(0x14B430u)) {
        auto targetFn = runtime->lookupFunction(0x14B430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21D980u; }
        if (ctx->pc != 0x21D980u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Down__8CGamePadFi_0x14b430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21D980u; }
        if (ctx->pc != 0x21D980u) { return; }
    }
    ctx->pc = 0x21D980u;
label_21d980:
    // 0x21d980: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x21D980u;
    {
        const bool branch_taken_0x21d980 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21D984u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21D980u;
            // 0x21d984: 0x3c04003d  lui         $a0, 0x3D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21d980) {
            ctx->pc = 0x21D98Cu;
            goto label_21d98c;
        }
    }
    ctx->pc = 0x21D988u;
    // 0x21d988: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x21d988u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_21d98c:
    // 0x21d98c: 0x24052000  addiu       $a1, $zero, 0x2000
    ctx->pc = 0x21d98cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
    // 0x21d990: 0xc052d0c  jal         func_14B430
    ctx->pc = 0x21D990u;
    SET_GPR_U32(ctx, 31, 0x21D998u);
    ctx->pc = 0x21D994u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21D990u;
            // 0x21d994: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B430u;
    if (runtime->hasFunction(0x14B430u)) {
        auto targetFn = runtime->lookupFunction(0x14B430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21D998u; }
        if (ctx->pc != 0x21D998u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Down__8CGamePadFi_0x14b430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21D998u; }
        if (ctx->pc != 0x21D998u) { return; }
    }
    ctx->pc = 0x21D998u;
label_21d998:
    // 0x21d998: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x21D998u;
    {
        const bool branch_taken_0x21d998 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21D99Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21D998u;
            // 0x21d99c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21d998) {
            ctx->pc = 0x21D9A8u;
            goto label_21d9a8;
        }
    }
    ctx->pc = 0x21D9A0u;
    // 0x21d9a0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x21d9a0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x21d9a4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x21d9a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_21d9a8:
    // 0x21d9a8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x21d9a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21d9ac: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x21d9acu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21d9b0: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x21d9b0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x21d9b4: 0xc0875e0  jal         func_21D780
    ctx->pc = 0x21D9B4u;
    SET_GPR_U32(ctx, 31, 0x21D9BCu);
    ctx->pc = 0x21D9B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21D9B4u;
            // 0x21d9b8: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21D780u;
    if (runtime->hasFunction(0x21D780u)) {
        auto targetFn = runtime->lookupFunction(0x21D780u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21D9BCu; }
        if (ctx->pc != 0x21D9BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AddMsgCursor__7CDC2MesFiiii_0x21d780(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21D9BCu; }
        if (ctx->pc != 0x21D9BCu) { return; }
    }
    ctx->pc = 0x21D9BCu;
label_21d9bc:
    // 0x21d9bc: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x21D9BCu;
    {
        const bool branch_taken_0x21d9bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21D9C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21D9BCu;
            // 0x21d9c0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21d9bc) {
            ctx->pc = 0x21D9CCu;
            goto label_21d9cc;
        }
    }
    ctx->pc = 0x21D9C4u;
    // 0x21d9c4: 0xc094274  jal         func_2509D0
    ctx->pc = 0x21D9C4u;
    SET_GPR_U32(ctx, 31, 0x21D9CCu);
    ctx->pc = 0x2509D0u;
    if (runtime->hasFunction(0x2509D0u)) {
        auto targetFn = runtime->lookupFunction(0x2509D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21D9CCu; }
        if (ctx->pc != 0x21D9CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSePlay__Fi_0x2509d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21D9CCu; }
        if (ctx->pc != 0x21D9CCu) { return; }
    }
    ctx->pc = 0x21D9CCu;
label_21d9cc:
    // 0x21d9cc: 0xc08f86c  jal         func_23E1B0
    ctx->pc = 0x21D9CCu;
    SET_GPR_U32(ctx, 31, 0x21D9D4u);
    ctx->pc = 0x23E1B0u;
    if (runtime->hasFunction(0x23E1B0u)) {
        auto targetFn = runtime->lookupFunction(0x23E1B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21D9D4u; }
        if (ctx->pc != 0x21D9D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuCheckPushButton__Fv_0x23e1b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21D9D4u; }
        if (ctx->pc != 0x21D9D4u) { return; }
    }
    ctx->pc = 0x21D9D4u;
label_21d9d4:
    // 0x21d9d4: 0x30430001  andi        $v1, $v0, 0x1
    ctx->pc = 0x21d9d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x21d9d8: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x21D9D8u;
    {
        const bool branch_taken_0x21d9d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x21D9DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21D9D8u;
            // 0x21d9dc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21d9d8) {
            ctx->pc = 0x21D9F4u;
            goto label_21d9f4;
        }
    }
    ctx->pc = 0x21D9E0u;
    // 0x21d9e0: 0x824421e1  lb          $a0, 0x21E1($s2)
    ctx->pc = 0x21d9e0u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 8673)));
    // 0x21d9e4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x21d9e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x21d9e8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x21d9e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x21d9ec: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x21D9ECu;
    {
        const bool branch_taken_0x21d9ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21D9F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21D9ECu;
            // 0x21d9f0: 0x64100b  movn        $v0, $v1, $a0 (Delay Slot)
        if (GPR_U64(ctx, 4) != 0) SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21d9ec) {
            ctx->pc = 0x21DA28u;
            goto label_21da28;
        }
    }
    ctx->pc = 0x21D9F4u;
label_21d9f4:
    // 0x21d9f4: 0x16250008  bne         $s1, $a1, . + 4 + (0x8 << 2)
    ctx->pc = 0x21D9F4u;
    {
        const bool branch_taken_0x21d9f4 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 5));
        ctx->pc = 0x21D9F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21D9F4u;
            // 0x21d9f8: 0x30430004  andi        $v1, $v0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x21d9f4) {
            ctx->pc = 0x21DA18u;
            goto label_21da18;
        }
    }
    ctx->pc = 0x21D9FCu;
    // 0x21d9fc: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x21D9FCu;
    {
        const bool branch_taken_0x21d9fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x21d9fc) {
            ctx->pc = 0x21DA18u;
            goto label_21da18;
        }
    }
    ctx->pc = 0x21DA04u;
    // 0x21da04: 0x824421e1  lb          $a0, 0x21E1($s2)
    ctx->pc = 0x21da04u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 8673)));
    // 0x21da08: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x21da08u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21da0c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x21da0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x21da10: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x21DA10u;
    {
        const bool branch_taken_0x21da10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21DA14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21DA10u;
            // 0x21da14: 0x64100b  movn        $v0, $v1, $a0 (Delay Slot)
        if (GPR_U64(ctx, 4) != 0) SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21da10) {
            ctx->pc = 0x21DA28u;
            goto label_21da28;
        }
    }
    ctx->pc = 0x21DA18u;
label_21da18:
    // 0x21da18: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x21da18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x21da1c: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x21DA1Cu;
    {
        const bool branch_taken_0x21da1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21DA20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21DA1Cu;
            // 0x21da20: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21da1c) {
            ctx->pc = 0x21DA28u;
            goto label_21da28;
        }
    }
    ctx->pc = 0x21DA24u;
    // 0x21da24: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x21da24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_21da28:
    // 0x21da28: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x21da28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x21da2c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x21da2cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x21da30: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x21da30u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21da34: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x21da34u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21da38: 0x3e00008  jr          $ra
    ctx->pc = 0x21DA38u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21DA3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21DA38u;
            // 0x21da3c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x21DA40u;
}
