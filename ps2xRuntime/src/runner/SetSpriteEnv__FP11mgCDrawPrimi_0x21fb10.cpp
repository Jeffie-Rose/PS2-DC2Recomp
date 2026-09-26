#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SetSpriteEnv__FP11mgCDrawPrimi
// Address: 0x21fb10 - 0x21fda8
void SetSpriteEnv__FP11mgCDrawPrimi_0x21fb10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetSpriteEnv__FP11mgCDrawPrimi_0x21fb10");
#endif

    switch (ctx->pc) {
        case 0x21fb38u: goto label_21fb38;
        case 0x21fb68u: goto label_21fb68;
        case 0x21fb74u: goto label_21fb74;
        case 0x21fb8cu: goto label_21fb8c;
        case 0x21fb98u: goto label_21fb98;
        case 0x21fba8u: goto label_21fba8;
        case 0x21fbb4u: goto label_21fbb4;
        case 0x21fbc4u: goto label_21fbc4;
        case 0x21fbd0u: goto label_21fbd0;
        case 0x21fbdcu: goto label_21fbdc;
        case 0x21fbe8u: goto label_21fbe8;
        case 0x21fbf4u: goto label_21fbf4;
        case 0x21fc00u: goto label_21fc00;
        case 0x21fc14u: goto label_21fc14;
        case 0x21fc20u: goto label_21fc20;
        case 0x21fc34u: goto label_21fc34;
        case 0x21fc44u: goto label_21fc44;
        case 0x21fc50u: goto label_21fc50;
        case 0x21fc5cu: goto label_21fc5c;
        case 0x21fc68u: goto label_21fc68;
        case 0x21fc74u: goto label_21fc74;
        case 0x21fc8cu: goto label_21fc8c;
        case 0x21fc98u: goto label_21fc98;
        case 0x21fca4u: goto label_21fca4;
        case 0x21fcb0u: goto label_21fcb0;
        case 0x21fcc4u: goto label_21fcc4;
        case 0x21fcd4u: goto label_21fcd4;
        case 0x21fce0u: goto label_21fce0;
        case 0x21fcecu: goto label_21fcec;
        case 0x21fcf8u: goto label_21fcf8;
        case 0x21fd04u: goto label_21fd04;
        case 0x21fd10u: goto label_21fd10;
        case 0x21fd1cu: goto label_21fd1c;
        case 0x21fd28u: goto label_21fd28;
        case 0x21fd3cu: goto label_21fd3c;
        case 0x21fd4cu: goto label_21fd4c;
        case 0x21fd58u: goto label_21fd58;
        case 0x21fd64u: goto label_21fd64;
        case 0x21fd70u: goto label_21fd70;
        case 0x21fd7cu: goto label_21fd7c;
        case 0x21fd88u: goto label_21fd88;
        case 0x21fd94u: goto label_21fd94;
        default: break;
    }

    ctx->pc = 0x21fb10u;

    // 0x21fb10: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x21fb10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x21fb14: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x21fb14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x21fb18: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x21fb18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x21fb1c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x21fb1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x21fb20: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x21fb20u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21fb24: 0x1220009b  beqz        $s1, . + 4 + (0x9B << 2)
    ctx->pc = 0x21FB24u;
    {
        const bool branch_taken_0x21fb24 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x21FB28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21FB24u;
            // 0x21fb28: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21fb24) {
            ctx->pc = 0x21FD94u;
            goto label_21fd94;
        }
    }
    ctx->pc = 0x21FB2Cu;
    // 0x21fb2c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x21fb2cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21fb30: 0xc04d104  jal         func_134410
    ctx->pc = 0x21FB30u;
    SET_GPR_U32(ctx, 31, 0x21FB38u);
    ctx->pc = 0x21FB34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21FB30u;
            // 0x21fb34: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134410u;
    if (runtime->hasFunction(0x134410u)) {
        auto targetFn = runtime->lookupFunction(0x134410u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21FB38u; }
        if (ctx->pc != 0x21FB38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Initialize__11mgCDrawPrimFP9mgCMemoryP13sceVif1Packet_0x134410(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21FB38u; }
        if (ctx->pc != 0x21FB38u) { return; }
    }
    ctx->pc = 0x21FB38u;
label_21fb38:
    // 0x21fb38: 0x2e010007  sltiu       $at, $s0, 0x7
    ctx->pc = 0x21fb38u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
    // 0x21fb3c: 0x10200095  beqz        $at, . + 4 + (0x95 << 2)
    ctx->pc = 0x21FB3Cu;
    {
        const bool branch_taken_0x21fb3c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x21FB40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21FB3Cu;
            // 0x21fb40: 0x3c040037  lui         $a0, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21fb3c) {
            ctx->pc = 0x21FD94u;
            goto label_21fd94;
        }
    }
    ctx->pc = 0x21FB44u;
    // 0x21fb44: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x21fb44u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x21fb48: 0x2484a580  addiu       $a0, $a0, -0x5A80
    ctx->pc = 0x21fb48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294944128));
    // 0x21fb4c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x21fb4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x21fb50: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x21fb50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x21fb54: 0x600008  jr          $v1
    ctx->pc = 0x21FB54u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x21FB5Cu: goto label_21fb5c;
            case 0x21FC28u: goto label_21fc28;
            case 0x21FCB8u: goto label_21fcb8;
            case 0x21FD30u: goto label_21fd30;
            default: break;
        }
        return;
    }
    ctx->pc = 0x21FB5Cu;
label_21fb5c:
    // 0x21fb5c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x21fb5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21fb60: 0xc04d3b0  jal         func_134EC0
    ctx->pc = 0x21FB60u;
    SET_GPR_U32(ctx, 31, 0x21FB68u);
    ctx->pc = 0x21FB64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21FB60u;
            // 0x21fb64: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134EC0u;
    if (runtime->hasFunction(0x134EC0u)) {
        auto targetFn = runtime->lookupFunction(0x134EC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21FB68u; }
        if (ctx->pc != 0x21FB68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AlphaBlendEnable__11mgCDrawPrimFi_0x134ec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21FB68u; }
        if (ctx->pc != 0x21FB68u) { return; }
    }
    ctx->pc = 0x21FB68u;
label_21fb68:
    // 0x21fb68: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x21fb68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21fb6c: 0xc04d430  jal         func_1350C0
    ctx->pc = 0x21FB6Cu;
    SET_GPR_U32(ctx, 31, 0x21FB74u);
    ctx->pc = 0x21FB70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21FB6Cu;
            // 0x21fb70: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1350C0u;
    if (runtime->hasFunction(0x1350C0u)) {
        auto targetFn = runtime->lookupFunction(0x1350C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21FB74u; }
        if (ctx->pc != 0x21FB74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Bilinear__11mgCDrawPrimFi_0x1350c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21FB74u; }
        if (ctx->pc != 0x21FB74u) { return; }
    }
    ctx->pc = 0x21FB74u;
label_21fb74:
    // 0x21fb74: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x21fb74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x21fb78: 0x16020009  bne         $s0, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x21FB78u;
    {
        const bool branch_taken_0x21fb78 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x21FB7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21FB78u;
            // 0x21fb7c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21fb78) {
            ctx->pc = 0x21FBA0u;
            goto label_21fba0;
        }
    }
    ctx->pc = 0x21FB80u;
    // 0x21fb80: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x21fb80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21fb84: 0xc04d3b8  jal         func_134EE0
    ctx->pc = 0x21FB84u;
    SET_GPR_U32(ctx, 31, 0x21FB8Cu);
    ctx->pc = 0x21FB88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21FB84u;
            // 0x21fb88: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134EE0u;
    if (runtime->hasFunction(0x134EE0u)) {
        auto targetFn = runtime->lookupFunction(0x134EE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21FB8Cu; }
        if (ctx->pc != 0x21FB8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AlphaBlend__11mgCDrawPrimFi_0x134ee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21FB8Cu; }
        if (ctx->pc != 0x21FB8Cu) { return; }
    }
    ctx->pc = 0x21FB8Cu;
label_21fb8c:
    // 0x21fb8c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x21fb8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21fb90: 0xc04d430  jal         func_1350C0
    ctx->pc = 0x21FB90u;
    SET_GPR_U32(ctx, 31, 0x21FB98u);
    ctx->pc = 0x21FB94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21FB90u;
            // 0x21fb94: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1350C0u;
    if (runtime->hasFunction(0x1350C0u)) {
        auto targetFn = runtime->lookupFunction(0x1350C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21FB98u; }
        if (ctx->pc != 0x21FB98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Bilinear__11mgCDrawPrimFi_0x1350c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21FB98u; }
        if (ctx->pc != 0x21FB98u) { return; }
    }
    ctx->pc = 0x21FB98u;
label_21fb98:
    // 0x21fb98: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x21FB98u;
    {
        const bool branch_taken_0x21fb98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21FB9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21FB98u;
            // 0x21fb9c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21fb98) {
            ctx->pc = 0x21FBACu;
            goto label_21fbac;
        }
    }
    ctx->pc = 0x21FBA0u;
label_21fba0:
    // 0x21fba0: 0xc04d3b8  jal         func_134EE0
    ctx->pc = 0x21FBA0u;
    SET_GPR_U32(ctx, 31, 0x21FBA8u);
    ctx->pc = 0x21FBA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21FBA0u;
            // 0x21fba4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134EE0u;
    if (runtime->hasFunction(0x134EE0u)) {
        auto targetFn = runtime->lookupFunction(0x134EE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21FBA8u; }
        if (ctx->pc != 0x21FBA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AlphaBlend__11mgCDrawPrimFi_0x134ee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21FBA8u; }
        if (ctx->pc != 0x21FBA8u) { return; }
    }
    ctx->pc = 0x21FBA8u;
label_21fba8:
    // 0x21fba8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x21fba8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_21fbac:
    // 0x21fbac: 0xc04d3bc  jal         func_134EF0
    ctx->pc = 0x21FBACu;
    SET_GPR_U32(ctx, 31, 0x21FBB4u);
    ctx->pc = 0x21FBB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21FBACu;
            // 0x21fbb0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134EF0u;
    if (runtime->hasFunction(0x134EF0u)) {
        auto targetFn = runtime->lookupFunction(0x134EF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21FBB4u; }
        if (ctx->pc != 0x21FBB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AlphaTestEnable__11mgCDrawPrimFi_0x134ef0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21FBB4u; }
        if (ctx->pc != 0x21FBB4u) { return; }
    }
    ctx->pc = 0x21FBB4u;
label_21fbb4:
    // 0x21fbb4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x21fbb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21fbb8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x21fbb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x21fbbc: 0xc04d3c4  jal         func_134F10
    ctx->pc = 0x21FBBCu;
    SET_GPR_U32(ctx, 31, 0x21FBC4u);
    ctx->pc = 0x21FBC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21FBBCu;
            // 0x21fbc0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134F10u;
    if (runtime->hasFunction(0x134F10u)) {
        auto targetFn = runtime->lookupFunction(0x134F10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21FBC4u; }
        if (ctx->pc != 0x21FBC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AlphaTest__11mgCDrawPrimFii_0x134f10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21FBC4u; }
        if (ctx->pc != 0x21FBC4u) { return; }
    }
    ctx->pc = 0x21FBC4u;
label_21fbc4:
    // 0x21fbc4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x21fbc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21fbc8: 0xc04d3e4  jal         func_134F90
    ctx->pc = 0x21FBC8u;
    SET_GPR_U32(ctx, 31, 0x21FBD0u);
    ctx->pc = 0x21FBCCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21FBC8u;
            // 0x21fbcc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134F90u;
    if (runtime->hasFunction(0x134F90u)) {
        auto targetFn = runtime->lookupFunction(0x134F90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21FBD0u; }
        if (ctx->pc != 0x21FBD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DepthTestEnable__11mgCDrawPrimFi_0x134f90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21FBD0u; }
        if (ctx->pc != 0x21FBD0u) { return; }
    }
    ctx->pc = 0x21FBD0u;
label_21fbd0:
    // 0x21fbd0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x21fbd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21fbd4: 0xc04d424  jal         func_135090
    ctx->pc = 0x21FBD4u;
    SET_GPR_U32(ctx, 31, 0x21FBDCu);
    ctx->pc = 0x21FBD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21FBD4u;
            // 0x21fbd8: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x135090u;
    if (runtime->hasFunction(0x135090u)) {
        auto targetFn = runtime->lookupFunction(0x135090u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21FBDCu; }
        if (ctx->pc != 0x21FBDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ZMask__11mgCDrawPrimFi_0x135090(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21FBDCu; }
        if (ctx->pc != 0x21FBDCu) { return; }
    }
    ctx->pc = 0x21FBDCu;
label_21fbdc:
    // 0x21fbdc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x21fbdcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21fbe0: 0xc04d434  jal         func_1350D0
    ctx->pc = 0x21FBE0u;
    SET_GPR_U32(ctx, 31, 0x21FBE8u);
    ctx->pc = 0x21FBE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21FBE0u;
            // 0x21fbe4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1350D0u;
    if (runtime->hasFunction(0x1350D0u)) {
        auto targetFn = runtime->lookupFunction(0x1350D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21FBE8u; }
        if (ctx->pc != 0x21FBE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Shading__11mgCDrawPrimFi_0x1350d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21FBE8u; }
        if (ctx->pc != 0x21FBE8u) { return; }
    }
    ctx->pc = 0x21FBE8u;
label_21fbe8:
    // 0x21fbe8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x21fbe8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21fbec: 0xc04d428  jal         func_1350A0
    ctx->pc = 0x21FBECu;
    SET_GPR_U32(ctx, 31, 0x21FBF4u);
    ctx->pc = 0x21FBF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21FBECu;
            // 0x21fbf0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1350A0u;
    if (runtime->hasFunction(0x1350A0u)) {
        auto targetFn = runtime->lookupFunction(0x1350A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21FBF4u; }
        if (ctx->pc != 0x21FBF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TextureMapEnable__11mgCDrawPrimFi_0x1350a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21FBF4u; }
        if (ctx->pc != 0x21FBF4u) { return; }
    }
    ctx->pc = 0x21FBF4u;
label_21fbf4:
    // 0x21fbf4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x21fbf4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21fbf8: 0xc04d43c  jal         func_1350F0
    ctx->pc = 0x21FBF8u;
    SET_GPR_U32(ctx, 31, 0x21FC00u);
    ctx->pc = 0x21FBFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21FBF8u;
            // 0x21fbfc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1350F0u;
    if (runtime->hasFunction(0x1350F0u)) {
        auto targetFn = runtime->lookupFunction(0x1350F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21FC00u; }
        if (ctx->pc != 0x21FC00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AntiAliasing__11mgCDrawPrimFi_0x1350f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21FC00u; }
        if (ctx->pc != 0x21FC00u) { return; }
    }
    ctx->pc = 0x21FC00u;
label_21fc00:
    // 0x21fc00: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x21fc00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x21fc04: 0x16030063  bne         $s0, $v1, . + 4 + (0x63 << 2)
    ctx->pc = 0x21FC04u;
    {
        const bool branch_taken_0x21fc04 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 3));
        ctx->pc = 0x21FC08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21FC04u;
            // 0x21fc08: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21fc04) {
            ctx->pc = 0x21FD94u;
            goto label_21fd94;
        }
    }
    ctx->pc = 0x21FC0Cu;
    // 0x21fc0c: 0xc04d434  jal         func_1350D0
    ctx->pc = 0x21FC0Cu;
    SET_GPR_U32(ctx, 31, 0x21FC14u);
    ctx->pc = 0x21FC10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21FC0Cu;
            // 0x21fc10: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1350D0u;
    if (runtime->hasFunction(0x1350D0u)) {
        auto targetFn = runtime->lookupFunction(0x1350D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21FC14u; }
        if (ctx->pc != 0x21FC14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Shading__11mgCDrawPrimFi_0x1350d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21FC14u; }
        if (ctx->pc != 0x21FC14u) { return; }
    }
    ctx->pc = 0x21FC14u;
label_21fc14:
    // 0x21fc14: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x21fc14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21fc18: 0xc04d430  jal         func_1350C0
    ctx->pc = 0x21FC18u;
    SET_GPR_U32(ctx, 31, 0x21FC20u);
    ctx->pc = 0x21FC1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21FC18u;
            // 0x21fc1c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1350C0u;
    if (runtime->hasFunction(0x1350C0u)) {
        auto targetFn = runtime->lookupFunction(0x1350C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21FC20u; }
        if (ctx->pc != 0x21FC20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Bilinear__11mgCDrawPrimFi_0x1350c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21FC20u; }
        if (ctx->pc != 0x21FC20u) { return; }
    }
    ctx->pc = 0x21FC20u;
label_21fc20:
    // 0x21fc20: 0x1000005d  b           . + 4 + (0x5D << 2)
    ctx->pc = 0x21FC20u;
    {
        const bool branch_taken_0x21fc20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21FC24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21FC20u;
            // 0x21fc24: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21fc20) {
            ctx->pc = 0x21FD98u;
            goto label_21fd98;
        }
    }
    ctx->pc = 0x21FC28u;
label_21fc28:
    // 0x21fc28: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x21fc28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21fc2c: 0xc04d3bc  jal         func_134EF0
    ctx->pc = 0x21FC2Cu;
    SET_GPR_U32(ctx, 31, 0x21FC34u);
    ctx->pc = 0x21FC30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21FC2Cu;
            // 0x21fc30: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134EF0u;
    if (runtime->hasFunction(0x134EF0u)) {
        auto targetFn = runtime->lookupFunction(0x134EF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21FC34u; }
        if (ctx->pc != 0x21FC34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AlphaTestEnable__11mgCDrawPrimFi_0x134ef0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21FC34u; }
        if (ctx->pc != 0x21FC34u) { return; }
    }
    ctx->pc = 0x21FC34u;
label_21fc34:
    // 0x21fc34: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x21fc34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21fc38: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x21fc38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x21fc3c: 0xc04d3c4  jal         func_134F10
    ctx->pc = 0x21FC3Cu;
    SET_GPR_U32(ctx, 31, 0x21FC44u);
    ctx->pc = 0x21FC40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21FC3Cu;
            // 0x21fc40: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134F10u;
    if (runtime->hasFunction(0x134F10u)) {
        auto targetFn = runtime->lookupFunction(0x134F10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21FC44u; }
        if (ctx->pc != 0x21FC44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AlphaTest__11mgCDrawPrimFii_0x134f10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21FC44u; }
        if (ctx->pc != 0x21FC44u) { return; }
    }
    ctx->pc = 0x21FC44u;
label_21fc44:
    // 0x21fc44: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x21fc44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21fc48: 0xc04d3b0  jal         func_134EC0
    ctx->pc = 0x21FC48u;
    SET_GPR_U32(ctx, 31, 0x21FC50u);
    ctx->pc = 0x21FC4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21FC48u;
            // 0x21fc4c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134EC0u;
    if (runtime->hasFunction(0x134EC0u)) {
        auto targetFn = runtime->lookupFunction(0x134EC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21FC50u; }
        if (ctx->pc != 0x21FC50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AlphaBlendEnable__11mgCDrawPrimFi_0x134ec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21FC50u; }
        if (ctx->pc != 0x21FC50u) { return; }
    }
    ctx->pc = 0x21FC50u;
label_21fc50:
    // 0x21fc50: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x21fc50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21fc54: 0xc04d3b8  jal         func_134EE0
    ctx->pc = 0x21FC54u;
    SET_GPR_U32(ctx, 31, 0x21FC5Cu);
    ctx->pc = 0x21FC58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21FC54u;
            // 0x21fc58: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134EE0u;
    if (runtime->hasFunction(0x134EE0u)) {
        auto targetFn = runtime->lookupFunction(0x134EE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21FC5Cu; }
        if (ctx->pc != 0x21FC5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AlphaBlend__11mgCDrawPrimFi_0x134ee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21FC5Cu; }
        if (ctx->pc != 0x21FC5Cu) { return; }
    }
    ctx->pc = 0x21FC5Cu;
label_21fc5c:
    // 0x21fc5c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x21fc5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21fc60: 0xc04d428  jal         func_1350A0
    ctx->pc = 0x21FC60u;
    SET_GPR_U32(ctx, 31, 0x21FC68u);
    ctx->pc = 0x21FC64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21FC60u;
            // 0x21fc64: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1350A0u;
    if (runtime->hasFunction(0x1350A0u)) {
        auto targetFn = runtime->lookupFunction(0x1350A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21FC68u; }
        if (ctx->pc != 0x21FC68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TextureMapEnable__11mgCDrawPrimFi_0x1350a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21FC68u; }
        if (ctx->pc != 0x21FC68u) { return; }
    }
    ctx->pc = 0x21FC68u;
label_21fc68:
    // 0x21fc68: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x21fc68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21fc6c: 0xc04d3e4  jal         func_134F90
    ctx->pc = 0x21FC6Cu;
    SET_GPR_U32(ctx, 31, 0x21FC74u);
    ctx->pc = 0x21FC70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21FC6Cu;
            // 0x21fc70: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134F90u;
    if (runtime->hasFunction(0x134F90u)) {
        auto targetFn = runtime->lookupFunction(0x134F90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21FC74u; }
        if (ctx->pc != 0x21FC74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DepthTestEnable__11mgCDrawPrimFi_0x134f90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21FC74u; }
        if (ctx->pc != 0x21FC74u) { return; }
    }
    ctx->pc = 0x21FC74u;
label_21fc74:
    // 0x21fc74: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x21fc74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x21fc78: 0x16020008  bne         $s0, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x21FC78u;
    {
        const bool branch_taken_0x21fc78 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x21FC7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21FC78u;
            // 0x21fc7c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21fc78) {
            ctx->pc = 0x21FC9Cu;
            goto label_21fc9c;
        }
    }
    ctx->pc = 0x21FC80u;
    // 0x21fc80: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x21fc80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21fc84: 0xc04d3e4  jal         func_134F90
    ctx->pc = 0x21FC84u;
    SET_GPR_U32(ctx, 31, 0x21FC8Cu);
    ctx->pc = 0x21FC88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21FC84u;
            // 0x21fc88: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134F90u;
    if (runtime->hasFunction(0x134F90u)) {
        auto targetFn = runtime->lookupFunction(0x134F90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21FC8Cu; }
        if (ctx->pc != 0x21FC8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DepthTestEnable__11mgCDrawPrimFi_0x134f90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21FC8Cu; }
        if (ctx->pc != 0x21FC8Cu) { return; }
    }
    ctx->pc = 0x21FC8Cu;
label_21fc8c:
    // 0x21fc8c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x21fc8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21fc90: 0xc04d43c  jal         func_1350F0
    ctx->pc = 0x21FC90u;
    SET_GPR_U32(ctx, 31, 0x21FC98u);
    ctx->pc = 0x21FC94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21FC90u;
            // 0x21fc94: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1350F0u;
    if (runtime->hasFunction(0x1350F0u)) {
        auto targetFn = runtime->lookupFunction(0x1350F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21FC98u; }
        if (ctx->pc != 0x21FC98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AntiAliasing__11mgCDrawPrimFi_0x1350f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21FC98u; }
        if (ctx->pc != 0x21FC98u) { return; }
    }
    ctx->pc = 0x21FC98u;
label_21fc98:
    // 0x21fc98: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x21fc98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_21fc9c:
    // 0x21fc9c: 0xc04d424  jal         func_135090
    ctx->pc = 0x21FC9Cu;
    SET_GPR_U32(ctx, 31, 0x21FCA4u);
    ctx->pc = 0x21FCA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21FC9Cu;
            // 0x21fca0: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x135090u;
    if (runtime->hasFunction(0x135090u)) {
        auto targetFn = runtime->lookupFunction(0x135090u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21FCA4u; }
        if (ctx->pc != 0x21FCA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ZMask__11mgCDrawPrimFi_0x135090(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21FCA4u; }
        if (ctx->pc != 0x21FCA4u) { return; }
    }
    ctx->pc = 0x21FCA4u;
label_21fca4:
    // 0x21fca4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x21fca4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21fca8: 0xc04d434  jal         func_1350D0
    ctx->pc = 0x21FCA8u;
    SET_GPR_U32(ctx, 31, 0x21FCB0u);
    ctx->pc = 0x21FCACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21FCA8u;
            // 0x21fcac: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1350D0u;
    if (runtime->hasFunction(0x1350D0u)) {
        auto targetFn = runtime->lookupFunction(0x1350D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21FCB0u; }
        if (ctx->pc != 0x21FCB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Shading__11mgCDrawPrimFi_0x1350d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21FCB0u; }
        if (ctx->pc != 0x21FCB0u) { return; }
    }
    ctx->pc = 0x21FCB0u;
label_21fcb0:
    // 0x21fcb0: 0x10000038  b           . + 4 + (0x38 << 2)
    ctx->pc = 0x21FCB0u;
    {
        const bool branch_taken_0x21fcb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x21fcb0) {
            ctx->pc = 0x21FD94u;
            goto label_21fd94;
        }
    }
    ctx->pc = 0x21FCB8u;
label_21fcb8:
    // 0x21fcb8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x21fcb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21fcbc: 0xc04d3bc  jal         func_134EF0
    ctx->pc = 0x21FCBCu;
    SET_GPR_U32(ctx, 31, 0x21FCC4u);
    ctx->pc = 0x21FCC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21FCBCu;
            // 0x21fcc0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134EF0u;
    if (runtime->hasFunction(0x134EF0u)) {
        auto targetFn = runtime->lookupFunction(0x134EF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21FCC4u; }
        if (ctx->pc != 0x21FCC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AlphaTestEnable__11mgCDrawPrimFi_0x134ef0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21FCC4u; }
        if (ctx->pc != 0x21FCC4u) { return; }
    }
    ctx->pc = 0x21FCC4u;
label_21fcc4:
    // 0x21fcc4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x21fcc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21fcc8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x21fcc8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x21fccc: 0xc04d3c4  jal         func_134F10
    ctx->pc = 0x21FCCCu;
    SET_GPR_U32(ctx, 31, 0x21FCD4u);
    ctx->pc = 0x21FCD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21FCCCu;
            // 0x21fcd0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134F10u;
    if (runtime->hasFunction(0x134F10u)) {
        auto targetFn = runtime->lookupFunction(0x134F10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21FCD4u; }
        if (ctx->pc != 0x21FCD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AlphaTest__11mgCDrawPrimFii_0x134f10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21FCD4u; }
        if (ctx->pc != 0x21FCD4u) { return; }
    }
    ctx->pc = 0x21FCD4u;
label_21fcd4:
    // 0x21fcd4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x21fcd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21fcd8: 0xc04d3b0  jal         func_134EC0
    ctx->pc = 0x21FCD8u;
    SET_GPR_U32(ctx, 31, 0x21FCE0u);
    ctx->pc = 0x21FCDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21FCD8u;
            // 0x21fcdc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134EC0u;
    if (runtime->hasFunction(0x134EC0u)) {
        auto targetFn = runtime->lookupFunction(0x134EC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21FCE0u; }
        if (ctx->pc != 0x21FCE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AlphaBlendEnable__11mgCDrawPrimFi_0x134ec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21FCE0u; }
        if (ctx->pc != 0x21FCE0u) { return; }
    }
    ctx->pc = 0x21FCE0u;
label_21fce0:
    // 0x21fce0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x21fce0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21fce4: 0xc04d3b8  jal         func_134EE0
    ctx->pc = 0x21FCE4u;
    SET_GPR_U32(ctx, 31, 0x21FCECu);
    ctx->pc = 0x21FCE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21FCE4u;
            // 0x21fce8: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134EE0u;
    if (runtime->hasFunction(0x134EE0u)) {
        auto targetFn = runtime->lookupFunction(0x134EE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21FCECu; }
        if (ctx->pc != 0x21FCECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AlphaBlend__11mgCDrawPrimFi_0x134ee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21FCECu; }
        if (ctx->pc != 0x21FCECu) { return; }
    }
    ctx->pc = 0x21FCECu;
label_21fcec:
    // 0x21fcec: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x21fcecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21fcf0: 0xc04d3e4  jal         func_134F90
    ctx->pc = 0x21FCF0u;
    SET_GPR_U32(ctx, 31, 0x21FCF8u);
    ctx->pc = 0x21FCF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21FCF0u;
            // 0x21fcf4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134F90u;
    if (runtime->hasFunction(0x134F90u)) {
        auto targetFn = runtime->lookupFunction(0x134F90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21FCF8u; }
        if (ctx->pc != 0x21FCF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DepthTestEnable__11mgCDrawPrimFi_0x134f90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21FCF8u; }
        if (ctx->pc != 0x21FCF8u) { return; }
    }
    ctx->pc = 0x21FCF8u;
label_21fcf8:
    // 0x21fcf8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x21fcf8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21fcfc: 0xc04d424  jal         func_135090
    ctx->pc = 0x21FCFCu;
    SET_GPR_U32(ctx, 31, 0x21FD04u);
    ctx->pc = 0x21FD00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21FCFCu;
            // 0x21fd00: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x135090u;
    if (runtime->hasFunction(0x135090u)) {
        auto targetFn = runtime->lookupFunction(0x135090u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21FD04u; }
        if (ctx->pc != 0x21FD04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ZMask__11mgCDrawPrimFi_0x135090(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21FD04u; }
        if (ctx->pc != 0x21FD04u) { return; }
    }
    ctx->pc = 0x21FD04u;
label_21fd04:
    // 0x21fd04: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x21fd04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21fd08: 0xc04d434  jal         func_1350D0
    ctx->pc = 0x21FD08u;
    SET_GPR_U32(ctx, 31, 0x21FD10u);
    ctx->pc = 0x21FD0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21FD08u;
            // 0x21fd0c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1350D0u;
    if (runtime->hasFunction(0x1350D0u)) {
        auto targetFn = runtime->lookupFunction(0x1350D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21FD10u; }
        if (ctx->pc != 0x21FD10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Shading__11mgCDrawPrimFi_0x1350d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21FD10u; }
        if (ctx->pc != 0x21FD10u) { return; }
    }
    ctx->pc = 0x21FD10u;
label_21fd10:
    // 0x21fd10: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x21fd10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21fd14: 0xc04d428  jal         func_1350A0
    ctx->pc = 0x21FD14u;
    SET_GPR_U32(ctx, 31, 0x21FD1Cu);
    ctx->pc = 0x21FD18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21FD14u;
            // 0x21fd18: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1350A0u;
    if (runtime->hasFunction(0x1350A0u)) {
        auto targetFn = runtime->lookupFunction(0x1350A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21FD1Cu; }
        if (ctx->pc != 0x21FD1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TextureMapEnable__11mgCDrawPrimFi_0x1350a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21FD1Cu; }
        if (ctx->pc != 0x21FD1Cu) { return; }
    }
    ctx->pc = 0x21FD1Cu;
label_21fd1c:
    // 0x21fd1c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x21fd1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21fd20: 0xc04d430  jal         func_1350C0
    ctx->pc = 0x21FD20u;
    SET_GPR_U32(ctx, 31, 0x21FD28u);
    ctx->pc = 0x21FD24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21FD20u;
            // 0x21fd24: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1350C0u;
    if (runtime->hasFunction(0x1350C0u)) {
        auto targetFn = runtime->lookupFunction(0x1350C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21FD28u; }
        if (ctx->pc != 0x21FD28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Bilinear__11mgCDrawPrimFi_0x1350c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21FD28u; }
        if (ctx->pc != 0x21FD28u) { return; }
    }
    ctx->pc = 0x21FD28u;
label_21fd28:
    // 0x21fd28: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x21FD28u;
    {
        const bool branch_taken_0x21fd28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x21fd28) {
            ctx->pc = 0x21FD94u;
            goto label_21fd94;
        }
    }
    ctx->pc = 0x21FD30u;
label_21fd30:
    // 0x21fd30: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x21fd30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21fd34: 0xc04d3bc  jal         func_134EF0
    ctx->pc = 0x21FD34u;
    SET_GPR_U32(ctx, 31, 0x21FD3Cu);
    ctx->pc = 0x21FD38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21FD34u;
            // 0x21fd38: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134EF0u;
    if (runtime->hasFunction(0x134EF0u)) {
        auto targetFn = runtime->lookupFunction(0x134EF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21FD3Cu; }
        if (ctx->pc != 0x21FD3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AlphaTestEnable__11mgCDrawPrimFi_0x134ef0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21FD3Cu; }
        if (ctx->pc != 0x21FD3Cu) { return; }
    }
    ctx->pc = 0x21FD3Cu;
label_21fd3c:
    // 0x21fd3c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x21fd3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21fd40: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x21fd40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x21fd44: 0xc04d3c4  jal         func_134F10
    ctx->pc = 0x21FD44u;
    SET_GPR_U32(ctx, 31, 0x21FD4Cu);
    ctx->pc = 0x21FD48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21FD44u;
            // 0x21fd48: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134F10u;
    if (runtime->hasFunction(0x134F10u)) {
        auto targetFn = runtime->lookupFunction(0x134F10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21FD4Cu; }
        if (ctx->pc != 0x21FD4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AlphaTest__11mgCDrawPrimFii_0x134f10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21FD4Cu; }
        if (ctx->pc != 0x21FD4Cu) { return; }
    }
    ctx->pc = 0x21FD4Cu;
label_21fd4c:
    // 0x21fd4c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x21fd4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21fd50: 0xc04d3b0  jal         func_134EC0
    ctx->pc = 0x21FD50u;
    SET_GPR_U32(ctx, 31, 0x21FD58u);
    ctx->pc = 0x21FD54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21FD50u;
            // 0x21fd54: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134EC0u;
    if (runtime->hasFunction(0x134EC0u)) {
        auto targetFn = runtime->lookupFunction(0x134EC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21FD58u; }
        if (ctx->pc != 0x21FD58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AlphaBlendEnable__11mgCDrawPrimFi_0x134ec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21FD58u; }
        if (ctx->pc != 0x21FD58u) { return; }
    }
    ctx->pc = 0x21FD58u;
label_21fd58:
    // 0x21fd58: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x21fd58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21fd5c: 0xc04d3b8  jal         func_134EE0
    ctx->pc = 0x21FD5Cu;
    SET_GPR_U32(ctx, 31, 0x21FD64u);
    ctx->pc = 0x21FD60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21FD5Cu;
            // 0x21fd60: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134EE0u;
    if (runtime->hasFunction(0x134EE0u)) {
        auto targetFn = runtime->lookupFunction(0x134EE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21FD64u; }
        if (ctx->pc != 0x21FD64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AlphaBlend__11mgCDrawPrimFi_0x134ee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21FD64u; }
        if (ctx->pc != 0x21FD64u) { return; }
    }
    ctx->pc = 0x21FD64u;
label_21fd64:
    // 0x21fd64: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x21fd64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21fd68: 0xc04d3e4  jal         func_134F90
    ctx->pc = 0x21FD68u;
    SET_GPR_U32(ctx, 31, 0x21FD70u);
    ctx->pc = 0x21FD6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21FD68u;
            // 0x21fd6c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134F90u;
    if (runtime->hasFunction(0x134F90u)) {
        auto targetFn = runtime->lookupFunction(0x134F90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21FD70u; }
        if (ctx->pc != 0x21FD70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DepthTestEnable__11mgCDrawPrimFi_0x134f90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21FD70u; }
        if (ctx->pc != 0x21FD70u) { return; }
    }
    ctx->pc = 0x21FD70u;
label_21fd70:
    // 0x21fd70: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x21fd70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21fd74: 0xc04d424  jal         func_135090
    ctx->pc = 0x21FD74u;
    SET_GPR_U32(ctx, 31, 0x21FD7Cu);
    ctx->pc = 0x21FD78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21FD74u;
            // 0x21fd78: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x135090u;
    if (runtime->hasFunction(0x135090u)) {
        auto targetFn = runtime->lookupFunction(0x135090u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21FD7Cu; }
        if (ctx->pc != 0x21FD7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ZMask__11mgCDrawPrimFi_0x135090(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21FD7Cu; }
        if (ctx->pc != 0x21FD7Cu) { return; }
    }
    ctx->pc = 0x21FD7Cu;
label_21fd7c:
    // 0x21fd7c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x21fd7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21fd80: 0xc04d434  jal         func_1350D0
    ctx->pc = 0x21FD80u;
    SET_GPR_U32(ctx, 31, 0x21FD88u);
    ctx->pc = 0x21FD84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21FD80u;
            // 0x21fd84: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1350D0u;
    if (runtime->hasFunction(0x1350D0u)) {
        auto targetFn = runtime->lookupFunction(0x1350D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21FD88u; }
        if (ctx->pc != 0x21FD88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Shading__11mgCDrawPrimFi_0x1350d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21FD88u; }
        if (ctx->pc != 0x21FD88u) { return; }
    }
    ctx->pc = 0x21FD88u;
label_21fd88:
    // 0x21fd88: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x21fd88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21fd8c: 0xc04d428  jal         func_1350A0
    ctx->pc = 0x21FD8Cu;
    SET_GPR_U32(ctx, 31, 0x21FD94u);
    ctx->pc = 0x21FD90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21FD8Cu;
            // 0x21fd90: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1350A0u;
    if (runtime->hasFunction(0x1350A0u)) {
        auto targetFn = runtime->lookupFunction(0x1350A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21FD94u; }
        if (ctx->pc != 0x21FD94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TextureMapEnable__11mgCDrawPrimFi_0x1350a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21FD94u; }
        if (ctx->pc != 0x21FD94u) { return; }
    }
    ctx->pc = 0x21FD94u;
label_21fd94:
    // 0x21fd94: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x21fd94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_21fd98:
    // 0x21fd98: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x21fd98u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21fd9c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x21fd9cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21fda0: 0x3e00008  jr          $ra
    ctx->pc = 0x21FDA0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21FDA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21FDA0u;
            // 0x21fda4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x21FDA8u;
}
