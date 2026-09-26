#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: StartEditModeFromMenu__FP6CSceneiPi
// Address: 0x2d94c0 - 0x2d9710
void StartEditModeFromMenu__FP6CSceneiPi_0x2d94c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("StartEditModeFromMenu__FP6CSceneiPi_0x2d94c0");
#endif

    switch (ctx->pc) {
        case 0x2d94c0u: goto label_2d94c0;
        case 0x2d94c4u: goto label_2d94c4;
        case 0x2d94c8u: goto label_2d94c8;
        case 0x2d94ccu: goto label_2d94cc;
        case 0x2d94d0u: goto label_2d94d0;
        case 0x2d94d4u: goto label_2d94d4;
        case 0x2d94d8u: goto label_2d94d8;
        case 0x2d94dcu: goto label_2d94dc;
        case 0x2d94e0u: goto label_2d94e0;
        case 0x2d94e4u: goto label_2d94e4;
        case 0x2d94e8u: goto label_2d94e8;
        case 0x2d94ecu: goto label_2d94ec;
        case 0x2d94f0u: goto label_2d94f0;
        case 0x2d94f4u: goto label_2d94f4;
        case 0x2d94f8u: goto label_2d94f8;
        case 0x2d94fcu: goto label_2d94fc;
        case 0x2d9500u: goto label_2d9500;
        case 0x2d9504u: goto label_2d9504;
        case 0x2d9508u: goto label_2d9508;
        case 0x2d950cu: goto label_2d950c;
        case 0x2d9510u: goto label_2d9510;
        case 0x2d9514u: goto label_2d9514;
        case 0x2d9518u: goto label_2d9518;
        case 0x2d951cu: goto label_2d951c;
        case 0x2d9520u: goto label_2d9520;
        case 0x2d9524u: goto label_2d9524;
        case 0x2d9528u: goto label_2d9528;
        case 0x2d952cu: goto label_2d952c;
        case 0x2d9530u: goto label_2d9530;
        case 0x2d9534u: goto label_2d9534;
        case 0x2d9538u: goto label_2d9538;
        case 0x2d953cu: goto label_2d953c;
        case 0x2d9540u: goto label_2d9540;
        case 0x2d9544u: goto label_2d9544;
        case 0x2d9548u: goto label_2d9548;
        case 0x2d954cu: goto label_2d954c;
        case 0x2d9550u: goto label_2d9550;
        case 0x2d9554u: goto label_2d9554;
        case 0x2d9558u: goto label_2d9558;
        case 0x2d955cu: goto label_2d955c;
        case 0x2d9560u: goto label_2d9560;
        case 0x2d9564u: goto label_2d9564;
        case 0x2d9568u: goto label_2d9568;
        case 0x2d956cu: goto label_2d956c;
        case 0x2d9570u: goto label_2d9570;
        case 0x2d9574u: goto label_2d9574;
        case 0x2d9578u: goto label_2d9578;
        case 0x2d957cu: goto label_2d957c;
        case 0x2d9580u: goto label_2d9580;
        case 0x2d9584u: goto label_2d9584;
        case 0x2d9588u: goto label_2d9588;
        case 0x2d958cu: goto label_2d958c;
        case 0x2d9590u: goto label_2d9590;
        case 0x2d9594u: goto label_2d9594;
        case 0x2d9598u: goto label_2d9598;
        case 0x2d959cu: goto label_2d959c;
        case 0x2d95a0u: goto label_2d95a0;
        case 0x2d95a4u: goto label_2d95a4;
        case 0x2d95a8u: goto label_2d95a8;
        case 0x2d95acu: goto label_2d95ac;
        case 0x2d95b0u: goto label_2d95b0;
        case 0x2d95b4u: goto label_2d95b4;
        case 0x2d95b8u: goto label_2d95b8;
        case 0x2d95bcu: goto label_2d95bc;
        case 0x2d95c0u: goto label_2d95c0;
        case 0x2d95c4u: goto label_2d95c4;
        case 0x2d95c8u: goto label_2d95c8;
        case 0x2d95ccu: goto label_2d95cc;
        case 0x2d95d0u: goto label_2d95d0;
        case 0x2d95d4u: goto label_2d95d4;
        case 0x2d95d8u: goto label_2d95d8;
        case 0x2d95dcu: goto label_2d95dc;
        case 0x2d95e0u: goto label_2d95e0;
        case 0x2d95e4u: goto label_2d95e4;
        case 0x2d95e8u: goto label_2d95e8;
        case 0x2d95ecu: goto label_2d95ec;
        case 0x2d95f0u: goto label_2d95f0;
        case 0x2d95f4u: goto label_2d95f4;
        case 0x2d95f8u: goto label_2d95f8;
        case 0x2d95fcu: goto label_2d95fc;
        case 0x2d9600u: goto label_2d9600;
        case 0x2d9604u: goto label_2d9604;
        case 0x2d9608u: goto label_2d9608;
        case 0x2d960cu: goto label_2d960c;
        case 0x2d9610u: goto label_2d9610;
        case 0x2d9614u: goto label_2d9614;
        case 0x2d9618u: goto label_2d9618;
        case 0x2d961cu: goto label_2d961c;
        case 0x2d9620u: goto label_2d9620;
        case 0x2d9624u: goto label_2d9624;
        case 0x2d9628u: goto label_2d9628;
        case 0x2d962cu: goto label_2d962c;
        case 0x2d9630u: goto label_2d9630;
        case 0x2d9634u: goto label_2d9634;
        case 0x2d9638u: goto label_2d9638;
        case 0x2d963cu: goto label_2d963c;
        case 0x2d9640u: goto label_2d9640;
        case 0x2d9644u: goto label_2d9644;
        case 0x2d9648u: goto label_2d9648;
        case 0x2d964cu: goto label_2d964c;
        case 0x2d9650u: goto label_2d9650;
        case 0x2d9654u: goto label_2d9654;
        case 0x2d9658u: goto label_2d9658;
        case 0x2d965cu: goto label_2d965c;
        case 0x2d9660u: goto label_2d9660;
        case 0x2d9664u: goto label_2d9664;
        case 0x2d9668u: goto label_2d9668;
        case 0x2d966cu: goto label_2d966c;
        case 0x2d9670u: goto label_2d9670;
        case 0x2d9674u: goto label_2d9674;
        case 0x2d9678u: goto label_2d9678;
        case 0x2d967cu: goto label_2d967c;
        case 0x2d9680u: goto label_2d9680;
        case 0x2d9684u: goto label_2d9684;
        case 0x2d9688u: goto label_2d9688;
        case 0x2d968cu: goto label_2d968c;
        case 0x2d9690u: goto label_2d9690;
        case 0x2d9694u: goto label_2d9694;
        case 0x2d9698u: goto label_2d9698;
        case 0x2d969cu: goto label_2d969c;
        case 0x2d96a0u: goto label_2d96a0;
        case 0x2d96a4u: goto label_2d96a4;
        case 0x2d96a8u: goto label_2d96a8;
        case 0x2d96acu: goto label_2d96ac;
        case 0x2d96b0u: goto label_2d96b0;
        case 0x2d96b4u: goto label_2d96b4;
        case 0x2d96b8u: goto label_2d96b8;
        case 0x2d96bcu: goto label_2d96bc;
        case 0x2d96c0u: goto label_2d96c0;
        case 0x2d96c4u: goto label_2d96c4;
        case 0x2d96c8u: goto label_2d96c8;
        case 0x2d96ccu: goto label_2d96cc;
        case 0x2d96d0u: goto label_2d96d0;
        case 0x2d96d4u: goto label_2d96d4;
        case 0x2d96d8u: goto label_2d96d8;
        case 0x2d96dcu: goto label_2d96dc;
        case 0x2d96e0u: goto label_2d96e0;
        case 0x2d96e4u: goto label_2d96e4;
        case 0x2d96e8u: goto label_2d96e8;
        case 0x2d96ecu: goto label_2d96ec;
        case 0x2d96f0u: goto label_2d96f0;
        case 0x2d96f4u: goto label_2d96f4;
        case 0x2d96f8u: goto label_2d96f8;
        case 0x2d96fcu: goto label_2d96fc;
        case 0x2d9700u: goto label_2d9700;
        case 0x2d9704u: goto label_2d9704;
        case 0x2d9708u: goto label_2d9708;
        case 0x2d970cu: goto label_2d970c;
        default: break;
    }

    ctx->pc = 0x2d94c0u;

label_2d94c0:
    // 0x2d94c0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2d94c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_2d94c4:
    // 0x2d94c4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2d94c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_2d94c8:
    // 0x2d94c8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2d94c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_2d94cc:
    // 0x2d94cc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2d94ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2d94d0:
    // 0x2d94d0: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2d94d0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2d94d4:
    // 0x2d94d4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2d94d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2d94d8:
    // 0x2d94d8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2d94d8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2d94dc:
    // 0x2d94dc: 0x8c852e5c  lw          $a1, 0x2E5C($a0)
    ctx->pc = 0x2d94dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 11868)));
label_2d94e0:
    // 0x2d94e0: 0xc0a0f58  jal         func_283D60
label_2d94e4:
    if (ctx->pc == 0x2D94E4u) {
        ctx->pc = 0x2D94E4u;
            // 0x2d94e4: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2D94E8u;
        goto label_2d94e8;
    }
    ctx->pc = 0x2D94E0u;
    SET_GPR_U32(ctx, 31, 0x2D94E8u);
    ctx->pc = 0x2D94E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D94E0u;
            // 0x2d94e4: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x283D60u;
    if (runtime->hasFunction(0x283D60u)) {
        auto targetFn = runtime->lookupFunction(0x283D60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D94E8u; }
        if (ctx->pc != 0x2D94E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMap__6CSceneFi_0x283d60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D94E8u; }
        if (ctx->pc != 0x2D94E8u) { return; }
    }
    ctx->pc = 0x2D94E8u;
label_2d94e8:
    // 0x2d94e8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2d94e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2d94ec:
    // 0x2d94ec: 0xaf929e0c  sw          $s2, -0x61F4($gp)
    ctx->pc = 0x2d94ecu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942220), GPR_U32(ctx, 18));
label_2d94f0:
    // 0x2d94f0: 0xaf829e24  sw          $v0, -0x61DC($gp)
    ctx->pc = 0x2d94f0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942244), GPR_U32(ctx, 2));
label_2d94f4:
    // 0x2d94f4: 0xc0b646c  jal         func_2D91B0
label_2d94f8:
    if (ctx->pc == 0x2D94F8u) {
        ctx->pc = 0x2D94F8u;
            // 0x2d94f8: 0xaf809e28  sw          $zero, -0x61D8($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294942248), GPR_U32(ctx, 0));
        ctx->pc = 0x2D94FCu;
        goto label_2d94fc;
    }
    ctx->pc = 0x2D94F4u;
    SET_GPR_U32(ctx, 31, 0x2D94FCu);
    ctx->pc = 0x2D94F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D94F4u;
            // 0x2d94f8: 0xaf809e28  sw          $zero, -0x61D8($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294942248), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D91B0u;
    if (runtime->hasFunction(0x2D91B0u)) {
        auto targetFn = runtime->lookupFunction(0x2D91B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D94FCu; }
        if (ctx->pc != 0x2D94FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ClearEditStepCnt__Fv_0x2d91b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D94FCu; }
        if (ctx->pc != 0x2D94FCu) { return; }
    }
    ctx->pc = 0x2D94FCu;
label_2d94fc:
    // 0x2d94fc: 0x8f839e0c  lw          $v1, -0x61F4($gp)
    ctx->pc = 0x2d94fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942220)));
label_2d9500:
    // 0x2d9500: 0x2462fffe  addiu       $v0, $v1, -0x2
    ctx->pc = 0x2d9500u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967294));
label_2d9504:
    // 0x2d9504: 0x2c410002  sltiu       $at, $v0, 0x2
    ctx->pc = 0x2d9504u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_2d9508:
    // 0x2d9508: 0x14200005  bnez        $at, . + 4 + (0x5 << 2)
label_2d950c:
    if (ctx->pc == 0x2D950Cu) {
        ctx->pc = 0x2D950Cu;
            // 0x2d950c: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->pc = 0x2D9510u;
        goto label_2d9510;
    }
    ctx->pc = 0x2D9508u;
    {
        const bool branch_taken_0x2d9508 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D950Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D9508u;
            // 0x2d950c: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d9508) {
            ctx->pc = 0x2D9520u;
            goto label_2d9520;
        }
    }
    ctx->pc = 0x2D9510u;
label_2d9510:
    // 0x2d9510: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
label_2d9514:
    if (ctx->pc == 0x2D9514u) {
        ctx->pc = 0x2D9514u;
            // 0x2d9514: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->pc = 0x2D9518u;
        goto label_2d9518;
    }
    ctx->pc = 0x2D9510u;
    {
        const bool branch_taken_0x2d9510 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2D9514u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D9510u;
            // 0x2d9514: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d9510) {
            ctx->pc = 0x2D9520u;
            goto label_2d9520;
        }
    }
    ctx->pc = 0x2D9518u;
label_2d9518:
    // 0x2d9518: 0x14620070  bne         $v1, $v0, . + 4 + (0x70 << 2)
label_2d951c:
    if (ctx->pc == 0x2D951Cu) {
        ctx->pc = 0x2D9520u;
        goto label_2d9520;
    }
    ctx->pc = 0x2D9518u;
    {
        const bool branch_taken_0x2d9518 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2d9518) {
            ctx->pc = 0x2D96DCu;
            goto label_2d96dc;
        }
    }
    ctx->pc = 0x2D9520u;
label_2d9520:
    // 0x2d9520: 0xc0b6478  jal         func_2D91E0
label_2d9524:
    if (ctx->pc == 0x2D9524u) {
        ctx->pc = 0x2D9528u;
        goto label_2d9528;
    }
    ctx->pc = 0x2D9520u;
    SET_GPR_U32(ctx, 31, 0x2D9528u);
    ctx->pc = 0x2D91E0u;
    if (runtime->hasFunction(0x2D91E0u)) {
        auto targetFn = runtime->lookupFunction(0x2D91E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D9528u; }
        if (ctx->pc != 0x2D9528u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ClearEditFlag__Fv_0x2d91e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D9528u; }
        if (ctx->pc != 0x2D9528u) { return; }
    }
    ctx->pc = 0x2D9528u;
label_2d9528:
    // 0x2d9528: 0x3c0201f6  lui         $v0, 0x1F6
    ctx->pc = 0x2d9528u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)502 << 16));
label_2d952c:
    // 0x2d952c: 0x3c0501f6  lui         $a1, 0x1F6
    ctx->pc = 0x2d952cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)502 << 16));
label_2d9530:
    // 0x2d9530: 0x24428aa0  addiu       $v0, $v0, -0x7560
    ctx->pc = 0x2d9530u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937248));
label_2d9534:
    // 0x2d9534: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x2d9534u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_2d9538:
    // 0x2d9538: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x2d9538u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_2d953c:
    // 0x2d953c: 0x24a58ab0  addiu       $a1, $a1, -0x7550
    ctx->pc = 0x2d953cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294937264));
label_2d9540:
    // 0x2d9540: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x2d9540u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_2d9544:
    // 0x2d9544: 0x7cc30000  sq          $v1, 0x0($a2)
    ctx->pc = 0x2d9544u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 3));
label_2d9548:
    // 0x2d9548: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x2d9548u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_2d954c:
    // 0x2d954c: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x2d954cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2d9550:
    // 0x2d9550: 0xafa60040  sw          $a2, 0x40($sp)
    ctx->pc = 0x2d9550u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 6));
label_2d9554:
    // 0x2d9554: 0x8e070004  lw          $a3, 0x4($s0)
    ctx->pc = 0x2d9554u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_2d9558:
    // 0x2d9558: 0xafa70044  sw          $a3, 0x44($sp)
    ctx->pc = 0x2d9558u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 7));
label_2d955c:
    // 0x2d955c: 0x8e080008  lw          $t0, 0x8($s0)
    ctx->pc = 0x2d955cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_2d9560:
    // 0x2d9560: 0xafa80048  sw          $t0, 0x48($sp)
    ctx->pc = 0x2d9560u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 8));
label_2d9564:
    // 0x2d9564: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x2d9564u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_2d9568:
    // 0x2d9568: 0xafa3004c  sw          $v1, 0x4C($sp)
    ctx->pc = 0x2d9568u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 3));
label_2d956c:
    // 0x2d956c: 0xdca30000  ld          $v1, 0x0($a1)
    ctx->pc = 0x2d956cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 5), 0)));
label_2d9570:
    // 0x2d9570: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x2d9570u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2d9574:
    // 0x2d9574: 0xfc830000  sd          $v1, 0x0($a0)
    ctx->pc = 0x2d9574u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 3));
label_2d9578:
    // 0x2d9578: 0xe4800008  swc1        $f0, 0x8($a0)
    ctx->pc = 0x2d9578u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
label_2d957c:
    // 0x2d957c: 0x8f849e0c  lw          $a0, -0x61F4($gp)
    ctx->pc = 0x2d957cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942220)));
label_2d9580:
    // 0x2d9580: 0xafa70054  sw          $a3, 0x54($sp)
    ctx->pc = 0x2d9580u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 7));
label_2d9584:
    // 0x2d9584: 0xafa80058  sw          $t0, 0x58($sp)
    ctx->pc = 0x2d9584u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 8));
label_2d9588:
    // 0x2d9588: 0x1482000a  bne         $a0, $v0, . + 4 + (0xA << 2)
label_2d958c:
    if (ctx->pc == 0x2D958Cu) {
        ctx->pc = 0x2D958Cu;
            // 0x2d958c: 0xafa60050  sw          $a2, 0x50($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 6));
        ctx->pc = 0x2D9590u;
        goto label_2d9590;
    }
    ctx->pc = 0x2D9588u;
    {
        const bool branch_taken_0x2d9588 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x2D958Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D9588u;
            // 0x2d958c: 0xafa60050  sw          $a2, 0x50($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d9588) {
            ctx->pc = 0x2D95B4u;
            goto label_2d95b4;
        }
    }
    ctx->pc = 0x2D9590u;
label_2d9590:
    // 0x2d9590: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x2d9590u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2d9594:
    // 0x2d9594: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x2d9594u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_2d9598:
    // 0x2d9598: 0xafa30040  sw          $v1, 0x40($sp)
    ctx->pc = 0x2d9598u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 3));
label_2d959c:
    // 0x2d959c: 0xafa30044  sw          $v1, 0x44($sp)
    ctx->pc = 0x2d959cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 3));
label_2d95a0:
    // 0x2d95a0: 0xafa30048  sw          $v1, 0x48($sp)
    ctx->pc = 0x2d95a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 3));
label_2d95a4:
    // 0x2d95a4: 0xafa3004c  sw          $v1, 0x4C($sp)
    ctx->pc = 0x2d95a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 3));
label_2d95a8:
    // 0x2d95a8: 0xafa20050  sw          $v0, 0x50($sp)
    ctx->pc = 0x2d95a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
label_2d95ac:
    // 0x2d95ac: 0xafa20054  sw          $v0, 0x54($sp)
    ctx->pc = 0x2d95acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 2));
label_2d95b0:
    // 0x2d95b0: 0xafa20058  sw          $v0, 0x58($sp)
    ctx->pc = 0x2d95b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 2));
label_2d95b4:
    // 0x2d95b4: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x2d95b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_2d95b8:
    // 0x2d95b8: 0x10820003  beq         $a0, $v0, . + 4 + (0x3 << 2)
label_2d95bc:
    if (ctx->pc == 0x2D95BCu) {
        ctx->pc = 0x2D95BCu;
            // 0x2d95bc: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->pc = 0x2D95C0u;
        goto label_2d95c0;
    }
    ctx->pc = 0x2D95B8u;
    {
        const bool branch_taken_0x2d95b8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x2D95BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D95B8u;
            // 0x2d95bc: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d95b8) {
            ctx->pc = 0x2D95C8u;
            goto label_2d95c8;
        }
    }
    ctx->pc = 0x2D95C0u;
label_2d95c0:
    // 0x2d95c0: 0x14820026  bne         $a0, $v0, . + 4 + (0x26 << 2)
label_2d95c4:
    if (ctx->pc == 0x2D95C4u) {
        ctx->pc = 0x2D95C8u;
        goto label_2d95c8;
    }
    ctx->pc = 0x2D95C0u;
    {
        const bool branch_taken_0x2d95c0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x2d95c0) {
            ctx->pc = 0x2D965Cu;
            goto label_2d965c;
        }
    }
    ctx->pc = 0x2D95C8u;
label_2d95c8:
    // 0x2d95c8: 0x8f829e70  lw          $v0, -0x6190($gp)
    ctx->pc = 0x2d95c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942320)));
label_2d95cc:
    // 0x2d95cc: 0x10400026  beqz        $v0, . + 4 + (0x26 << 2)
label_2d95d0:
    if (ctx->pc == 0x2D95D0u) {
        ctx->pc = 0x2D95D4u;
        goto label_2d95d4;
    }
    ctx->pc = 0x2D95CCu;
    {
        const bool branch_taken_0x2d95cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d95cc) {
            ctx->pc = 0x2D9668u;
            goto label_2d9668;
        }
    }
    ctx->pc = 0x2D95D4u;
label_2d95d4:
    // 0x2d95d4: 0x8c4200f4  lw          $v0, 0xF4($v0)
    ctx->pc = 0x2d95d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 244)));
label_2d95d8:
    // 0x2d95d8: 0x10400023  beqz        $v0, . + 4 + (0x23 << 2)
label_2d95dc:
    if (ctx->pc == 0x2D95DCu) {
        ctx->pc = 0x2D95E0u;
        goto label_2d95e0;
    }
    ctx->pc = 0x2D95D8u;
    {
        const bool branch_taken_0x2d95d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d95d8) {
            ctx->pc = 0x2D9668u;
            goto label_2d9668;
        }
    }
    ctx->pc = 0x2D95E0u;
label_2d95e0:
    // 0x2d95e0: 0xc7a00050  lwc1        $f0, 0x50($sp)
    ctx->pc = 0x2d95e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2d95e4:
    // 0x2d95e4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2d95e4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_2d95e8:
    // 0x2d95e8: 0xe4400070  swc1        $f0, 0x70($v0)
    ctx->pc = 0x2d95e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 112), bits); }
label_2d95ec:
    // 0x2d95ec: 0x8f829e70  lw          $v0, -0x6190($gp)
    ctx->pc = 0x2d95ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942320)));
label_2d95f0:
    // 0x2d95f0: 0xc7a00054  lwc1        $f0, 0x54($sp)
    ctx->pc = 0x2d95f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2d95f4:
    // 0x2d95f4: 0x8c4200f4  lw          $v0, 0xF4($v0)
    ctx->pc = 0x2d95f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 244)));
label_2d95f8:
    // 0x2d95f8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2d95f8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_2d95fc:
    // 0x2d95fc: 0xe4400074  swc1        $f0, 0x74($v0)
    ctx->pc = 0x2d95fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 116), bits); }
label_2d9600:
    // 0x2d9600: 0x8f829e70  lw          $v0, -0x6190($gp)
    ctx->pc = 0x2d9600u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942320)));
label_2d9604:
    // 0x2d9604: 0xc7a00058  lwc1        $f0, 0x58($sp)
    ctx->pc = 0x2d9604u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2d9608:
    // 0x2d9608: 0x8c4200f4  lw          $v0, 0xF4($v0)
    ctx->pc = 0x2d9608u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 244)));
label_2d960c:
    // 0x2d960c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2d960cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_2d9610:
    // 0x2d9610: 0xe4400078  swc1        $f0, 0x78($v0)
    ctx->pc = 0x2d9610u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 120), bits); }
label_2d9614:
    // 0x2d9614: 0xc7a00040  lwc1        $f0, 0x40($sp)
    ctx->pc = 0x2d9614u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2d9618:
    // 0x2d9618: 0xc0b6224  jal         func_2D8890
label_2d961c:
    if (ctx->pc == 0x2D961Cu) {
        ctx->pc = 0x2D961Cu;
            // 0x2d961c: 0x46800320  cvt.s.w     $f12, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x2D9620u;
        goto label_2d9620;
    }
    ctx->pc = 0x2D9618u;
    SET_GPR_U32(ctx, 31, 0x2D9620u);
    ctx->pc = 0x2D961Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D9618u;
            // 0x2d961c: 0x46800320  cvt.s.w     $f12, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D8890u;
    if (runtime->hasFunction(0x2D8890u)) {
        auto targetFn = runtime->lookupFunction(0x2D8890u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D9620u; }
        if (ctx->pc != 0x2D9620u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ConvColor__Ff_0x2d8890(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D9620u; }
        if (ctx->pc != 0x2D9620u) { return; }
    }
    ctx->pc = 0x2D9620u;
label_2d9620:
    // 0x2d9620: 0x3c0101f6  lui         $at, 0x1F6
    ctx->pc = 0x2d9620u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
label_2d9624:
    // 0x2d9624: 0xe42088e0  swc1        $f0, -0x7720($at)
    ctx->pc = 0x2d9624u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294936800), bits); }
label_2d9628:
    // 0x2d9628: 0xc7a00044  lwc1        $f0, 0x44($sp)
    ctx->pc = 0x2d9628u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2d962c:
    // 0x2d962c: 0xc0b6224  jal         func_2D8890
label_2d9630:
    if (ctx->pc == 0x2D9630u) {
        ctx->pc = 0x2D9630u;
            // 0x2d9630: 0x46800320  cvt.s.w     $f12, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x2D9634u;
        goto label_2d9634;
    }
    ctx->pc = 0x2D962Cu;
    SET_GPR_U32(ctx, 31, 0x2D9634u);
    ctx->pc = 0x2D9630u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D962Cu;
            // 0x2d9630: 0x46800320  cvt.s.w     $f12, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D8890u;
    if (runtime->hasFunction(0x2D8890u)) {
        auto targetFn = runtime->lookupFunction(0x2D8890u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D9634u; }
        if (ctx->pc != 0x2D9634u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ConvColor__Ff_0x2d8890(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D9634u; }
        if (ctx->pc != 0x2D9634u) { return; }
    }
    ctx->pc = 0x2D9634u;
label_2d9634:
    // 0x2d9634: 0x3c0101f6  lui         $at, 0x1F6
    ctx->pc = 0x2d9634u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
label_2d9638:
    // 0x2d9638: 0xe42088e4  swc1        $f0, -0x771C($at)
    ctx->pc = 0x2d9638u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294936804), bits); }
label_2d963c:
    // 0x2d963c: 0xc7a00048  lwc1        $f0, 0x48($sp)
    ctx->pc = 0x2d963cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2d9640:
    // 0x2d9640: 0xc0b6224  jal         func_2D8890
label_2d9644:
    if (ctx->pc == 0x2D9644u) {
        ctx->pc = 0x2D9644u;
            // 0x2d9644: 0x46800320  cvt.s.w     $f12, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x2D9648u;
        goto label_2d9648;
    }
    ctx->pc = 0x2D9640u;
    SET_GPR_U32(ctx, 31, 0x2D9648u);
    ctx->pc = 0x2D9644u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D9640u;
            // 0x2d9644: 0x46800320  cvt.s.w     $f12, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D8890u;
    if (runtime->hasFunction(0x2D8890u)) {
        auto targetFn = runtime->lookupFunction(0x2D8890u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D9648u; }
        if (ctx->pc != 0x2D9648u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ConvColor__Ff_0x2d8890(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D9648u; }
        if (ctx->pc != 0x2D9648u) { return; }
    }
    ctx->pc = 0x2D9648u;
label_2d9648:
    // 0x2d9648: 0x8fa2004c  lw          $v0, 0x4C($sp)
    ctx->pc = 0x2d9648u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
label_2d964c:
    // 0x2d964c: 0x3c0101f6  lui         $at, 0x1F6
    ctx->pc = 0x2d964cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
label_2d9650:
    // 0x2d9650: 0xe42088e8  swc1        $f0, -0x7718($at)
    ctx->pc = 0x2d9650u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294936808), bits); }
label_2d9654:
    // 0x2d9654: 0x10000004  b           . + 4 + (0x4 << 2)
label_2d9658:
    if (ctx->pc == 0x2D9658u) {
        ctx->pc = 0x2D9658u;
            // 0x2d9658: 0xaf829e38  sw          $v0, -0x61C8($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294942264), GPR_U32(ctx, 2));
        ctx->pc = 0x2D965Cu;
        goto label_2d965c;
    }
    ctx->pc = 0x2D9654u;
    {
        const bool branch_taken_0x2d9654 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D9658u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D9654u;
            // 0x2d9658: 0xaf829e38  sw          $v0, -0x61C8($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294942264), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d9654) {
            ctx->pc = 0x2D9668u;
            goto label_2d9668;
        }
    }
    ctx->pc = 0x2D965Cu;
label_2d965c:
    // 0x2d965c: 0xaf869e24  sw          $a2, -0x61DC($gp)
    ctx->pc = 0x2d965cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942244), GPR_U32(ctx, 6));
label_2d9660:
    // 0x2d9660: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x2d9660u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_2d9664:
    // 0x2d9664: 0xaf829e28  sw          $v0, -0x61D8($gp)
    ctx->pc = 0x2d9664u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942248), GPR_U32(ctx, 2));
label_2d9668:
    // 0x2d9668: 0xaf809e2c  sw          $zero, -0x61D4($gp)
    ctx->pc = 0x2d9668u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942252), GPR_U32(ctx, 0));
label_2d966c:
    // 0x2d966c: 0xaf809e34  sw          $zero, -0x61CC($gp)
    ctx->pc = 0x2d966cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942260), GPR_U32(ctx, 0));
label_2d9670:
    // 0x2d9670: 0x8e252e54  lw          $a1, 0x2E54($s1)
    ctx->pc = 0x2d9670u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11860)));
label_2d9674:
    // 0x2d9674: 0xc0a0e30  jal         func_2838C0
label_2d9678:
    if (ctx->pc == 0x2D9678u) {
        ctx->pc = 0x2D9678u;
            // 0x2d9678: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2D967Cu;
        goto label_2d967c;
    }
    ctx->pc = 0x2D9674u;
    SET_GPR_U32(ctx, 31, 0x2D967Cu);
    ctx->pc = 0x2D9678u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D9674u;
            // 0x2d9678: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2838C0u;
    if (runtime->hasFunction(0x2838C0u)) {
        auto targetFn = runtime->lookupFunction(0x2838C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D967Cu; }
        if (ctx->pc != 0x2D967Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCamera__6CSceneFi_0x2838c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D967Cu; }
        if (ctx->pc != 0x2D967Cu) { return; }
    }
    ctx->pc = 0x2D967Cu;
label_2d967c:
    // 0x2d967c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2d967cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2d9680:
    // 0x2d9680: 0x12000016  beqz        $s0, . + 4 + (0x16 << 2)
label_2d9684:
    if (ctx->pc == 0x2D9684u) {
        ctx->pc = 0x2D9688u;
        goto label_2d9688;
    }
    ctx->pc = 0x2D9680u;
    {
        const bool branch_taken_0x2d9680 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d9680) {
            ctx->pc = 0x2D96DCu;
            goto label_2d96dc;
        }
    }
    ctx->pc = 0x2D9688u;
label_2d9688:
    // 0x2d9688: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2d9688u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2d968c:
    // 0x2d968c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2d968cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2d9690:
    // 0x2d9690: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x2d9690u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_2d9694:
    // 0x2d9694: 0xc04c698  jal         func_131A60
label_2d9698:
    if (ctx->pc == 0x2D9698u) {
        ctx->pc = 0x2D9698u;
            // 0x2d9698: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x2D969Cu;
        goto label_2d969c;
    }
    ctx->pc = 0x2D9694u;
    SET_GPR_U32(ctx, 31, 0x2D969Cu);
    ctx->pc = 0x2D9698u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D9694u;
            // 0x2d9698: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x131A60u;
    if (runtime->hasFunction(0x131A60u)) {
        auto targetFn = runtime->lookupFunction(0x131A60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D969Cu; }
        if (ctx->pc != 0x2D969Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetFollowOffset__15mgCCameraFollowFfff_0x131a60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D969Cu; }
        if (ctx->pc != 0x2D969Cu) { return; }
    }
    ctx->pc = 0x2D969Cu;
label_2d969c:
    // 0x2d969c: 0x3c0101f6  lui         $at, 0x1F6
    ctx->pc = 0x2d969cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
label_2d96a0:
    // 0x2d96a0: 0x8e190060  lw          $t9, 0x60($s0)
    ctx->pc = 0x2d96a0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
label_2d96a4:
    // 0x2d96a4: 0xc42c88f0  lwc1        $f12, -0x7710($at)
    ctx->pc = 0x2d96a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294936816)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_2d96a8:
    // 0x2d96a8: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x2d96a8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_2d96ac:
    // 0x2d96ac: 0x3c0101f6  lui         $at, 0x1F6
    ctx->pc = 0x2d96acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
label_2d96b0:
    // 0x2d96b0: 0xc42d88f4  lwc1        $f13, -0x770C($at)
    ctx->pc = 0x2d96b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294936820)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_2d96b4:
    // 0x2d96b4: 0x3c0101f6  lui         $at, 0x1F6
    ctx->pc = 0x2d96b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
label_2d96b8:
    // 0x2d96b8: 0xc42e88f8  lwc1        $f14, -0x7708($at)
    ctx->pc = 0x2d96b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294936824)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_2d96bc:
    // 0x2d96bc: 0x320f809  jalr        $t9
label_2d96c0:
    if (ctx->pc == 0x2D96C0u) {
        ctx->pc = 0x2D96C0u;
            // 0x2d96c0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2D96C4u;
        goto label_2d96c4;
    }
    ctx->pc = 0x2D96BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2D96C4u);
        ctx->pc = 0x2D96C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D96BCu;
            // 0x2d96c0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2D96C4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2D96C4u; }
            if (ctx->pc != 0x2D96C4u) { return; }
        }
        }
    }
    ctx->pc = 0x2D96C4u;
label_2d96c4:
    // 0x2d96c4: 0xc78c9e60  lwc1        $f12, -0x61A0($gp)
    ctx->pc = 0x2d96c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294942304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_2d96c8:
    // 0x2d96c8: 0xc04c68c  jal         func_131A30
label_2d96cc:
    if (ctx->pc == 0x2D96CCu) {
        ctx->pc = 0x2D96CCu;
            // 0x2d96cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2D96D0u;
        goto label_2d96d0;
    }
    ctx->pc = 0x2D96C8u;
    SET_GPR_U32(ctx, 31, 0x2D96D0u);
    ctx->pc = 0x2D96CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D96C8u;
            // 0x2d96cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131A30u;
    if (runtime->hasFunction(0x131A30u)) {
        auto targetFn = runtime->lookupFunction(0x131A30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D96D0u; }
        if (ctx->pc != 0x2D96D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetHeight__15mgCCameraFollowFf_0x131a30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D96D0u; }
        if (ctx->pc != 0x2D96D0u) { return; }
    }
    ctx->pc = 0x2D96D0u;
label_2d96d0:
    // 0x2d96d0: 0xc78c9e60  lwc1        $f12, -0x61A0($gp)
    ctx->pc = 0x2d96d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294942304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_2d96d4:
    // 0x2d96d4: 0xc04c680  jal         func_131A00
label_2d96d8:
    if (ctx->pc == 0x2D96D8u) {
        ctx->pc = 0x2D96D8u;
            // 0x2d96d8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2D96DCu;
        goto label_2d96dc;
    }
    ctx->pc = 0x2D96D4u;
    SET_GPR_U32(ctx, 31, 0x2D96DCu);
    ctx->pc = 0x2D96D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D96D4u;
            // 0x2d96d8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131A00u;
    if (runtime->hasFunction(0x131A00u)) {
        auto targetFn = runtime->lookupFunction(0x131A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D96DCu; }
        if (ctx->pc != 0x2D96DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetDistance__15mgCCameraFollowFf_0x131a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D96DCu; }
        if (ctx->pc != 0x2D96DCu) { return; }
    }
    ctx->pc = 0x2D96DCu;
label_2d96dc:
    // 0x2d96dc: 0xc0beaf8  jal         func_2FABE0
label_2d96e0:
    if (ctx->pc == 0x2D96E0u) {
        ctx->pc = 0x2D96E4u;
        goto label_2d96e4;
    }
    ctx->pc = 0x2D96DCu;
    SET_GPR_U32(ctx, 31, 0x2D96E4u);
    ctx->pc = 0x2FABE0u;
    if (runtime->hasFunction(0x2FABE0u)) {
        auto targetFn = runtime->lookupFunction(0x2FABE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D96E4u; }
        if (ctx->pc != 0x2D96E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EditInitPlaceEffect__Fv_0x2fabe0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D96E4u; }
        if (ctx->pc != 0x2D96E4u) { return; }
    }
    ctx->pc = 0x2D96E4u;
label_2d96e4:
    // 0x2d96e4: 0xc0beeb0  jal         func_2FBAC0
label_2d96e8:
    if (ctx->pc == 0x2D96E8u) {
        ctx->pc = 0x2D96ECu;
        goto label_2d96ec;
    }
    ctx->pc = 0x2D96E4u;
    SET_GPR_U32(ctx, 31, 0x2D96ECu);
    ctx->pc = 0x2FBAC0u;
    if (runtime->hasFunction(0x2FBAC0u)) {
        auto targetFn = runtime->lookupFunction(0x2FBAC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D96ECu; }
        if (ctx->pc != 0x2D96ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EditInitPlaceAnime__Fv_0x2fbac0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D96ECu; }
        if (ctx->pc != 0x2D96ECu) { return; }
    }
    ctx->pc = 0x2D96ECu;
label_2d96ec:
    // 0x2d96ec: 0xc0b7490  jal         func_2DD240
label_2d96f0:
    if (ctx->pc == 0x2D96F0u) {
        ctx->pc = 0x2D96F0u;
            // 0x2d96f0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2D96F4u;
        goto label_2d96f4;
    }
    ctx->pc = 0x2D96ECu;
    SET_GPR_U32(ctx, 31, 0x2D96F4u);
    ctx->pc = 0x2D96F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D96ECu;
            // 0x2d96f0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DD240u;
    if (runtime->hasFunction(0x2DD240u)) {
        auto targetFn = runtime->lookupFunction(0x2DD240u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D96F4u; }
        if (ctx->pc != 0x2D96F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        InitBalanceDraw__FP6CScene_0x2dd240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D96F4u; }
        if (ctx->pc != 0x2D96F4u) { return; }
    }
    ctx->pc = 0x2D96F4u;
label_2d96f4:
    // 0x2d96f4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2d96f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_2d96f8:
    // 0x2d96f8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2d96f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2d96fc:
    // 0x2d96fc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2d96fcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2d9700:
    // 0x2d9700: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2d9700u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2d9704:
    // 0x2d9704: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2d9704u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2d9708:
    // 0x2d9708: 0x3e00008  jr          $ra
label_2d970c:
    if (ctx->pc == 0x2D970Cu) {
        ctx->pc = 0x2D970Cu;
            // 0x2d970c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x2D9710u;
        goto label_fallthrough_0x2d9708;
    }
    ctx->pc = 0x2D9708u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D970Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D9708u;
            // 0x2d970c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x2d9708:
    ctx->pc = 0x2D9710u;
}
