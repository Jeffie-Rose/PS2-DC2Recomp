#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: AddPoint__16CSWordAfterImageFPfPff
// Address: 0x1c20b0 - 0x1c2174
void AddPoint__16CSWordAfterImageFPfPff_0x1c20b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("AddPoint__16CSWordAfterImageFPfPff_0x1c20b0");
#endif

    switch (ctx->pc) {
        case 0x1c20e4u: goto label_1c20e4;
        case 0x1c20fcu: goto label_1c20fc;
        default: break;
    }

    ctx->pc = 0x1c20b0u;

    // 0x1c20b0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1c20b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1c20b4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1c20b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1c20b8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1c20b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1c20bc: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1c20bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1c20c0: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x1c20c0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c20c4: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x1c20c4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1c20c8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c20c8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c20cc: 0x8c830050  lw          $v1, 0x50($a0)
    ctx->pc = 0x1c20ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
    // 0x1c20d0: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x1c20d0u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x1c20d4: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1c20d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1c20d8: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1c20d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1c20dc: 0xc041c5c  jal         func_107170
    ctx->pc = 0x1C20DCu;
    SET_GPR_U32(ctx, 31, 0x1C20E4u);
    ctx->pc = 0x1C20E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C20DCu;
            // 0x1c20e0: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107170u;
    if (runtime->hasFunction(0x107170u)) {
        auto targetFn = runtime->lookupFunction(0x107170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C20E4u; }
        if (ctx->pc != 0x1C20E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyVector_0x107170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C20E4u; }
        if (ctx->pc != 0x1C20E4u) { return; }
    }
    ctx->pc = 0x1C20E4u;
label_1c20e4:
    // 0x1c20e4: 0x8e030050  lw          $v1, 0x50($s0)
    ctx->pc = 0x1c20e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x1c20e8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1c20e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c20ec: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1c20ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1c20f0: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1c20f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1c20f4: 0xc041c5c  jal         func_107170
    ctx->pc = 0x1C20F4u;
    SET_GPR_U32(ctx, 31, 0x1C20FCu);
    ctx->pc = 0x1C20F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C20F4u;
            // 0x1c20f8: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107170u;
    if (runtime->hasFunction(0x107170u)) {
        auto targetFn = runtime->lookupFunction(0x107170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C20FCu; }
        if (ctx->pc != 0x1C20FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyVector_0x107170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C20FCu; }
        if (ctx->pc != 0x1C20FCu) { return; }
    }
    ctx->pc = 0x1C20FCu;
label_1c20fc:
    // 0x1c20fc: 0x8e040050  lw          $a0, 0x50($s0)
    ctx->pc = 0x1c20fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x1c2100: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x1c2100u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1c2104: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x1c2104u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1c2108: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1c2108u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1c210c: 0xe4740000  swc1        $f20, 0x0($v1)
    ctx->pc = 0x1c210cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x1c2110: 0x8e030050  lw          $v1, 0x50($s0)
    ctx->pc = 0x1c2110u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x1c2114: 0xae030054  sw          $v1, 0x54($s0)
    ctx->pc = 0x1c2114u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 3));
    // 0x1c2118: 0x8e04004c  lw          $a0, 0x4C($s0)
    ctx->pc = 0x1c2118u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x1c211c: 0x8e030048  lw          $v1, 0x48($s0)
    ctx->pc = 0x1c211cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
    // 0x1c2120: 0x83082a  slt         $at, $a0, $v1
    ctx->pc = 0x1c2120u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1c2124: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x1C2124u;
    {
        const bool branch_taken_0x1c2124 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C2128u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C2124u;
            // 0x1c2128: 0x24830001  addiu       $v1, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2124) {
            ctx->pc = 0x1C2130u;
            goto label_1c2130;
        }
    }
    ctx->pc = 0x1C212Cu;
    // 0x1c212c: 0xae03004c  sw          $v1, 0x4C($s0)
    ctx->pc = 0x1c212cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 76), GPR_U32(ctx, 3));
label_1c2130:
    // 0x1c2130: 0x8e030050  lw          $v1, 0x50($s0)
    ctx->pc = 0x1c2130u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x1c2134: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1c2134u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1c2138: 0xae030050  sw          $v1, 0x50($s0)
    ctx->pc = 0x1c2138u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 3));
    // 0x1c213c: 0x8e030050  lw          $v1, 0x50($s0)
    ctx->pc = 0x1c213cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x1c2140: 0x4610005  bgez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1C2140u;
    {
        const bool branch_taken_0x1c2140 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1C2144u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C2140u;
            // 0x1c2144: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2140) {
            ctx->pc = 0x1C2158u;
            goto label_1c2158;
        }
    }
    ctx->pc = 0x1C2148u;
    // 0x1c2148: 0x8e030048  lw          $v1, 0x48($s0)
    ctx->pc = 0x1c2148u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
    // 0x1c214c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1c214cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1c2150: 0xae030050  sw          $v1, 0x50($s0)
    ctx->pc = 0x1c2150u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 3));
    // 0x1c2154: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1c2154u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1c2158:
    // 0x1c2158: 0xae030058  sw          $v1, 0x58($s0)
    ctx->pc = 0x1c2158u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 3));
    // 0x1c215c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1c215cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1c2160: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x1c2160u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1c2164: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1c2164u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c2168: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1c2168u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c216c: 0x3e00008  jr          $ra
    ctx->pc = 0x1C216Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C2170u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C216Cu;
            // 0x1c2170: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1C2174u;
}
