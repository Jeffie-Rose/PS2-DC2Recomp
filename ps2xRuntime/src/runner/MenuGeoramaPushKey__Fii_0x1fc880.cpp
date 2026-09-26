#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: MenuGeoramaPushKey__Fii
// Address: 0x1fc880 - 0x1fc910
void MenuGeoramaPushKey__Fii_0x1fc880(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("MenuGeoramaPushKey__Fii_0x1fc880");
#endif

    switch (ctx->pc) {
        case 0x1fc880u: goto label_1fc880;
        case 0x1fc884u: goto label_1fc884;
        case 0x1fc888u: goto label_1fc888;
        case 0x1fc88cu: goto label_1fc88c;
        case 0x1fc890u: goto label_1fc890;
        case 0x1fc894u: goto label_1fc894;
        case 0x1fc898u: goto label_1fc898;
        case 0x1fc89cu: goto label_1fc89c;
        case 0x1fc8a0u: goto label_1fc8a0;
        case 0x1fc8a4u: goto label_1fc8a4;
        case 0x1fc8a8u: goto label_1fc8a8;
        case 0x1fc8acu: goto label_1fc8ac;
        case 0x1fc8b0u: goto label_1fc8b0;
        case 0x1fc8b4u: goto label_1fc8b4;
        case 0x1fc8b8u: goto label_1fc8b8;
        case 0x1fc8bcu: goto label_1fc8bc;
        case 0x1fc8c0u: goto label_1fc8c0;
        case 0x1fc8c4u: goto label_1fc8c4;
        case 0x1fc8c8u: goto label_1fc8c8;
        case 0x1fc8ccu: goto label_1fc8cc;
        case 0x1fc8d0u: goto label_1fc8d0;
        case 0x1fc8d4u: goto label_1fc8d4;
        case 0x1fc8d8u: goto label_1fc8d8;
        case 0x1fc8dcu: goto label_1fc8dc;
        case 0x1fc8e0u: goto label_1fc8e0;
        case 0x1fc8e4u: goto label_1fc8e4;
        case 0x1fc8e8u: goto label_1fc8e8;
        case 0x1fc8ecu: goto label_1fc8ec;
        case 0x1fc8f0u: goto label_1fc8f0;
        case 0x1fc8f4u: goto label_1fc8f4;
        case 0x1fc8f8u: goto label_1fc8f8;
        case 0x1fc8fcu: goto label_1fc8fc;
        case 0x1fc900u: goto label_1fc900;
        case 0x1fc904u: goto label_1fc904;
        case 0x1fc908u: goto label_1fc908;
        case 0x1fc90cu: goto label_1fc90c;
        default: break;
    }

    ctx->pc = 0x1fc880u;

label_1fc880:
    // 0x1fc880: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1fc880u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1fc884:
    // 0x1fc884: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1fc884u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1fc888:
    // 0x1fc888: 0x8f8294f8  lw          $v0, -0x6B08($gp)
    ctx->pc = 0x1fc888u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939896)));
label_1fc88c:
    // 0x1fc88c: 0x90420001  lbu         $v0, 0x1($v0)
    ctx->pc = 0x1fc88cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
label_1fc890:
    // 0x1fc890: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_1fc894:
    if (ctx->pc == 0x1FC894u) {
        ctx->pc = 0x1FC894u;
            // 0x1fc894: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1FC898u;
        goto label_1fc898;
    }
    ctx->pc = 0x1FC890u;
    {
        const bool branch_taken_0x1fc890 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FC894u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FC890u;
            // 0x1fc894: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fc890) {
            ctx->pc = 0x1FC8A0u;
            goto label_1fc8a0;
        }
    }
    ctx->pc = 0x1FC898u;
label_1fc898:
    // 0x1fc898: 0x1000001a  b           . + 4 + (0x1A << 2)
label_1fc89c:
    if (ctx->pc == 0x1FC89Cu) {
        ctx->pc = 0x1FC89Cu;
            // 0x1fc89c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1FC8A0u;
        goto label_1fc8a0;
    }
    ctx->pc = 0x1FC898u;
    {
        const bool branch_taken_0x1fc898 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FC89Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FC898u;
            // 0x1fc89c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fc898) {
            ctx->pc = 0x1FC904u;
            goto label_1fc904;
        }
    }
    ctx->pc = 0x1FC8A0u;
label_1fc8a0:
    // 0x1fc8a0: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1fc8a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1fc8a4:
    // 0x1fc8a4: 0x3c020035  lui         $v0, 0x35
    ctx->pc = 0x1fc8a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
label_1fc8a8:
    // 0x1fc8a8: 0x8f848ffc  lw          $a0, -0x7004($gp)
    ctx->pc = 0x1fc8a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938620)));
label_1fc8ac:
    // 0x1fc8ac: 0x2442e980  addiu       $v0, $v0, -0x1680
    ctx->pc = 0x1fc8acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961536));
label_1fc8b0:
    // 0x1fc8b0: 0x84830014  lh          $v1, 0x14($a0)
    ctx->pc = 0x1fc8b0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 20)));
label_1fc8b4:
    // 0x1fc8b4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1fc8b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1fc8b8:
    // 0x1fc8b8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1fc8b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1fc8bc:
    // 0x1fc8bc: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1fc8bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1fc8c0:
    // 0x1fc8c0: 0x40f809  jalr        $v0
label_1fc8c4:
    if (ctx->pc == 0x1FC8C4u) {
        ctx->pc = 0x1FC8C8u;
        goto label_1fc8c8;
    }
    ctx->pc = 0x1FC8C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1FC8C8u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x1FC8C8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1FC8C8u; }
            if (ctx->pc != 0x1FC8C8u) { return; }
        }
        }
    }
    ctx->pc = 0x1FC8C8u;
label_1fc8c8:
    // 0x1fc8c8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1fc8c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1fc8cc:
    // 0x1fc8cc: 0x1443000d  bne         $v0, $v1, . + 4 + (0xD << 2)
label_1fc8d0:
    if (ctx->pc == 0x1FC8D0u) {
        ctx->pc = 0x1FC8D0u;
            // 0x1fc8d0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1FC8D4u;
        goto label_1fc8d4;
    }
    ctx->pc = 0x1FC8CCu;
    {
        const bool branch_taken_0x1fc8cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1FC8D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FC8CCu;
            // 0x1fc8d0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fc8cc) {
            ctx->pc = 0x1FC904u;
            goto label_1fc904;
        }
    }
    ctx->pc = 0x1FC8D4u;
label_1fc8d4:
    // 0x1fc8d4: 0x8f828ffc  lw          $v0, -0x7004($gp)
    ctx->pc = 0x1fc8d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938620)));
label_1fc8d8:
    // 0x1fc8d8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1fc8d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1fc8dc:
    // 0x1fc8dc: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x1fc8dcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_1fc8e0:
    // 0x1fc8e0: 0xa4430000  sh          $v1, 0x0($v0)
    ctx->pc = 0x1fc8e0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 3));
label_1fc8e4:
    // 0x1fc8e4: 0x8f848ffc  lw          $a0, -0x7004($gp)
    ctx->pc = 0x1fc8e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938620)));
label_1fc8e8:
    // 0x1fc8e8: 0xc08e7cc  jal         func_239F30
label_1fc8ec:
    if (ctx->pc == 0x1FC8ECu) {
        ctx->pc = 0x1FC8ECu;
            // 0x1fc8ec: 0x24a58e38  addiu       $a1, $a1, -0x71C8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294938168));
        ctx->pc = 0x1FC8F0u;
        goto label_1fc8f0;
    }
    ctx->pc = 0x1FC8E8u;
    SET_GPR_U32(ctx, 31, 0x1FC8F0u);
    ctx->pc = 0x1FC8ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FC8E8u;
            // 0x1fc8ec: 0x24a58e38  addiu       $a1, $a1, -0x71C8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294938168));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239F30u;
    if (runtime->hasFunction(0x239F30u)) {
        auto targetFn = runtime->lookupFunction(0x239F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FC8F0u; }
        if (ctx->pc != 0x1FC8F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ExeScript__14CBaseMenuClassFPc_0x239f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FC8F0u; }
        if (ctx->pc != 0x1FC8F0u) { return; }
    }
    ctx->pc = 0x1FC8F0u;
label_1fc8f0:
    // 0x1fc8f0: 0x8f848ffc  lw          $a0, -0x7004($gp)
    ctx->pc = 0x1fc8f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938620)));
label_1fc8f4:
    // 0x1fc8f4: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x1fc8f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1fc8f8:
    // 0x1fc8f8: 0xc07e5b0  jal         func_1F96C0
label_1fc8fc:
    if (ctx->pc == 0x1FC8FCu) {
        ctx->pc = 0x1FC8FCu;
            // 0x1fc8fc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1FC900u;
        goto label_1fc900;
    }
    ctx->pc = 0x1FC8F8u;
    SET_GPR_U32(ctx, 31, 0x1FC900u);
    ctx->pc = 0x1FC8FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FC8F8u;
            // 0x1fc8fc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1F96C0u;
    if (runtime->hasFunction(0x1F96C0u)) {
        auto targetFn = runtime->lookupFunction(0x1F96C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FC900u; }
        if (ctx->pc != 0x1FC900u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LoadGeoramaPart__12CMenuGeoramaFii_0x1f96c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FC900u; }
        if (ctx->pc != 0x1FC900u) { return; }
    }
    ctx->pc = 0x1FC900u;
label_1fc900:
    // 0x1fc900: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1fc900u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1fc904:
    // 0x1fc904: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1fc904u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1fc908:
    // 0x1fc908: 0x3e00008  jr          $ra
label_1fc90c:
    if (ctx->pc == 0x1FC90Cu) {
        ctx->pc = 0x1FC90Cu;
            // 0x1fc90c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x1FC910u;
        goto label_fallthrough_0x1fc908;
    }
    ctx->pc = 0x1FC908u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FC90Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FC908u;
            // 0x1fc90c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x1fc908:
    ctx->pc = 0x1FC910u;
}
