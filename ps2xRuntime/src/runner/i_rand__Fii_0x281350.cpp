#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: i_rand__Fii
// Address: 0x281350 - 0x281380
void i_rand__Fii_0x281350(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("i_rand__Fii_0x281350");
#endif

    switch (ctx->pc) {
        case 0x28136cu: goto label_28136c;
        case 0x281374u: goto label_281374;
        default: break;
    }

    ctx->pc = 0x281350u;

    // 0x281350: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x281350u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x281354: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x281354u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x281358: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x281358u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28135c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x28135cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x281360: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x281360u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x281364: 0xc0a04c0  jal         func_281300
    ctx->pc = 0x281364u;
    SET_GPR_U32(ctx, 31, 0x28136Cu);
    ctx->pc = 0x281368u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x281364u;
            // 0x281368: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x281300u;
    if (runtime->hasFunction(0x281300u)) {
        auto targetFn = runtime->lookupFunction(0x281300u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28136Cu; }
        if (ctx->pc != 0x28136Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        f_rand__Fff_0x281300(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28136Cu; }
        if (ctx->pc != 0x28136Cu) { return; }
    }
    ctx->pc = 0x28136Cu;
label_28136c:
    // 0x28136c: 0xc0a248c  jal         func_289230
    ctx->pc = 0x28136Cu;
    SET_GPR_U32(ctx, 31, 0x281374u);
    ctx->pc = 0x281370u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28136Cu;
            // 0x281370: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x281374u; }
        if (ctx->pc != 0x281374u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x281374u; }
        if (ctx->pc != 0x281374u) { return; }
    }
    ctx->pc = 0x281374u;
label_281374:
    // 0x281374: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x281374u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x281378: 0x3e00008  jr          $ra
    ctx->pc = 0x281378u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28137Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x281378u;
            // 0x28137c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x281380u;
}
