#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: dptofp
// Address: 0x2887c8 - 0x28881c
void dptofp_0x2887c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("dptofp_0x2887c8");
#endif

    switch (ctx->pc) {
        case 0x2887e0u: goto label_2887e0;
        case 0x288810u: goto label_288810;
        default: break;
    }

    ctx->pc = 0x2887c8u;

    // 0x2887c8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2887c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2887cc: 0xffa40020  sd          $a0, 0x20($sp)
    ctx->pc = 0x2887ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 4));
    // 0x2887d0: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2887d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2887d4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2887d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2887d8: 0xc0a1f16  jal         func_287C58
    ctx->pc = 0x2887D8u;
    SET_GPR_U32(ctx, 31, 0x2887E0u);
    ctx->pc = 0x2887DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2887D8u;
            // 0x2887dc: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x287C58u;
    if (runtime->hasFunction(0x287C58u)) {
        auto targetFn = runtime->lookupFunction(0x287C58u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2887E0u; }
        if (ctx->pc != 0x2887E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___unpack_d_0x287c58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2887E0u; }
        if (ctx->pc != 0x2887E0u) { return; }
    }
    ctx->pc = 0x2887E0u;
label_2887e0:
    // 0x2887e0: 0xdfa20010  ld          $v0, 0x10($sp)
    ctx->pc = 0x2887e0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2887e4: 0x3c033fff  lui         $v1, 0x3FFF
    ctx->pc = 0x2887e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16383 << 16));
    // 0x2887e8: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x2887e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x2887ec: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x2887ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2887f0: 0x240b8  dsll        $t0, $v0, 2
    ctx->pc = 0x2887f0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) << 2);
    // 0x2887f4: 0x8403f  dsra32      $t0, $t0, 0
    ctx->pc = 0x2887f4u;
    SET_GPR_S64(ctx, 8, GPR_S64(ctx, 8) >> (32 + 0));
    // 0x2887f8: 0x8fa50004  lw          $a1, 0x4($sp)
    ctx->pc = 0x2887f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x2887fc: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2887fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x288800: 0x35070001  ori         $a3, $t0, 0x1
    ctx->pc = 0x288800u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)1);
    // 0x288804: 0x8fa60008  lw          $a2, 0x8($sp)
    ctx->pc = 0x288804u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x288808: 0xc0a24e4  jal         func_289390
    ctx->pc = 0x288808u;
    SET_GPR_U32(ctx, 31, 0x288810u);
    ctx->pc = 0x28880Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x288808u;
            // 0x28880c: 0x102380a  movz        $a3, $t0, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_U64(ctx, 7, GPR_U64(ctx, 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x289390u;
    if (runtime->hasFunction(0x289390u)) {
        auto targetFn = runtime->lookupFunction(0x289390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x288810u; }
        if (ctx->pc != 0x288810u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___make_fp_0x289390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x288810u; }
        if (ctx->pc != 0x288810u) { return; }
    }
    ctx->pc = 0x288810u;
label_288810:
    // 0x288810: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x288810u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x288814: 0x3e00008  jr          $ra
    ctx->pc = 0x288814u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x288818u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x288814u;
            // 0x288818: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x28881Cu;
}
