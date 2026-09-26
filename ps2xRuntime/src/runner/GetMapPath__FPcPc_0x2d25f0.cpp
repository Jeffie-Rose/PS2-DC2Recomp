#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetMapPath__FPcPc
// Address: 0x2d25f0 - 0x2d26d4
void GetMapPath__FPcPc_0x2d25f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetMapPath__FPcPc_0x2d25f0");
#endif

    switch (ctx->pc) {
        case 0x2d2618u: goto label_2d2618;
        case 0x2d2630u: goto label_2d2630;
        case 0x2d2640u: goto label_2d2640;
        case 0x2d2650u: goto label_2d2650;
        case 0x2d266cu: goto label_2d266c;
        case 0x2d2680u: goto label_2d2680;
        case 0x2d269cu: goto label_2d269c;
        case 0x2d26acu: goto label_2d26ac;
        case 0x2d26b8u: goto label_2d26b8;
        default: break;
    }

    ctx->pc = 0x2d25f0u;

    // 0x2d25f0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2d25f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2d25f4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2d25f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2d25f8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2d25f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2d25fc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2d25fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2d2600: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2d2600u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d2604: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2d2604u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d2608: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2d2608u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2d260c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2d260cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d2610: 0xc04a422  jal         func_129088
    ctx->pc = 0x2D2610u;
    SET_GPR_U32(ctx, 31, 0x2D2618u);
    ctx->pc = 0x2D2614u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D2610u;
            // 0x2d2614: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129088u;
    if (runtime->hasFunction(0x129088u)) {
        auto targetFn = runtime->lookupFunction(0x129088u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D2618u; }
        if (ctx->pc != 0x2D2618u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strlen_0x129088(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D2618u; }
        if (ctx->pc != 0x2D2618u) { return; }
    }
    ctx->pc = 0x2D2618u;
label_2d2618:
    // 0x2d2618: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2d2618u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x2d261c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2d261cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d2620: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2d2620u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d2624: 0x24a50518  addiu       $a1, $a1, 0x518
    ctx->pc = 0x2d2624u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1304));
    // 0x2d2628: 0xc04a3dc  jal         func_128F70
    ctx->pc = 0x2D2628u;
    SET_GPR_U32(ctx, 31, 0x2D2630u);
    ctx->pc = 0x2D262Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D2628u;
            // 0x2d262c: 0x240882d  daddu       $s1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128F70u;
    if (runtime->hasFunction(0x128F70u)) {
        auto targetFn = runtime->lookupFunction(0x128F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D2630u; }
        if (ctx->pc != 0x2D2630u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x128f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D2630u; }
        if (ctx->pc != 0x2D2630u) { return; }
    }
    ctx->pc = 0x2D2630u;
label_2d2630:
    // 0x2d2630: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2d2630u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d2634: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2d2634u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d2638: 0xc04a470  jal         func_1291C0
    ctx->pc = 0x2D2638u;
    SET_GPR_U32(ctx, 31, 0x2D2640u);
    ctx->pc = 0x2D263Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D2638u;
            // 0x2d263c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1291C0u;
    if (runtime->hasFunction(0x1291C0u)) {
        auto targetFn = runtime->lookupFunction(0x1291C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D2640u; }
        if (ctx->pc != 0x2D2640u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strncat_0x1291c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D2640u; }
        if (ctx->pc != 0x2D2640u) { return; }
    }
    ctx->pc = 0x2D2640u;
label_2d2640:
    // 0x2d2640: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2d2640u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x2d2644: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2d2644u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d2648: 0xc04a2da  jal         func_128B68
    ctx->pc = 0x2D2648u;
    SET_GPR_U32(ctx, 31, 0x2D2650u);
    ctx->pc = 0x2D264Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D2648u;
            // 0x2d264c: 0x24a50520  addiu       $a1, $a1, 0x520 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1312));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128B68u;
    if (runtime->hasFunction(0x128B68u)) {
        auto targetFn = runtime->lookupFunction(0x128B68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D2650u; }
        if (ctx->pc != 0x2D2650u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcat_0x128b68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D2650u; }
        if (ctx->pc != 0x2D2650u) { return; }
    }
    ctx->pc = 0x2D2650u;
label_2d2650:
    // 0x2d2650: 0x2a020003  slti        $v0, $s0, 0x3
    ctx->pc = 0x2d2650u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x2d2654: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2D2654u;
    {
        const bool branch_taken_0x2d2654 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D2658u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D2654u;
            // 0x2d2658: 0x2a020006  slti        $v0, $s0, 0x6 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)6) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d2654) {
            ctx->pc = 0x2D2684u;
            goto label_2d2684;
        }
    }
    ctx->pc = 0x2D265Cu;
    // 0x2d265c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2d265cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d2660: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2d2660u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d2664: 0xc04a470  jal         func_1291C0
    ctx->pc = 0x2D2664u;
    SET_GPR_U32(ctx, 31, 0x2D266Cu);
    ctx->pc = 0x2D2668u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D2664u;
            // 0x2d2668: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1291C0u;
    if (runtime->hasFunction(0x1291C0u)) {
        auto targetFn = runtime->lookupFunction(0x1291C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D266Cu; }
        if (ctx->pc != 0x2D266Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strncat_0x1291c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D266Cu; }
        if (ctx->pc != 0x2D266Cu) { return; }
    }
    ctx->pc = 0x2D266Cu;
label_2d266c:
    // 0x2d266c: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2d266cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x2d2670: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2d2670u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d2674: 0x24a50520  addiu       $a1, $a1, 0x520
    ctx->pc = 0x2d2674u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1312));
    // 0x2d2678: 0xc04a2da  jal         func_128B68
    ctx->pc = 0x2D2678u;
    SET_GPR_U32(ctx, 31, 0x2D2680u);
    ctx->pc = 0x2D267Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D2678u;
            // 0x2d267c: 0x26510003  addiu       $s1, $s2, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128B68u;
    if (runtime->hasFunction(0x128B68u)) {
        auto targetFn = runtime->lookupFunction(0x128B68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D2680u; }
        if (ctx->pc != 0x2D2680u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcat_0x128b68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D2680u; }
        if (ctx->pc != 0x2D2680u) { return; }
    }
    ctx->pc = 0x2D2680u;
label_2d2680:
    // 0x2d2680: 0x2a020006  slti        $v0, $s0, 0x6
    ctx->pc = 0x2d2680u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)6) ? 1 : 0);
label_2d2684:
    // 0x2d2684: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2D2684u;
    {
        const bool branch_taken_0x2d2684 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D2688u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D2684u;
            // 0x2d2688: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d2684) {
            ctx->pc = 0x2D26B0u;
            goto label_2d26b0;
        }
    }
    ctx->pc = 0x2D268Cu;
    // 0x2d268c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2d268cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d2690: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2d2690u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d2694: 0xc04a470  jal         func_1291C0
    ctx->pc = 0x2D2694u;
    SET_GPR_U32(ctx, 31, 0x2D269Cu);
    ctx->pc = 0x2D2698u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D2694u;
            // 0x2d2698: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1291C0u;
    if (runtime->hasFunction(0x1291C0u)) {
        auto targetFn = runtime->lookupFunction(0x1291C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D269Cu; }
        if (ctx->pc != 0x2D269Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strncat_0x1291c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D269Cu; }
        if (ctx->pc != 0x2D269Cu) { return; }
    }
    ctx->pc = 0x2D269Cu;
label_2d269c:
    // 0x2d269c: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2d269cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x2d26a0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2d26a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d26a4: 0xc04a2da  jal         func_128B68
    ctx->pc = 0x2D26A4u;
    SET_GPR_U32(ctx, 31, 0x2D26ACu);
    ctx->pc = 0x2D26A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D26A4u;
            // 0x2d26a8: 0x24a50520  addiu       $a1, $a1, 0x520 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1312));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128B68u;
    if (runtime->hasFunction(0x128B68u)) {
        auto targetFn = runtime->lookupFunction(0x128B68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D26ACu; }
        if (ctx->pc != 0x2D26ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcat_0x128b68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D26ACu; }
        if (ctx->pc != 0x2D26ACu) { return; }
    }
    ctx->pc = 0x2D26ACu;
label_2d26ac:
    // 0x2d26ac: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2d26acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2d26b0:
    // 0x2d26b0: 0xc04a2da  jal         func_128B68
    ctx->pc = 0x2D26B0u;
    SET_GPR_U32(ctx, 31, 0x2D26B8u);
    ctx->pc = 0x2D26B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D26B0u;
            // 0x2d26b4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128B68u;
    if (runtime->hasFunction(0x128B68u)) {
        auto targetFn = runtime->lookupFunction(0x128B68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D26B8u; }
        if (ctx->pc != 0x2D26B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcat_0x128b68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D26B8u; }
        if (ctx->pc != 0x2D26B8u) { return; }
    }
    ctx->pc = 0x2D26B8u;
label_2d26b8:
    // 0x2d26b8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2d26b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2d26bc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2d26bcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2d26c0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2d26c0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d26c4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2d26c4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d26c8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2d26c8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d26cc: 0x3e00008  jr          $ra
    ctx->pc = 0x2D26CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D26D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D26CCu;
            // 0x2d26d0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2D26D4u;
}
