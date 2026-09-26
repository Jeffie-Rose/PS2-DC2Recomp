#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: MenuWorldTrans__Fv
// Address: 0x234590 - 0x23464c
void MenuWorldTrans__Fv_0x234590(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("MenuWorldTrans__Fv_0x234590");
#endif

    switch (ctx->pc) {
        case 0x234590u: goto label_234590;
        case 0x234594u: goto label_234594;
        case 0x234598u: goto label_234598;
        case 0x23459cu: goto label_23459c;
        case 0x2345a0u: goto label_2345a0;
        case 0x2345a4u: goto label_2345a4;
        case 0x2345a8u: goto label_2345a8;
        case 0x2345acu: goto label_2345ac;
        case 0x2345b0u: goto label_2345b0;
        case 0x2345b4u: goto label_2345b4;
        case 0x2345b8u: goto label_2345b8;
        case 0x2345bcu: goto label_2345bc;
        case 0x2345c0u: goto label_2345c0;
        case 0x2345c4u: goto label_2345c4;
        case 0x2345c8u: goto label_2345c8;
        case 0x2345ccu: goto label_2345cc;
        case 0x2345d0u: goto label_2345d0;
        case 0x2345d4u: goto label_2345d4;
        case 0x2345d8u: goto label_2345d8;
        case 0x2345dcu: goto label_2345dc;
        case 0x2345e0u: goto label_2345e0;
        case 0x2345e4u: goto label_2345e4;
        case 0x2345e8u: goto label_2345e8;
        case 0x2345ecu: goto label_2345ec;
        case 0x2345f0u: goto label_2345f0;
        case 0x2345f4u: goto label_2345f4;
        case 0x2345f8u: goto label_2345f8;
        case 0x2345fcu: goto label_2345fc;
        case 0x234600u: goto label_234600;
        case 0x234604u: goto label_234604;
        case 0x234608u: goto label_234608;
        case 0x23460cu: goto label_23460c;
        case 0x234610u: goto label_234610;
        case 0x234614u: goto label_234614;
        case 0x234618u: goto label_234618;
        case 0x23461cu: goto label_23461c;
        case 0x234620u: goto label_234620;
        case 0x234624u: goto label_234624;
        case 0x234628u: goto label_234628;
        case 0x23462cu: goto label_23462c;
        case 0x234630u: goto label_234630;
        case 0x234634u: goto label_234634;
        case 0x234638u: goto label_234638;
        case 0x23463cu: goto label_23463c;
        case 0x234640u: goto label_234640;
        case 0x234644u: goto label_234644;
        case 0x234648u: goto label_234648;
        default: break;
    }

    ctx->pc = 0x234590u;

label_234590:
    // 0x234590: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x234590u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
label_234594:
    // 0x234594: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x234594u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_234598:
    // 0x234598: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x234598u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_23459c:
    // 0x23459c: 0x8f8294f4  lw          $v0, -0x6B0C($gp)
    ctx->pc = 0x23459cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939892)));
label_2345a0:
    // 0x2345a0: 0xc050d88  jal         func_143620
label_2345a4:
    if (ctx->pc == 0x2345A4u) {
        ctx->pc = 0x2345A4u;
            // 0x2345a4: 0xc44c00a4  lwc1        $f12, 0xA4($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->pc = 0x2345A8u;
        goto label_2345a8;
    }
    ctx->pc = 0x2345A0u;
    SET_GPR_U32(ctx, 31, 0x2345A8u);
    ctx->pc = 0x2345A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2345A0u;
            // 0x2345a4: 0xc44c00a4  lwc1        $f12, 0xA4($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x143620u;
    if (runtime->hasFunction(0x143620u)) {
        auto targetFn = runtime->lookupFunction(0x143620u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2345A8u; }
        if (ctx->pc != 0x2345A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgSetProjection__Ff_0x143620(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2345A8u; }
        if (ctx->pc != 0x2345A8u) { return; }
    }
    ctx->pc = 0x2345A8u;
label_2345a8:
    // 0x2345a8: 0x8f8494f4  lw          $a0, -0x6B0C($gp)
    ctx->pc = 0x2345a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939892)));
label_2345ac:
    // 0x2345ac: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x2345acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_2345b0:
    // 0x2345b0: 0x8c990060  lw          $t9, 0x60($a0)
    ctx->pc = 0x2345b0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 96)));
label_2345b4:
    // 0x2345b4: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x2345b4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_2345b8:
    // 0x2345b8: 0x320f809  jalr        $t9
label_2345bc:
    if (ctx->pc == 0x2345BCu) {
        ctx->pc = 0x2345BCu;
            // 0x2345bc: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2345C0u;
        goto label_2345c0;
    }
    ctx->pc = 0x2345B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2345C0u);
        ctx->pc = 0x2345BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2345B8u;
            // 0x2345bc: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2345C0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2345C0u; }
            if (ctx->pc != 0x2345C0u) { return; }
        }
        }
    }
    ctx->pc = 0x2345C0u;
label_2345c0:
    // 0x2345c0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2345c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2345c4:
    // 0x2345c4: 0xc04c574  jal         func_1315D0
label_2345c8:
    if (ctx->pc == 0x2345C8u) {
        ctx->pc = 0x2345C8u;
            // 0x2345c8: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x2345CCu;
        goto label_2345cc;
    }
    ctx->pc = 0x2345C4u;
    SET_GPR_U32(ctx, 31, 0x2345CCu);
    ctx->pc = 0x2345C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2345C4u;
            // 0x2345c8: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1315D0u;
    if (runtime->hasFunction(0x1315D0u)) {
        auto targetFn = runtime->lookupFunction(0x1315D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2345CCu; }
        if (ctx->pc != 0x2345CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPos__9mgCCameraFPf_0x1315d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2345CCu; }
        if (ctx->pc != 0x2345CCu) { return; }
    }
    ctx->pc = 0x2345CCu;
label_2345cc:
    // 0x2345cc: 0x8f8394f4  lw          $v1, -0x6B0C($gp)
    ctx->pc = 0x2345ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939892)));
label_2345d0:
    // 0x2345d0: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x2345d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_2345d4:
    // 0x2345d4: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x2345d4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_2345d8:
    // 0x2345d8: 0xc46c00a0  lwc1        $f12, 0xA0($v1)
    ctx->pc = 0x2345d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_2345dc:
    // 0x2345dc: 0xc04c564  jal         func_131590
label_2345e0:
    if (ctx->pc == 0x2345E0u) {
        ctx->pc = 0x2345E0u;
            // 0x2345e0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2345E4u;
        goto label_2345e4;
    }
    ctx->pc = 0x2345DCu;
    SET_GPR_U32(ctx, 31, 0x2345E4u);
    ctx->pc = 0x2345E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2345DCu;
            // 0x2345e0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131590u;
    if (runtime->hasFunction(0x131590u)) {
        auto targetFn = runtime->lookupFunction(0x131590u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2345E4u; }
        if (ctx->pc != 0x2345E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetSpeed__9mgCCameraFff_0x131590(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2345E4u; }
        if (ctx->pc != 0x2345E4u) { return; }
    }
    ctx->pc = 0x2345E4u;
label_2345e4:
    // 0x2345e4: 0x8f8294f4  lw          $v0, -0x6B0C($gp)
    ctx->pc = 0x2345e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939892)));
label_2345e8:
    // 0x2345e8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2345e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2345ec:
    // 0x2345ec: 0xc04c520  jal         func_131480
label_2345f0:
    if (ctx->pc == 0x2345F0u) {
        ctx->pc = 0x2345F0u;
            // 0x2345f0: 0x24450080  addiu       $a1, $v0, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
        ctx->pc = 0x2345F4u;
        goto label_2345f4;
    }
    ctx->pc = 0x2345ECu;
    SET_GPR_U32(ctx, 31, 0x2345F4u);
    ctx->pc = 0x2345F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2345ECu;
            // 0x2345f0: 0x24450080  addiu       $a1, $v0, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131480u;
    if (runtime->hasFunction(0x131480u)) {
        auto targetFn = runtime->lookupFunction(0x131480u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2345F4u; }
        if (ctx->pc != 0x2345F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetNextRef__9mgCCameraFPf_0x131480(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2345F4u; }
        if (ctx->pc != 0x2345F4u) { return; }
    }
    ctx->pc = 0x2345F4u;
label_2345f4:
    // 0x2345f4: 0x8f8294f4  lw          $v0, -0x6B0C($gp)
    ctx->pc = 0x2345f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939892)));
label_2345f8:
    // 0x2345f8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2345f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2345fc:
    // 0x2345fc: 0xc04c50c  jal         func_131430
label_234600:
    if (ctx->pc == 0x234600u) {
        ctx->pc = 0x234600u;
            // 0x234600: 0x24450090  addiu       $a1, $v0, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 144));
        ctx->pc = 0x234604u;
        goto label_234604;
    }
    ctx->pc = 0x2345FCu;
    SET_GPR_U32(ctx, 31, 0x234604u);
    ctx->pc = 0x234600u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2345FCu;
            // 0x234600: 0x24450090  addiu       $a1, $v0, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131430u;
    if (runtime->hasFunction(0x131430u)) {
        auto targetFn = runtime->lookupFunction(0x131430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x234604u; }
        if (ctx->pc != 0x234604u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetNextPos__9mgCCameraFPf_0x131430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x234604u; }
        if (ctx->pc != 0x234604u) { return; }
    }
    ctx->pc = 0x234604u;
label_234604:
    // 0x234604: 0x8e190060  lw          $t9, 0x60($s0)
    ctx->pc = 0x234604u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
label_234608:
    // 0x234608: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x234608u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_23460c:
    // 0x23460c: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x23460cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_234610:
    // 0x234610: 0x320f809  jalr        $t9
label_234614:
    if (ctx->pc == 0x234614u) {
        ctx->pc = 0x234614u;
            // 0x234614: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x234618u;
        goto label_234618;
    }
    ctx->pc = 0x234610u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x234618u);
        ctx->pc = 0x234614u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x234610u;
            // 0x234614: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x234618u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x234618u; }
            if (ctx->pc != 0x234618u) { return; }
        }
        }
    }
    ctx->pc = 0x234618u;
label_234618:
    // 0x234618: 0xc041c7a  jal         func_1071E8
label_23461c:
    if (ctx->pc == 0x23461Cu) {
        ctx->pc = 0x23461Cu;
            // 0x23461c: 0x27a400b0  addiu       $a0, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->pc = 0x234620u;
        goto label_234620;
    }
    ctx->pc = 0x234618u;
    SET_GPR_U32(ctx, 31, 0x234620u);
    ctx->pc = 0x23461Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x234618u;
            // 0x23461c: 0x27a400b0  addiu       $a0, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1071E8u;
    if (runtime->hasFunction(0x1071E8u)) {
        auto targetFn = runtime->lookupFunction(0x1071E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x234620u; }
        if (ctx->pc != 0x234620u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0UnitMatrix_0x1071e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x234620u; }
        if (ctx->pc != 0x234620u) { return; }
    }
    ctx->pc = 0x234620u;
label_234620:
    // 0x234620: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x234620u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_234624:
    // 0x234624: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x234624u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_234628:
    // 0x234628: 0xc041bbc  jal         func_106EF0
label_23462c:
    if (ctx->pc == 0x23462Cu) {
        ctx->pc = 0x23462Cu;
            // 0x23462c: 0x27a60020  addiu       $a2, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x234630u;
        goto label_234630;
    }
    ctx->pc = 0x234628u;
    SET_GPR_U32(ctx, 31, 0x234630u);
    ctx->pc = 0x23462Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x234628u;
            // 0x23462c: 0x27a60020  addiu       $a2, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106EF0u;
    if (runtime->hasFunction(0x106EF0u)) {
        auto targetFn = runtime->lookupFunction(0x106EF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x234630u; }
        if (ctx->pc != 0x234630u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0MulMatrix_0x106ef0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x234630u; }
        if (ctx->pc != 0x234630u) { return; }
    }
    ctx->pc = 0x234630u;
label_234630:
    // 0x234630: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x234630u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_234634:
    // 0x234634: 0xc050e28  jal         func_1438A0
label_234638:
    if (ctx->pc == 0x234638u) {
        ctx->pc = 0x234638u;
            // 0x234638: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x23463Cu;
        goto label_23463c;
    }
    ctx->pc = 0x234634u;
    SET_GPR_U32(ctx, 31, 0x23463Cu);
    ctx->pc = 0x234638u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x234634u;
            // 0x234638: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1438A0u;
    if (runtime->hasFunction(0x1438A0u)) {
        auto targetFn = runtime->lookupFunction(0x1438A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23463Cu; }
        if (ctx->pc != 0x23463Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgSetViewMatrix__FPA4_fPf_0x1438a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23463Cu; }
        if (ctx->pc != 0x23463Cu) { return; }
    }
    ctx->pc = 0x23463Cu;
label_23463c:
    // 0x23463c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x23463cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_234640:
    // 0x234640: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x234640u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_234644:
    // 0x234644: 0x3e00008  jr          $ra
label_234648:
    if (ctx->pc == 0x234648u) {
        ctx->pc = 0x234648u;
            // 0x234648: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->pc = 0x23464Cu;
        goto label_fallthrough_0x234644;
    }
    ctx->pc = 0x234644u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x234648u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x234644u;
            // 0x234648: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x234644:
    ctx->pc = 0x23464Cu;
}
