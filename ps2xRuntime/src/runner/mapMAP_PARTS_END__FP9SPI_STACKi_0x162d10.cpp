#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: mapMAP_PARTS_END__FP9SPI_STACKi
// Address: 0x162d10 - 0x162dd8
void mapMAP_PARTS_END__FP9SPI_STACKi_0x162d10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("mapMAP_PARTS_END__FP9SPI_STACKi_0x162d10");
#endif

    switch (ctx->pc) {
        case 0x162d48u: goto label_162d48;
        case 0x162d68u: goto label_162d68;
        case 0x162dc0u: goto label_162dc0;
        default: break;
    }

    ctx->pc = 0x162d10u;

    // 0x162d10: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x162d10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x162d14: 0x3c05003d  lui         $a1, 0x3D
    ctx->pc = 0x162d14u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)61 << 16));
    // 0x162d18: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x162d18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x162d1c: 0x3c06003d  lui         $a2, 0x3D
    ctx->pc = 0x162d1cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)61 << 16));
    // 0x162d20: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x162d20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x162d24: 0x3c07003d  lui         $a3, 0x3D
    ctx->pc = 0x162d24u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)61 << 16));
    // 0x162d28: 0x8f848914  lw          $a0, -0x76EC($gp)
    ctx->pc = 0x162d28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936852)));
    // 0x162d2c: 0x3c08003d  lui         $t0, 0x3D
    ctx->pc = 0x162d2cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)61 << 16));
    // 0x162d30: 0x8f898920  lw          $t1, -0x76E0($gp)
    ctx->pc = 0x162d30u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936864)));
    // 0x162d34: 0x24a502a0  addiu       $a1, $a1, 0x2A0
    ctx->pc = 0x162d34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 672));
    // 0x162d38: 0x24c604a0  addiu       $a2, $a2, 0x4A0
    ctx->pc = 0x162d38u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1184));
    // 0x162d3c: 0x24e704b0  addiu       $a3, $a3, 0x4B0
    ctx->pc = 0x162d3cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1200));
    // 0x162d40: 0xc057420  jal         func_15D080
    ctx->pc = 0x162D40u;
    SET_GPR_U32(ctx, 31, 0x162D48u);
    ctx->pc = 0x162D44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x162D40u;
            // 0x162d44: 0x250804c0  addiu       $t0, $t0, 0x4C0 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1216));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15D080u;
    if (runtime->hasFunction(0x15D080u)) {
        auto targetFn = runtime->lookupFunction(0x15D080u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x162D48u; }
        if (ctx->pc != 0x162D48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PlaceParts__4CMapFPcPfPfPfP9mgCMemory_0x15d080(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x162D48u; }
        if (ctx->pc != 0x162D48u) { return; }
    }
    ctx->pc = 0x162D48u;
label_162d48:
    // 0x162d48: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x162d48u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x162d4c: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x162D4Cu;
    {
        const bool branch_taken_0x162d4c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x162D50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x162D4Cu;
            // 0x162d50: 0x3c05003d  lui         $a1, 0x3D (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)61 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x162d4c) {
            ctx->pc = 0x162D5Cu;
            goto label_162d5c;
        }
    }
    ctx->pc = 0x162D54u;
    // 0x162d54: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x162D54u;
    {
        const bool branch_taken_0x162d54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x162D58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x162D54u;
            // 0x162d58: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x162d54) {
            ctx->pc = 0x162DC8u;
            goto label_162dc8;
        }
    }
    ctx->pc = 0x162D5Cu;
label_162d5c:
    // 0x162d5c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x162d5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x162d60: 0xc0598d8  jal         func_166360
    ctx->pc = 0x162D60u;
    SET_GPR_U32(ctx, 31, 0x162D68u);
    ctx->pc = 0x162D64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x162D60u;
            // 0x162d64: 0x24a501a0  addiu       $a1, $a1, 0x1A0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 416));
        ctx->in_delay_slot = false;
    ctx->pc = 0x166360u;
    if (runtime->hasFunction(0x166360u)) {
        auto targetFn = runtime->lookupFunction(0x166360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x162D68u; }
        if (ctx->pc != 0x162D68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetName__9CMapPartsFPc_0x166360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x162D68u; }
        if (ctx->pc != 0x162D68u) { return; }
    }
    ctx->pc = 0x162D68u;
label_162d68:
    // 0x162d68: 0xc7818924  lwc1        $f1, -0x76DC($gp)
    ctx->pc = 0x162d68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936868)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x162d6c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x162d6cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x162d70: 0x0  nop
    ctx->pc = 0x162d70u;
    // NOP
    // 0x162d74: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x162d74u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x162d78: 0x0  nop
    ctx->pc = 0x162d78u;
    // NOP
    // 0x162d7c: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x162D7Cu;
    {
        const bool branch_taken_0x162d7c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x162d7c) {
            ctx->pc = 0x162D90u;
            goto label_162d90;
        }
    }
    ctx->pc = 0x162D84u;
    // 0x162d84: 0xe6010050  swc1        $f1, 0x50($s0)
    ctx->pc = 0x162d84u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 80), bits); }
    // 0x162d88: 0x8f828928  lw          $v0, -0x76D8($gp)
    ctx->pc = 0x162d88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936872)));
    // 0x162d8c: 0xae020054  sw          $v0, 0x54($s0)
    ctx->pc = 0x162d8cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
label_162d90:
    // 0x162d90: 0x8f82892c  lw          $v0, -0x76D4($gp)
    ctx->pc = 0x162d90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936876)));
    // 0x162d94: 0x3c01003d  lui         $at, 0x3D
    ctx->pc = 0x162d94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)61 << 16));
    // 0x162d98: 0xae020064  sw          $v0, 0x64($s0)
    ctx->pc = 0x162d98u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
    // 0x162d9c: 0x802203a0  lb          $v0, 0x3A0($at)
    ctx->pc = 0x162d9cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 1), 928)));
    // 0x162da0: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x162DA0u;
    {
        const bool branch_taken_0x162da0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x162DA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x162DA0u;
            // 0x162da4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x162da0) {
            ctx->pc = 0x162DC8u;
            goto label_162dc8;
        }
    }
    ctx->pc = 0x162DA8u;
    // 0x162da8: 0x8f848914  lw          $a0, -0x76EC($gp)
    ctx->pc = 0x162da8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936852)));
    // 0x162dac: 0x3c05003d  lui         $a1, 0x3D
    ctx->pc = 0x162dacu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)61 << 16));
    // 0x162db0: 0x8f878920  lw          $a3, -0x76E0($gp)
    ctx->pc = 0x162db0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936864)));
    // 0x162db4: 0x24a503a0  addiu       $a1, $a1, 0x3A0
    ctx->pc = 0x162db4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 928));
    // 0x162db8: 0xc057190  jal         func_15C640
    ctx->pc = 0x162DB8u;
    SET_GPR_U32(ctx, 31, 0x162DC0u);
    ctx->pc = 0x162DBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x162DB8u;
            // 0x162dbc: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15C640u;
    if (runtime->hasFunction(0x15C640u)) {
        auto targetFn = runtime->lookupFunction(0x15C640u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x162DC0u; }
        if (ctx->pc != 0x162DC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AddPartsGroup__4CMapFPcP9CMapPartsP9mgCMemory_0x15c640(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x162DC0u; }
        if (ctx->pc != 0x162DC0u) { return; }
    }
    ctx->pc = 0x162DC0u;
label_162dc0:
    // 0x162dc0: 0xae0202f4  sw          $v0, 0x2F4($s0)
    ctx->pc = 0x162dc0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 756), GPR_U32(ctx, 2));
    // 0x162dc4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x162dc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_162dc8:
    // 0x162dc8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x162dc8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x162dcc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x162dccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x162dd0: 0x3e00008  jr          $ra
    ctx->pc = 0x162DD0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x162DD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x162DD0u;
            // 0x162dd4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x162DD8u;
}
