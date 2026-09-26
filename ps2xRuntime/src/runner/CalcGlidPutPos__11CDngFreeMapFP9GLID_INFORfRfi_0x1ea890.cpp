#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: CalcGlidPutPos__11CDngFreeMapFP9GLID_INFORfRfi
// Address: 0x1ea890 - 0x1ea91c
void CalcGlidPutPos__11CDngFreeMapFP9GLID_INFORfRfi_0x1ea890(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CalcGlidPutPos__11CDngFreeMapFP9GLID_INFORfRfi_0x1ea890");
#endif

    ctx->pc = 0x1ea890u;

    // 0x1ea890: 0x10a00020  beqz        $a1, . + 4 + (0x20 << 2)
    ctx->pc = 0x1EA890u;
    {
        const bool branch_taken_0x1ea890 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ea890) {
            ctx->pc = 0x1EA914u;
            goto label_1ea914;
        }
    }
    ctx->pc = 0x1EA898u;
    // 0x1ea898: 0x84aa0002  lh          $t2, 0x2($a1)
    ctx->pc = 0x1ea898u;
    SET_GPR_S32(ctx, 10, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 2)));
    // 0x1ea89c: 0x84a30004  lh          $v1, 0x4($a1)
    ctx->pc = 0x1ea89cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x1ea8a0: 0xa4840  sll         $t1, $t2, 1
    ctx->pc = 0x1ea8a0u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 10), 1));
    // 0x1ea8a4: 0x12a4821  addu        $t1, $t1, $t2
    ctx->pc = 0x1ea8a4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 10)));
    // 0x1ea8a8: 0x31823  negu        $v1, $v1
    ctx->pc = 0x1ea8a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 3)));
    // 0x1ea8ac: 0x94880  sll         $t1, $t1, 2
    ctx->pc = 0x1ea8acu;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
    // 0x1ea8b0: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1ea8b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1ea8b4: 0x12a4821  addu        $t1, $t1, $t2
    ctx->pc = 0x1ea8b4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 10)));
    // 0x1ea8b8: 0x94880  sll         $t1, $t1, 2
    ctx->pc = 0x1ea8b8u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
    // 0x1ea8bc: 0x1231821  addu        $v1, $t1, $v1
    ctx->pc = 0x1ea8bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 3)));
    // 0x1ea8c0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1ea8c0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ea8c4: 0x0  nop
    ctx->pc = 0x1ea8c4u;
    // NOP
    // 0x1ea8c8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1ea8c8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1ea8cc: 0xe4c00000  swc1        $f0, 0x0($a2)
    ctx->pc = 0x1ea8ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
    // 0x1ea8d0: 0x84a50004  lh          $a1, 0x4($a1)
    ctx->pc = 0x1ea8d0u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x1ea8d4: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x1ea8d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1ea8d8: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x1ea8d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1ea8dc: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1ea8dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1ea8e0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1ea8e0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ea8e4: 0x0  nop
    ctx->pc = 0x1ea8e4u;
    // NOP
    // 0x1ea8e8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1ea8e8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1ea8ec: 0x15000009  bnez        $t0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1EA8ECu;
    {
        const bool branch_taken_0x1ea8ec = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EA8F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EA8ECu;
            // 0x1ea8f0: 0xe4e00000  swc1        $f0, 0x0($a3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ea8ec) {
            ctx->pc = 0x1EA914u;
            goto label_1ea914;
        }
    }
    ctx->pc = 0x1EA8F4u;
    // 0x1ea8f4: 0xc4810100  lwc1        $f1, 0x100($a0)
    ctx->pc = 0x1ea8f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ea8f8: 0xc4c00000  lwc1        $f0, 0x0($a2)
    ctx->pc = 0x1ea8f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ea8fc: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1ea8fcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1ea900: 0xe4c00000  swc1        $f0, 0x0($a2)
    ctx->pc = 0x1ea900u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
    // 0x1ea904: 0xc4810104  lwc1        $f1, 0x104($a0)
    ctx->pc = 0x1ea904u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ea908: 0xc4e00000  lwc1        $f0, 0x0($a3)
    ctx->pc = 0x1ea908u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ea90c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1ea90cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1ea910: 0xe4e00000  swc1        $f0, 0x0($a3)
    ctx->pc = 0x1ea910u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 0), bits); }
label_1ea914:
    // 0x1ea914: 0x3e00008  jr          $ra
    ctx->pc = 0x1EA914u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1EA91Cu;
}
