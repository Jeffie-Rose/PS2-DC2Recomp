#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: CopyGameData__13CGameDataUsedFP13CGameDataUsed
// Address: 0x1999b0 - 0x199a50
void CopyGameData__13CGameDataUsedFP13CGameDataUsed_0x1999b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CopyGameData__13CGameDataUsedFP13CGameDataUsed_0x1999b0");
#endif

    switch (ctx->pc) {
        case 0x1999d0u: goto label_1999d0;
        case 0x1999d8u: goto label_1999d8;
        case 0x1999f4u: goto label_1999f4;
        default: break;
    }

    ctx->pc = 0x1999b0u;

    // 0x1999b0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1999b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1999b4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1999b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1999b8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1999b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1999bc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1999bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1999c0: 0x10a0001e  beqz        $a1, . + 4 + (0x1E << 2)
    ctx->pc = 0x1999C0u;
    {
        const bool branch_taken_0x1999c0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1999C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1999C0u;
            // 0x1999c4: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1999c0) {
            ctx->pc = 0x199A3Cu;
            goto label_199a3c;
        }
    }
    ctx->pc = 0x1999C8u;
    // 0x1999c8: 0xc049c18  jal         func_127060
    ctx->pc = 0x1999C8u;
    SET_GPR_U32(ctx, 31, 0x1999D0u);
    ctx->pc = 0x1999CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1999C8u;
            // 0x1999cc: 0x2406006c  addiu       $a2, $zero, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 108));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127060u;
    if (runtime->hasFunction(0x127060u)) {
        auto targetFn = runtime->lookupFunction(0x127060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1999D0u; }
        if (ctx->pc != 0x1999D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memcpy_0x127060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1999D0u; }
        if (ctx->pc != 0x1999D0u) { return; }
    }
    ctx->pc = 0x1999D0u;
label_1999d0:
    // 0x1999d0: 0xc065af8  jal         func_196BE0
    ctx->pc = 0x1999D0u;
    SET_GPR_U32(ctx, 31, 0x1999D8u);
    ctx->pc = 0x196BE0u;
    if (runtime->hasFunction(0x196BE0u)) {
        auto targetFn = runtime->lookupFunction(0x196BE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1999D8u; }
        if (ctx->pc != 0x1999D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetUserDataMan__Fv_0x196be0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1999D8u; }
        if (ctx->pc != 0x1999D8u) { return; }
    }
    ctx->pc = 0x1999D8u;
label_1999d8:
    // 0x1999d8: 0x24504660  addiu       $s0, $v0, 0x4660
    ctx->pc = 0x1999d8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 18016));
    // 0x1999dc: 0x12000017  beqz        $s0, . + 4 + (0x17 << 2)
    ctx->pc = 0x1999DCu;
    {
        const bool branch_taken_0x1999dc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1999E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1999DCu;
            // 0x1999e0: 0x26030108  addiu       $v1, $s0, 0x108 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 264));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1999dc) {
            ctx->pc = 0x199A3Cu;
            goto label_199a3c;
        }
    }
    ctx->pc = 0x1999E4u;
    // 0x1999e4: 0x14710015  bne         $v1, $s1, . + 4 + (0x15 << 2)
    ctx->pc = 0x1999E4u;
    {
        const bool branch_taken_0x1999e4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 17));
        if (branch_taken_0x1999e4) {
            ctx->pc = 0x199A3Cu;
            goto label_199a3c;
        }
    }
    ctx->pc = 0x1999ECu;
    // 0x1999ec: 0xc0a248c  jal         func_289230
    ctx->pc = 0x1999ECu;
    SET_GPR_U32(ctx, 31, 0x1999F4u);
    ctx->pc = 0x1999F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1999ECu;
            // 0x1999f0: 0xc60c0020  lwc1        $f12, 0x20($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1999F4u; }
        if (ctx->pc != 0x1999F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1999F4u; }
        if (ctx->pc != 0x1999F4u) { return; }
    }
    ctx->pc = 0x1999F4u;
label_1999f4:
    // 0x1999f4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1999f4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1999f8: 0xc6220010  lwc1        $f2, 0x10($s1)
    ctx->pc = 0x1999f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1999fc: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1999fcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x199a00: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x199a00u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x199a04: 0x0  nop
    ctx->pc = 0x199a04u;
    // NOP
    // 0x199a08: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x199a08u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x199a0c: 0x0  nop
    ctx->pc = 0x199a0cu;
    // NOP
    // 0x199a10: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x199A10u;
    {
        const bool branch_taken_0x199a10 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x199A14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x199A10u;
            // 0x199a14: 0xe6020020  swc1        $f2, 0x20($s0) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 32), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x199a10) {
            ctx->pc = 0x199A20u;
            goto label_199a20;
        }
    }
    ctx->pc = 0x199A18u;
    // 0x199a18: 0xc6000020  lwc1        $f0, 0x20($s0)
    ctx->pc = 0x199a18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x199a1c: 0xe6000024  swc1        $f0, 0x24($s0)
    ctx->pc = 0x199a1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 36), bits); }
label_199a20:
    // 0x199a20: 0xc6010020  lwc1        $f1, 0x20($s0)
    ctx->pc = 0x199a20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x199a24: 0xc6000024  lwc1        $f0, 0x24($s0)
    ctx->pc = 0x199a24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x199a28: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x199a28u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x199a2c: 0x0  nop
    ctx->pc = 0x199a2cu;
    // NOP
    // 0x199a30: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x199A30u;
    {
        const bool branch_taken_0x199a30 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x199a30) {
            ctx->pc = 0x199A3Cu;
            goto label_199a3c;
        }
    }
    ctx->pc = 0x199A38u;
    // 0x199a38: 0xe6010024  swc1        $f1, 0x24($s0)
    ctx->pc = 0x199a38u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 36), bits); }
label_199a3c:
    // 0x199a3c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x199a3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x199a40: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x199a40u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x199a44: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x199a44u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x199a48: 0x3e00008  jr          $ra
    ctx->pc = 0x199A48u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x199A4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x199A48u;
            // 0x199a4c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x199A50u;
}
