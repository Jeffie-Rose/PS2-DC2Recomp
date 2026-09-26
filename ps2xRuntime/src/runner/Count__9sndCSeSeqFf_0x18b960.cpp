#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Count__9sndCSeSeqFf
// Address: 0x18b960 - 0x18b9cc
void Count__9sndCSeSeqFf_0x18b960(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Count__9sndCSeSeqFf_0x18b960");
#endif

    switch (ctx->pc) {
        case 0x18b9a4u: goto label_18b9a4;
        default: break;
    }

    ctx->pc = 0x18b960u;

    // 0x18b960: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x18b960u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x18b964: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x18b964u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x18b968: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x18b968u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x18b96c: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x18b96cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x18b970: 0x10600012  beqz        $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x18B970u;
    {
        const bool branch_taken_0x18b970 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x18B974u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18B970u;
            // 0x18b974: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18b970) {
            ctx->pc = 0x18B9BCu;
            goto label_18b9bc;
        }
    }
    ctx->pc = 0x18B978u;
    // 0x18b978: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x18b978u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18b97c: 0x3c024270  lui         $v0, 0x4270
    ctx->pc = 0x18b97cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17008 << 16));
    // 0x18b980: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18b980u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18b984: 0x0  nop
    ctx->pc = 0x18b984u;
    // NOP
    // 0x18b988: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x18b988u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x18b98c: 0x460c0842  mul.s       $f1, $f1, $f12
    ctx->pc = 0x18b98cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[12]);
    // 0x18b990: 0x46000b03  div.s       $f12, $f1, $f0
    ctx->pc = 0x18b990u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x18b994: 0x0  nop
    ctx->pc = 0x18b994u;
    // NOP
    // 0x18b998: 0x0  nop
    ctx->pc = 0x18b998u;
    // NOP
    // 0x18b99c: 0xc0a248c  jal         func_289230
    ctx->pc = 0x18B99Cu;
    SET_GPR_U32(ctx, 31, 0x18B9A4u);
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18B9A4u; }
        if (ctx->pc != 0x18B9A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18B9A4u; }
        if (ctx->pc != 0x18B9A4u) { return; }
    }
    ctx->pc = 0x18B9A4u;
label_18b9a4:
    // 0x18b9a4: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x18b9a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x18b9a8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x18b9a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x18b9ac: 0xae030010  sw          $v1, 0x10($s0)
    ctx->pc = 0x18b9acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 3));
    // 0x18b9b0: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x18b9b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x18b9b4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x18b9b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x18b9b8: 0xae030014  sw          $v1, 0x14($s0)
    ctx->pc = 0x18b9b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 3));
label_18b9bc:
    // 0x18b9bc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x18b9bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18b9c0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x18b9c0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18b9c4: 0x3e00008  jr          $ra
    ctx->pc = 0x18B9C4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18B9C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18B9C4u;
            // 0x18b9c8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x18B9CCu;
}
