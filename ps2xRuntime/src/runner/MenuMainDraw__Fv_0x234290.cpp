#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: MenuMainDraw__Fv
// Address: 0x234290 - 0x234340
void MenuMainDraw__Fv_0x234290(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("MenuMainDraw__Fv_0x234290");
#endif

    switch (ctx->pc) {
        case 0x234290u: goto label_234290;
        case 0x234294u: goto label_234294;
        case 0x234298u: goto label_234298;
        case 0x23429cu: goto label_23429c;
        case 0x2342a0u: goto label_2342a0;
        case 0x2342a4u: goto label_2342a4;
        case 0x2342a8u: goto label_2342a8;
        case 0x2342acu: goto label_2342ac;
        case 0x2342b0u: goto label_2342b0;
        case 0x2342b4u: goto label_2342b4;
        case 0x2342b8u: goto label_2342b8;
        case 0x2342bcu: goto label_2342bc;
        case 0x2342c0u: goto label_2342c0;
        case 0x2342c4u: goto label_2342c4;
        case 0x2342c8u: goto label_2342c8;
        case 0x2342ccu: goto label_2342cc;
        case 0x2342d0u: goto label_2342d0;
        case 0x2342d4u: goto label_2342d4;
        case 0x2342d8u: goto label_2342d8;
        case 0x2342dcu: goto label_2342dc;
        case 0x2342e0u: goto label_2342e0;
        case 0x2342e4u: goto label_2342e4;
        case 0x2342e8u: goto label_2342e8;
        case 0x2342ecu: goto label_2342ec;
        case 0x2342f0u: goto label_2342f0;
        case 0x2342f4u: goto label_2342f4;
        case 0x2342f8u: goto label_2342f8;
        case 0x2342fcu: goto label_2342fc;
        case 0x234300u: goto label_234300;
        case 0x234304u: goto label_234304;
        case 0x234308u: goto label_234308;
        case 0x23430cu: goto label_23430c;
        case 0x234310u: goto label_234310;
        case 0x234314u: goto label_234314;
        case 0x234318u: goto label_234318;
        case 0x23431cu: goto label_23431c;
        case 0x234320u: goto label_234320;
        case 0x234324u: goto label_234324;
        case 0x234328u: goto label_234328;
        case 0x23432cu: goto label_23432c;
        case 0x234330u: goto label_234330;
        case 0x234334u: goto label_234334;
        case 0x234338u: goto label_234338;
        case 0x23433cu: goto label_23433c;
        default: break;
    }

    ctx->pc = 0x234290u;

label_234290:
    // 0x234290: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x234290u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_234294:
    // 0x234294: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x234294u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_234298:
    // 0x234298: 0x93839540  lbu         $v1, -0x6AC0($gp)
    ctx->pc = 0x234298u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294939968)));
label_23429c:
    // 0x23429c: 0x14600025  bnez        $v1, . + 4 + (0x25 << 2)
label_2342a0:
    if (ctx->pc == 0x2342A0u) {
        ctx->pc = 0x2342A0u;
            // 0x2342a0: 0x24040080  addiu       $a0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->pc = 0x2342A4u;
        goto label_2342a4;
    }
    ctx->pc = 0x23429Cu;
    {
        const bool branch_taken_0x23429c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2342A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23429Cu;
            // 0x2342a0: 0x24040080  addiu       $a0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23429c) {
            ctx->pc = 0x234334u;
            goto label_234334;
        }
    }
    ctx->pc = 0x2342A4u;
label_2342a4:
    // 0x2342a4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2342a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2342a8:
    // 0x2342a8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2342a8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2342ac:
    // 0x2342ac: 0xc0887b0  jal         func_221EC0
label_2342b0:
    if (ctx->pc == 0x2342B0u) {
        ctx->pc = 0x2342B0u;
            // 0x2342b0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2342B4u;
        goto label_2342b4;
    }
    ctx->pc = 0x2342ACu;
    SET_GPR_U32(ctx, 31, 0x2342B4u);
    ctx->pc = 0x2342B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2342ACu;
            // 0x2342b0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x221EC0u;
    if (runtime->hasFunction(0x221EC0u)) {
        auto targetFn = runtime->lookupFunction(0x221EC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2342B4u; }
        if (ctx->pc != 0x2342B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawMenuFillBox__Fiiii_0x221ec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2342B4u; }
        if (ctx->pc != 0x2342B4u) { return; }
    }
    ctx->pc = 0x2342B4u;
label_2342b4:
    // 0x2342b4: 0x8f8394f8  lw          $v1, -0x6B08($gp)
    ctx->pc = 0x2342b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939896)));
label_2342b8:
    // 0x2342b8: 0x3c020035  lui         $v0, 0x35
    ctx->pc = 0x2342b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
label_2342bc:
    // 0x2342bc: 0x24420980  addiu       $v0, $v0, 0x980
    ctx->pc = 0x2342bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2432));
label_2342c0:
    // 0x2342c0: 0x8c630054  lw          $v1, 0x54($v1)
    ctx->pc = 0x2342c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_2342c4:
    // 0x2342c4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2342c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_2342c8:
    // 0x2342c8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2342c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2342cc:
    // 0x2342cc: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2342ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2342d0:
    // 0x2342d0: 0x40f809  jalr        $v0
label_2342d4:
    if (ctx->pc == 0x2342D4u) {
        ctx->pc = 0x2342D8u;
        goto label_2342d8;
    }
    ctx->pc = 0x2342D0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2342D8u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x2342D8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2342D8u; }
            if (ctx->pc != 0x2342D8u) { return; }
        }
        }
    }
    ctx->pc = 0x2342D8u;
label_2342d8:
    // 0x2342d8: 0x8f829520  lw          $v0, -0x6AE0($gp)
    ctx->pc = 0x2342d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939936)));
label_2342dc:
    // 0x2342dc: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_2342e0:
    if (ctx->pc == 0x2342E0u) {
        ctx->pc = 0x2342E4u;
        goto label_2342e4;
    }
    ctx->pc = 0x2342DCu;
    {
        const bool branch_taken_0x2342dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2342dc) {
            ctx->pc = 0x2342ECu;
            goto label_2342ec;
        }
    }
    ctx->pc = 0x2342E4u;
label_2342e4:
    // 0x2342e4: 0xc08db80  jal         func_236E00
label_2342e8:
    if (ctx->pc == 0x2342E8u) {
        ctx->pc = 0x2342ECu;
        goto label_2342ec;
    }
    ctx->pc = 0x2342E4u;
    SET_GPR_U32(ctx, 31, 0x2342ECu);
    ctx->pc = 0x236E00u;
    if (runtime->hasFunction(0x236E00u)) {
        auto targetFn = runtime->lookupFunction(0x236E00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2342ECu; }
        if (ctx->pc != 0x2342ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuDebugModeDraw__Fv_0x236e00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2342ECu; }
        if (ctx->pc != 0x2342ECu) { return; }
    }
    ctx->pc = 0x2342ECu;
label_2342ec:
    // 0x2342ec: 0xc08d1a0  jal         func_234680
label_2342f0:
    if (ctx->pc == 0x2342F0u) {
        ctx->pc = 0x2342F4u;
        goto label_2342f4;
    }
    ctx->pc = 0x2342ECu;
    SET_GPR_U32(ctx, 31, 0x2342F4u);
    ctx->pc = 0x234680u;
    if (runtime->hasFunction(0x234680u)) {
        auto targetFn = runtime->lookupFunction(0x234680u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2342F4u; }
        if (ctx->pc != 0x2342F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuPolygonEnvReset__Fv_0x234680(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2342F4u; }
        if (ctx->pc != 0x2342F4u) { return; }
    }
    ctx->pc = 0x2342F4u;
label_2342f4:
    // 0x2342f4: 0x8f8294a4  lw          $v0, -0x6B5C($gp)
    ctx->pc = 0x2342f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939812)));
label_2342f8:
    // 0x2342f8: 0xc05f7b4  jal         func_17DED0
label_2342fc:
    if (ctx->pc == 0x2342FCu) {
        ctx->pc = 0x2342FCu;
            // 0x2342fc: 0x24442c70  addiu       $a0, $v0, 0x2C70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 11376));
        ctx->pc = 0x234300u;
        goto label_234300;
    }
    ctx->pc = 0x2342F8u;
    SET_GPR_U32(ctx, 31, 0x234300u);
    ctx->pc = 0x2342FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2342F8u;
            // 0x2342fc: 0x24442c70  addiu       $a0, $v0, 0x2C70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 11376));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17DED0u;
    if (runtime->hasFunction(0x17DED0u)) {
        auto targetFn = runtime->lookupFunction(0x17DED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x234300u; }
        if (ctx->pc != 0x234300u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Draw__10CFadeInOutFv_0x17ded0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x234300u; }
        if (ctx->pc != 0x234300u) { return; }
    }
    ctx->pc = 0x234300u;
label_234300:
    // 0x234300: 0x8f8394f8  lw          $v1, -0x6B08($gp)
    ctx->pc = 0x234300u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939896)));
label_234304:
    // 0x234304: 0x8c640058  lw          $a0, 0x58($v1)
    ctx->pc = 0x234304u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
label_234308:
    // 0x234308: 0x4800008  bltz        $a0, . + 4 + (0x8 << 2)
label_23430c:
    if (ctx->pc == 0x23430Cu) {
        ctx->pc = 0x23430Cu;
            // 0x23430c: 0x24650054  addiu       $a1, $v1, 0x54 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 84));
        ctx->pc = 0x234310u;
        goto label_234310;
    }
    ctx->pc = 0x234308u;
    {
        const bool branch_taken_0x234308 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x23430Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x234308u;
            // 0x23430c: 0x24650054  addiu       $a1, $v1, 0x54 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 84));
        ctx->in_delay_slot = false;
        if (branch_taken_0x234308) {
            ctx->pc = 0x23432Cu;
            goto label_23432c;
        }
    }
    ctx->pc = 0x234310u;
label_234310:
    // 0x234310: 0x8c630054  lw          $v1, 0x54($v1)
    ctx->pc = 0x234310u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_234314:
    // 0x234314: 0x10640006  beq         $v1, $a0, . + 4 + (0x6 << 2)
label_234318:
    if (ctx->pc == 0x234318u) {
        ctx->pc = 0x234318u;
            // 0x234318: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x23431Cu;
        goto label_23431c;
    }
    ctx->pc = 0x234314u;
    {
        const bool branch_taken_0x234314 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x234318u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x234314u;
            // 0x234318: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x234314) {
            ctx->pc = 0x234330u;
            goto label_234330;
        }
    }
    ctx->pc = 0x23431Cu;
label_23431c:
    // 0x23431c: 0xaca40000  sw          $a0, 0x0($a1)
    ctx->pc = 0x23431cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 4));
label_234320:
    // 0x234320: 0x8f8394f8  lw          $v1, -0x6B08($gp)
    ctx->pc = 0x234320u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939896)));
label_234324:
    // 0x234324: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x234324u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_234328:
    // 0x234328: 0xac640058  sw          $a0, 0x58($v1)
    ctx->pc = 0x234328u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 88), GPR_U32(ctx, 4));
label_23432c:
    // 0x23432c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x23432cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_234330:
    // 0x234330: 0xa3839540  sb          $v1, -0x6AC0($gp)
    ctx->pc = 0x234330u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294939968), (uint8_t)GPR_U32(ctx, 3));
label_234334:
    // 0x234334: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x234334u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_234338:
    // 0x234338: 0x3e00008  jr          $ra
label_23433c:
    if (ctx->pc == 0x23433Cu) {
        ctx->pc = 0x23433Cu;
            // 0x23433c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x234340u;
        goto label_fallthrough_0x234338;
    }
    ctx->pc = 0x234338u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23433Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x234338u;
            // 0x23433c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x234338:
    ctx->pc = 0x234340u;
}
