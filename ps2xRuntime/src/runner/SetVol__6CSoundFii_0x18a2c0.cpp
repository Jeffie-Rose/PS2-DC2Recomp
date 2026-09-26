#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SetVol__6CSoundFii
// Address: 0x18a2c0 - 0x18a314
void SetVol__6CSoundFii_0x18a2c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetVol__6CSoundFii_0x18a2c0");
#endif

    switch (ctx->pc) {
        case 0x18a2f4u: goto label_18a2f4;
        case 0x18a304u: goto label_18a304;
        default: break;
    }

    ctx->pc = 0x18a2c0u;

    // 0x18a2c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x18a2c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x18a2c4: 0x24020100  addiu       $v0, $zero, 0x100
    ctx->pc = 0x18a2c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x18a2c8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x18a2c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x18a2cc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x18a2ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x18a2d0: 0x10c20009  beq         $a2, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x18A2D0u;
    {
        const bool branch_taken_0x18a2d0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x18A2D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18A2D0u;
            // 0x18a2d4: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18a2d0) {
            ctx->pc = 0x18A2F8u;
            goto label_18a2f8;
        }
    }
    ctx->pc = 0x18A2D8u;
    // 0x18a2d8: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x18a2d8u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18a2dc: 0x3c024001  lui         $v0, 0x4001
    ctx->pc = 0x18a2dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16385 << 16));
    // 0x18a2e0: 0x34420204  ori         $v0, $v0, 0x204
    ctx->pc = 0x18a2e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)516);
    // 0x18a2e4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x18a2e4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x18a2e8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x18a2e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x18a2ec: 0xc0a248c  jal         func_289230
    ctx->pc = 0x18A2ECu;
    SET_GPR_U32(ctx, 31, 0x18A2F4u);
    ctx->pc = 0x18A2F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18A2ECu;
            // 0x18a2f0: 0x46000b02  mul.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18A2F4u; }
        if (ctx->pc != 0x18A2F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18A2F4u; }
        if (ctx->pc != 0x18A2F4u) { return; }
    }
    ctx->pc = 0x18A2F4u;
label_18a2f4:
    // 0x18a2f4: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x18a2f4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_18a2f8:
    // 0x18a2f8: 0x260400b0  addiu       $a0, $s0, 0xB0
    ctx->pc = 0x18a2f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 176));
    // 0x18a2fc: 0xc062c94  jal         func_18B250
    ctx->pc = 0x18A2FCu;
    SET_GPR_U32(ctx, 31, 0x18A304u);
    ctx->pc = 0x18A300u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18A2FCu;
            // 0x18a300: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18B250u;
    if (runtime->hasFunction(0x18B250u)) {
        auto targetFn = runtime->lookupFunction(0x18B250u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18A304u; }
        if (ctx->pc != 0x18A304u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ezMidi__Fii_0x18b250(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18A304u; }
        if (ctx->pc != 0x18A304u) { return; }
    }
    ctx->pc = 0x18A304u;
label_18a304:
    // 0x18a304: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x18a304u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18a308: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x18a308u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18a30c: 0x3e00008  jr          $ra
    ctx->pc = 0x18A30Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18A310u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18A30Cu;
            // 0x18a310: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x18A314u;
}
