#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: MenuItemBrdScrlBarStep__Fiii
// Address: 0x22c0b0 - 0x22c140
void MenuItemBrdScrlBarStep__Fiii_0x22c0b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("MenuItemBrdScrlBarStep__Fiii_0x22c0b0");
#endif

    switch (ctx->pc) {
        case 0x22c0e8u: goto label_22c0e8;
        default: break;
    }

    ctx->pc = 0x22c0b0u;

    // 0x22c0b0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x22c0b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x22c0b4: 0x3c02437c  lui         $v0, 0x437C
    ctx->pc = 0x22c0b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17276 << 16));
    // 0x22c0b8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x22c0b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x22c0bc: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x22c0bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x22c0c0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x22c0c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x22c0c4: 0x8f8793fc  lw          $a3, -0x6C04($gp)
    ctx->pc = 0x22c0c4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939644)));
    // 0x22c0c8: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x22c0c8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22c0cc: 0x8f839400  lw          $v1, -0x6C00($gp)
    ctx->pc = 0x22c0ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939648)));
    // 0x22c0d0: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x22c0d0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22c0d4: 0x27a4002c  addiu       $a0, $sp, 0x2C
    ctx->pc = 0x22c0d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
    // 0x22c0d8: 0xe31023  subu        $v0, $a3, $v1
    ctx->pc = 0x22c0d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x22c0dc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x22c0dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22c0e0: 0xc0945ec  jal         func_2517B0
    ctx->pc = 0x22C0E0u;
    SET_GPR_U32(ctx, 31, 0x22C0E8u);
    ctx->pc = 0x22C0E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22C0E0u;
            // 0x22c0e4: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x2517B0u;
    if (runtime->hasFunction(0x2517B0u)) {
        auto targetFn = runtime->lookupFunction(0x2517B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22C0E8u; }
        if (ctx->pc != 0x22C0E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CalcScrlBarPutPos__FRiifif_0x2517b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22C0E8u; }
        if (ctx->pc != 0x22C0E8u) { return; }
    }
    ctx->pc = 0x22C0E8u;
label_22c0e8:
    // 0x22c0e8: 0x1600000c  bnez        $s0, . + 4 + (0xC << 2)
    ctx->pc = 0x22C0E8u;
    {
        const bool branch_taken_0x22c0e8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x22C0ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22C0E8u;
            // 0x22c0ec: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22c0e8) {
            ctx->pc = 0x22C11Cu;
            goto label_22c11c;
        }
    }
    ctx->pc = 0x22C0F0u;
    // 0x22c0f0: 0xc7a1002c  lwc1        $f1, 0x2C($sp)
    ctx->pc = 0x22c0f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22c0f4: 0x3c034080  lui         $v1, 0x4080
    ctx->pc = 0x22c0f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16512 << 16));
    // 0x22c0f8: 0xc7829418  lwc1        $f2, -0x6BE8($gp)
    ctx->pc = 0x22c0f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294939672)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x22c0fc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x22c0fcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22c100: 0x0  nop
    ctx->pc = 0x22c100u;
    // NOP
    // 0x22c104: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x22c104u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x22c108: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x22c108u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x22c10c: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x22c10cu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x22c110: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x22c110u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x22c114: 0xe7809418  swc1        $f0, -0x6BE8($gp)
    ctx->pc = 0x22c114u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294939672), bits); }
    // 0x22c118: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x22c118u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_22c11c:
    // 0x22c11c: 0x16030004  bne         $s0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x22C11Cu;
    {
        const bool branch_taken_0x22c11c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 3));
        if (branch_taken_0x22c11c) {
            ctx->pc = 0x22C130u;
            goto label_22c130;
        }
    }
    ctx->pc = 0x22C124u;
    // 0x22c124: 0xc7a0002c  lwc1        $f0, 0x2C($sp)
    ctx->pc = 0x22c124u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22c128: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x22c128u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x22c12c: 0xe7809418  swc1        $f0, -0x6BE8($gp)
    ctx->pc = 0x22c12cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294939672), bits); }
label_22c130:
    // 0x22c130: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x22c130u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22c134: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x22c134u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22c138: 0x3e00008  jr          $ra
    ctx->pc = 0x22C138u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22C13Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22C138u;
            // 0x22c13c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x22C140u;
}
