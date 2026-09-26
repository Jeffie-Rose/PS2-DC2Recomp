#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _ADD_CHARA_ROT__FP12RS_STACKDATAi
// Address: 0x2771c0 - 0x277284
void ps2__ADD_CHARA_ROT__FP12RS_STACKDATAi_0x2771c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__ADD_CHARA_ROT__FP12RS_STACKDATAi_0x2771c0");
#endif

    switch (ctx->pc) {
        case 0x2771c0u: goto label_2771c0;
        case 0x2771c4u: goto label_2771c4;
        case 0x2771c8u: goto label_2771c8;
        case 0x2771ccu: goto label_2771cc;
        case 0x2771d0u: goto label_2771d0;
        case 0x2771d4u: goto label_2771d4;
        case 0x2771d8u: goto label_2771d8;
        case 0x2771dcu: goto label_2771dc;
        case 0x2771e0u: goto label_2771e0;
        case 0x2771e4u: goto label_2771e4;
        case 0x2771e8u: goto label_2771e8;
        case 0x2771ecu: goto label_2771ec;
        case 0x2771f0u: goto label_2771f0;
        case 0x2771f4u: goto label_2771f4;
        case 0x2771f8u: goto label_2771f8;
        case 0x2771fcu: goto label_2771fc;
        case 0x277200u: goto label_277200;
        case 0x277204u: goto label_277204;
        case 0x277208u: goto label_277208;
        case 0x27720cu: goto label_27720c;
        case 0x277210u: goto label_277210;
        case 0x277214u: goto label_277214;
        case 0x277218u: goto label_277218;
        case 0x27721cu: goto label_27721c;
        case 0x277220u: goto label_277220;
        case 0x277224u: goto label_277224;
        case 0x277228u: goto label_277228;
        case 0x27722cu: goto label_27722c;
        case 0x277230u: goto label_277230;
        case 0x277234u: goto label_277234;
        case 0x277238u: goto label_277238;
        case 0x27723cu: goto label_27723c;
        case 0x277240u: goto label_277240;
        case 0x277244u: goto label_277244;
        case 0x277248u: goto label_277248;
        case 0x27724cu: goto label_27724c;
        case 0x277250u: goto label_277250;
        case 0x277254u: goto label_277254;
        case 0x277258u: goto label_277258;
        case 0x27725cu: goto label_27725c;
        case 0x277260u: goto label_277260;
        case 0x277264u: goto label_277264;
        case 0x277268u: goto label_277268;
        case 0x27726cu: goto label_27726c;
        case 0x277270u: goto label_277270;
        case 0x277274u: goto label_277274;
        case 0x277278u: goto label_277278;
        case 0x27727cu: goto label_27727c;
        case 0x277280u: goto label_277280;
        default: break;
    }

    ctx->pc = 0x2771c0u;

label_2771c0:
    // 0x2771c0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2771c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_2771c4:
    // 0x2771c4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2771c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_2771c8:
    // 0x2771c8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2771c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2771cc:
    // 0x2771cc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2771ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2771d0:
    // 0x2771d0: 0xc097e18  jal         func_25F860
label_2771d4:
    if (ctx->pc == 0x2771D4u) {
        ctx->pc = 0x2771D4u;
            // 0x2771d4: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->pc = 0x2771D8u;
        goto label_2771d8;
    }
    ctx->pc = 0x2771D0u;
    SET_GPR_U32(ctx, 31, 0x2771D8u);
    ctx->pc = 0x2771D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2771D0u;
            // 0x2771d4: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2771D8u; }
        if (ctx->pc != 0x2771D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2771D8u; }
        if (ctx->pc != 0x2771D8u) { return; }
    }
    ctx->pc = 0x2771D8u;
label_2771d8:
    // 0x2771d8: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x2771d8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2771dc:
    // 0x2771dc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2771dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2771e0:
    // 0x2771e0: 0xc097e34  jal         func_25F8D0
label_2771e4:
    if (ctx->pc == 0x2771E4u) {
        ctx->pc = 0x2771E4u;
            // 0x2771e4: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x2771E8u;
        goto label_2771e8;
    }
    ctx->pc = 0x2771E0u;
    SET_GPR_U32(ctx, 31, 0x2771E8u);
    ctx->pc = 0x2771E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2771E0u;
            // 0x2771e4: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F8D0u;
    if (runtime->hasFunction(0x25F8D0u)) {
        auto targetFn = runtime->lookupFunction(0x25F8D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2771E8u; }
        if (ctx->pc != 0x2771E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackVector__FPfP12RS_STACKDATA_0x25f8d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2771E8u; }
        if (ctx->pc != 0x2771E8u) { return; }
    }
    ctx->pc = 0x2771E8u;
label_2771e8:
    // 0x2771e8: 0xc0956d4  jal         func_255B50
label_2771ec:
    if (ctx->pc == 0x2771ECu) {
        ctx->pc = 0x2771ECu;
            // 0x2771ec: 0xe0202d  daddu       $a0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2771F0u;
        goto label_2771f0;
    }
    ctx->pc = 0x2771E8u;
    SET_GPR_U32(ctx, 31, 0x2771F0u);
    ctx->pc = 0x2771ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2771E8u;
            // 0x2771ec: 0xe0202d  daddu       $a0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x255B50u;
    if (runtime->hasFunction(0x255B50u)) {
        auto targetFn = runtime->lookupFunction(0x255B50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2771F0u; }
        if (ctx->pc != 0x2771F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCharacter__Fi_0x255b50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2771F0u; }
        if (ctx->pc != 0x2771F0u) { return; }
    }
    ctx->pc = 0x2771F0u;
label_2771f0:
    // 0x2771f0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_2771f4:
    if (ctx->pc == 0x2771F4u) {
        ctx->pc = 0x2771F4u;
            // 0x2771f4: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2771F8u;
        goto label_2771f8;
    }
    ctx->pc = 0x2771F0u;
    {
        const bool branch_taken_0x2771f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2771F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2771F0u;
            // 0x2771f4: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2771f0) {
            ctx->pc = 0x277200u;
            goto label_277200;
        }
    }
    ctx->pc = 0x2771F8u;
label_2771f8:
    // 0x2771f8: 0x1000001d  b           . + 4 + (0x1D << 2)
label_2771fc:
    if (ctx->pc == 0x2771FCu) {
        ctx->pc = 0x2771FCu;
            // 0x2771fc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x277200u;
        goto label_277200;
    }
    ctx->pc = 0x2771F8u;
    {
        const bool branch_taken_0x2771f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2771FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2771F8u;
            // 0x2771fc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2771f8) {
            ctx->pc = 0x277270u;
            goto label_277270;
        }
    }
    ctx->pc = 0x277200u;
label_277200:
    // 0x277200: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x277200u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_277204:
    // 0x277204: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x277204u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_277208:
    // 0x277208: 0x8f390024  lw          $t9, 0x24($t9)
    ctx->pc = 0x277208u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 36)));
label_27720c:
    // 0x27720c: 0x320f809  jalr        $t9
label_277210:
    if (ctx->pc == 0x277210u) {
        ctx->pc = 0x277210u;
            // 0x277210: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x277214u;
        goto label_277214;
    }
    ctx->pc = 0x27720Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x277214u);
        ctx->pc = 0x277210u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27720Cu;
            // 0x277210: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x277214u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x277214u; }
            if (ctx->pc != 0x277214u) { return; }
        }
        }
    }
    ctx->pc = 0x277214u;
label_277214:
    // 0x277214: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x277214u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_277218:
    // 0x277218: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x277218u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_27721c:
    // 0x27721c: 0xc041c38  jal         func_1070E0
label_277220:
    if (ctx->pc == 0x277220u) {
        ctx->pc = 0x277220u;
            // 0x277220: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x277224u;
        goto label_277224;
    }
    ctx->pc = 0x27721Cu;
    SET_GPR_U32(ctx, 31, 0x277224u);
    ctx->pc = 0x277220u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27721Cu;
            // 0x277220: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1070E0u;
    if (runtime->hasFunction(0x1070E0u)) {
        auto targetFn = runtime->lookupFunction(0x1070E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x277224u; }
        if (ctx->pc != 0x277224u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0AddVector_0x1070e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x277224u; }
        if (ctx->pc != 0x277224u) { return; }
    }
    ctx->pc = 0x277224u;
label_277224:
    // 0x277224: 0xc04c374  jal         func_130DD0
label_277228:
    if (ctx->pc == 0x277228u) {
        ctx->pc = 0x277228u;
            // 0x277228: 0xc7ac0040  lwc1        $f12, 0x40($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->pc = 0x27722Cu;
        goto label_27722c;
    }
    ctx->pc = 0x277224u;
    SET_GPR_U32(ctx, 31, 0x27722Cu);
    ctx->pc = 0x277228u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x277224u;
            // 0x277228: 0xc7ac0040  lwc1        $f12, 0x40($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x130DD0u;
    if (runtime->hasFunction(0x130DD0u)) {
        auto targetFn = runtime->lookupFunction(0x130DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27722Cu; }
        if (ctx->pc != 0x27722Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgAngleLimit__Ff_0x130dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27722Cu; }
        if (ctx->pc != 0x27722Cu) { return; }
    }
    ctx->pc = 0x27722Cu;
label_27722c:
    // 0x27722c: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x27722cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_277230:
    // 0x277230: 0x27b10044  addiu       $s1, $sp, 0x44
    ctx->pc = 0x277230u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 68));
label_277234:
    // 0x277234: 0xc04c374  jal         func_130DD0
label_277238:
    if (ctx->pc == 0x277238u) {
        ctx->pc = 0x277238u;
            // 0x277238: 0xc62c0000  lwc1        $f12, 0x0($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->pc = 0x27723Cu;
        goto label_27723c;
    }
    ctx->pc = 0x277234u;
    SET_GPR_U32(ctx, 31, 0x27723Cu);
    ctx->pc = 0x277238u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x277234u;
            // 0x277238: 0xc62c0000  lwc1        $f12, 0x0($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x130DD0u;
    if (runtime->hasFunction(0x130DD0u)) {
        auto targetFn = runtime->lookupFunction(0x130DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27723Cu; }
        if (ctx->pc != 0x27723Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgAngleLimit__Ff_0x130dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27723Cu; }
        if (ctx->pc != 0x27723Cu) { return; }
    }
    ctx->pc = 0x27723Cu;
label_27723c:
    // 0x27723c: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x27723cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
label_277240:
    // 0x277240: 0x27b10048  addiu       $s1, $sp, 0x48
    ctx->pc = 0x277240u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
label_277244:
    // 0x277244: 0xc04c374  jal         func_130DD0
label_277248:
    if (ctx->pc == 0x277248u) {
        ctx->pc = 0x277248u;
            // 0x277248: 0xc62c0000  lwc1        $f12, 0x0($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->pc = 0x27724Cu;
        goto label_27724c;
    }
    ctx->pc = 0x277244u;
    SET_GPR_U32(ctx, 31, 0x27724Cu);
    ctx->pc = 0x277248u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x277244u;
            // 0x277248: 0xc62c0000  lwc1        $f12, 0x0($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x130DD0u;
    if (runtime->hasFunction(0x130DD0u)) {
        auto targetFn = runtime->lookupFunction(0x130DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27724Cu; }
        if (ctx->pc != 0x27724Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgAngleLimit__Ff_0x130dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27724Cu; }
        if (ctx->pc != 0x27724Cu) { return; }
    }
    ctx->pc = 0x27724Cu;
label_27724c:
    // 0x27724c: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x27724cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
label_277250:
    // 0x277250: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x277250u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_277254:
    // 0x277254: 0xafa2004c  sw          $v0, 0x4C($sp)
    ctx->pc = 0x277254u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 2));
label_277258:
    // 0x277258: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x277258u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_27725c:
    // 0x27725c: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x27725cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_277260:
    // 0x277260: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x277260u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_277264:
    // 0x277264: 0x320f809  jalr        $t9
label_277268:
    if (ctx->pc == 0x277268u) {
        ctx->pc = 0x277268u;
            // 0x277268: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x27726Cu;
        goto label_27726c;
    }
    ctx->pc = 0x277264u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x27726Cu);
        ctx->pc = 0x277268u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x277264u;
            // 0x277268: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x27726Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x27726Cu; }
            if (ctx->pc != 0x27726Cu) { return; }
        }
        }
    }
    ctx->pc = 0x27726Cu;
label_27726c:
    // 0x27726c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x27726cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_277270:
    // 0x277270: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x277270u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_277274:
    // 0x277274: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x277274u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_277278:
    // 0x277278: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x277278u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_27727c:
    // 0x27727c: 0x3e00008  jr          $ra
label_277280:
    if (ctx->pc == 0x277280u) {
        ctx->pc = 0x277280u;
            // 0x277280: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x277284u;
        goto label_fallthrough_0x27727c;
    }
    ctx->pc = 0x27727Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x277280u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27727Cu;
            // 0x277280: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x27727c:
    ctx->pc = 0x277284u;
}
