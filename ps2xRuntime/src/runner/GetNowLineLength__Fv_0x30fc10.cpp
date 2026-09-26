#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetNowLineLength__Fv
// Address: 0x30fc10 - 0x30fc58
void GetNowLineLength__Fv_0x30fc10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetNowLineLength__Fv_0x30fc10");
#endif

    ctx->pc = 0x30fc10u;

    // 0x30fc10: 0x8f82a25c  lw          $v0, -0x5DA4($gp)
    ctx->pc = 0x30fc10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943324)));
    // 0x30fc14: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x30FC14u;
    {
        const bool branch_taken_0x30fc14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x30fc14) {
            ctx->pc = 0x30FC24u;
            goto label_30fc24;
        }
    }
    ctx->pc = 0x30FC1Cu;
    // 0x30fc1c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x30FC1Cu;
    {
        const bool branch_taken_0x30fc1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30FC20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30FC1Cu;
            // 0x30fc20: 0xc780a260  lwc1        $f0, -0x5DA0($gp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294943328)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x30fc1c) {
            ctx->pc = 0x30FC50u;
            goto label_30fc50;
        }
    }
    ctx->pc = 0x30FC24u;
label_30fc24:
    // 0x30fc24: 0x8f83a248  lw          $v1, -0x5DB8($gp)
    ctx->pc = 0x30fc24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943304)));
    // 0x30fc28: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x30fc28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
    // 0x30fc2c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x30fc2cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x30fc30: 0x2404003f  addiu       $a0, $zero, 0x3F
    ctx->pc = 0x30fc30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x30fc34: 0xc781a24c  lwc1        $f1, -0x5DB4($gp)
    ctx->pc = 0x30fc34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294943308)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x30fc38: 0x831023  subu        $v0, $a0, $v1
    ctx->pc = 0x30fc38u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x30fc3c: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x30fc3cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x30fc40: 0x0  nop
    ctx->pc = 0x30fc40u;
    // NOP
    // 0x30fc44: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x30fc44u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x30fc48: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x30fc48u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x30fc4c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x30fc4cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_30fc50:
    // 0x30fc50: 0x3e00008  jr          $ra
    ctx->pc = 0x30FC50u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x30FC58u;
}
