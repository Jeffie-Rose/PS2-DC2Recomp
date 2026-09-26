#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: fptodp
// Address: 0x2893c0 - 0x289400
void fptodp_0x2893c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("fptodp_0x2893c0");
#endif

    switch (ctx->pc) {
        case 0x2893d8u: goto label_2893d8;
        case 0x2893f4u: goto label_2893f4;
        default: break;
    }

    ctx->pc = 0x2893c0u;

    // 0x2893c0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2893c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2893c4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2893c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2893c8: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x2893c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2893cc: 0xe7ac0010  swc1        $f12, 0x10($sp)
    ctx->pc = 0x2893ccu;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x2893d0: 0xc0a224c  jal         func_288930
    ctx->pc = 0x2893D0u;
    SET_GPR_U32(ctx, 31, 0x2893D8u);
    ctx->pc = 0x2893D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2893D0u;
            // 0x2893d4: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x288930u;
    if (runtime->hasFunction(0x288930u)) {
        auto targetFn = runtime->lookupFunction(0x288930u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2893D8u; }
        if (ctx->pc != 0x2893D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___unpack_f_0x288930(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2893D8u; }
        if (ctx->pc != 0x2893D8u) { return; }
    }
    ctx->pc = 0x2893D8u;
label_2893d8:
    // 0x2893d8: 0x8fa7000c  lw          $a3, 0xC($sp)
    ctx->pc = 0x2893d8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x2893dc: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x2893dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2893e0: 0x7383c  dsll32      $a3, $a3, 0
    ctx->pc = 0x2893e0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << (32 + 0));
    // 0x2893e4: 0x8fa50004  lw          $a1, 0x4($sp)
    ctx->pc = 0x2893e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x2893e8: 0x8fa60008  lw          $a2, 0x8($sp)
    ctx->pc = 0x2893e8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2893ec: 0xc0a21e6  jal         func_288798
    ctx->pc = 0x2893ECu;
    SET_GPR_U32(ctx, 31, 0x2893F4u);
    ctx->pc = 0x2893F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2893ECu;
            // 0x2893f0: 0x738ba  dsrl        $a3, $a3, 2 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) >> 2);
        ctx->in_delay_slot = false;
    ctx->pc = 0x288798u;
    if (runtime->hasFunction(0x288798u)) {
        auto targetFn = runtime->lookupFunction(0x288798u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2893F4u; }
        if (ctx->pc != 0x2893F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___make_dp_0x288798(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2893F4u; }
        if (ctx->pc != 0x2893F4u) { return; }
    }
    ctx->pc = 0x2893F4u;
label_2893f4:
    // 0x2893f4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2893f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2893f8: 0x3e00008  jr          $ra
    ctx->pc = 0x2893F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2893FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2893F8u;
            // 0x2893fc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x289400u;
}
