#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: mapFUNC_NAME__FP9SPI_STACKi
// Address: 0x163680 - 0x163710
void mapFUNC_NAME__FP9SPI_STACKi_0x163680(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("mapFUNC_NAME__FP9SPI_STACKi_0x163680");
#endif

    switch (ctx->pc) {
        case 0x1636acu: goto label_1636ac;
        case 0x1636c8u: goto label_1636c8;
        case 0x1636d0u: goto label_1636d0;
        case 0x1636dcu: goto label_1636dc;
        case 0x1636f0u: goto label_1636f0;
        default: break;
    }

    ctx->pc = 0x163680u;

    // 0x163680: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x163680u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x163684: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x163684u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x163688: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x163688u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x16368c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x16368cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x163690: 0x8f828940  lw          $v0, -0x76C0($gp)
    ctx->pc = 0x163690u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936896)));
    // 0x163694: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x163694u;
    {
        const bool branch_taken_0x163694 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x163698u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x163694u;
            // 0x163698: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163694) {
            ctx->pc = 0x1636A4u;
            goto label_1636a4;
        }
    }
    ctx->pc = 0x16369Cu;
    // 0x16369c: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x16369Cu;
    {
        const bool branch_taken_0x16369c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1636A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16369Cu;
            // 0x1636a0: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16369c) {
            ctx->pc = 0x163700u;
            goto label_163700;
        }
    }
    ctx->pc = 0x1636A4u;
label_1636a4:
    // 0x1636a4: 0xc05191c  jal         func_146470
    ctx->pc = 0x1636A4u;
    SET_GPR_U32(ctx, 31, 0x1636ACu);
    ctx->pc = 0x146470u;
    if (runtime->hasFunction(0x146470u)) {
        auto targetFn = runtime->lookupFunction(0x146470u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1636ACu; }
        if (ctx->pc != 0x1636ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackString__FP9SPI_STACK_0x146470(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1636ACu; }
        if (ctx->pc != 0x1636ACu) { return; }
    }
    ctx->pc = 0x1636ACu;
label_1636ac:
    // 0x1636ac: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1636acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1636b0: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1636B0u;
    {
        const bool branch_taken_0x1636b0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1636B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1636B0u;
            // 0x1636b4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1636b0) {
            ctx->pc = 0x1636C0u;
            goto label_1636c0;
        }
    }
    ctx->pc = 0x1636B8u;
    // 0x1636b8: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x1636B8u;
    {
        const bool branch_taken_0x1636b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1636BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1636B8u;
            // 0x1636bc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1636b8) {
            ctx->pc = 0x1636FCu;
            goto label_1636fc;
        }
    }
    ctx->pc = 0x1636C0u;
label_1636c0:
    // 0x1636c0: 0xc04a422  jal         func_129088
    ctx->pc = 0x1636C0u;
    SET_GPR_U32(ctx, 31, 0x1636C8u);
    ctx->pc = 0x129088u;
    if (runtime->hasFunction(0x129088u)) {
        auto targetFn = runtime->lookupFunction(0x129088u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1636C8u; }
        if (ctx->pc != 0x1636C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strlen_0x129088(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1636C8u; }
        if (ctx->pc != 0x1636C8u) { return; }
    }
    ctx->pc = 0x1636C8u;
label_1636c8:
    // 0x1636c8: 0xc05878c  jal         func_161E30
    ctx->pc = 0x1636C8u;
    SET_GPR_U32(ctx, 31, 0x1636D0u);
    ctx->pc = 0x1636CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1636C8u;
            // 0x1636cc: 0x24440001  addiu       $a0, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x161E30u;
    if (runtime->hasFunction(0x161E30u)) {
        auto targetFn = runtime->lookupFunction(0x161E30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1636D0u; }
        if (ctx->pc != 0x1636D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        algn16_size__FUi_0x161e30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1636D0u; }
        if (ctx->pc != 0x1636D0u) { return; }
    }
    ctx->pc = 0x1636D0u;
label_1636d0:
    // 0x1636d0: 0x8f848920  lw          $a0, -0x76E0($gp)
    ctx->pc = 0x1636d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936864)));
    // 0x1636d4: 0xc04e748  jal         func_139D20
    ctx->pc = 0x1636D4u;
    SET_GPR_U32(ctx, 31, 0x1636DCu);
    ctx->pc = 0x1636D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1636D4u;
            // 0x1636d8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1636DCu; }
        if (ctx->pc != 0x1636DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1636DCu; }
        if (ctx->pc != 0x1636DCu) { return; }
    }
    ctx->pc = 0x1636DCu;
label_1636dc:
    // 0x1636dc: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1636dcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1636e0: 0x12200003  beqz        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1636E0u;
    {
        const bool branch_taken_0x1636e0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1636E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1636E0u;
            // 0x1636e4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1636e0) {
            ctx->pc = 0x1636F0u;
            goto label_1636f0;
        }
    }
    ctx->pc = 0x1636E8u;
    // 0x1636e8: 0xc04a3dc  jal         func_128F70
    ctx->pc = 0x1636E8u;
    SET_GPR_U32(ctx, 31, 0x1636F0u);
    ctx->pc = 0x1636ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1636E8u;
            // 0x1636ec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128F70u;
    if (runtime->hasFunction(0x128F70u)) {
        auto targetFn = runtime->lookupFunction(0x128F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1636F0u; }
        if (ctx->pc != 0x1636F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x128f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1636F0u; }
        if (ctx->pc != 0x1636F0u) { return; }
    }
    ctx->pc = 0x1636F0u;
label_1636f0:
    // 0x1636f0: 0x8f838940  lw          $v1, -0x76C0($gp)
    ctx->pc = 0x1636f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936896)));
    // 0x1636f4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1636f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1636f8: 0xac710000  sw          $s1, 0x0($v1)
    ctx->pc = 0x1636f8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 17));
label_1636fc:
    // 0x1636fc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1636fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_163700:
    // 0x163700: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x163700u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x163704: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x163704u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x163708: 0x3e00008  jr          $ra
    ctx->pc = 0x163708u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16370Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x163708u;
            // 0x16370c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x163710u;
}
