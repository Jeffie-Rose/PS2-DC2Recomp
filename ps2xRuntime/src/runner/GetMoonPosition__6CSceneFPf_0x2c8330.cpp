#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetMoonPosition__6CSceneFPf
// Address: 0x2c8330 - 0x2c836c
void GetMoonPosition__6CSceneFPf_0x2c8330(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetMoonPosition__6CSceneFPf_0x2c8330");
#endif

    switch (ctx->pc) {
        case 0x2c8344u: goto label_2c8344;
        default: break;
    }

    ctx->pc = 0x2c8330u;

    // 0x2c8330: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2c8330u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2c8334: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2c8334u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2c8338: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2c8338u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2c833c: 0xc0b2098  jal         func_2C8260
    ctx->pc = 0x2C833Cu;
    SET_GPR_U32(ctx, 31, 0x2C8344u);
    ctx->pc = 0x2C8340u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C833Cu;
            // 0x2c8340: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C8260u;
    if (runtime->hasFunction(0x2C8260u)) {
        auto targetFn = runtime->lookupFunction(0x2C8260u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C8344u; }
        if (ctx->pc != 0x2C8344u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetSunPosition__6CSceneFPf_0x2c8260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C8344u; }
        if (ctx->pc != 0x2C8344u) { return; }
    }
    ctx->pc = 0x2C8344u;
label_2c8344:
    // 0x2c8344: 0xc6000004  lwc1        $f0, 0x4($s0)
    ctx->pc = 0x2c8344u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c8348: 0x3c03bf80  lui         $v1, 0xBF80
    ctx->pc = 0x2c8348u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49024 << 16));
    // 0x2c834c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2c834cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2c8350: 0x0  nop
    ctx->pc = 0x2c8350u;
    // NOP
    // 0x2c8354: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2c8354u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2c8358: 0xe6000004  swc1        $f0, 0x4($s0)
    ctx->pc = 0x2c8358u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x2c835c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2c835cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c8360: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2c8360u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c8364: 0x3e00008  jr          $ra
    ctx->pc = 0x2C8364u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C8368u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C8364u;
            // 0x2c8368: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2C836Cu;
}
