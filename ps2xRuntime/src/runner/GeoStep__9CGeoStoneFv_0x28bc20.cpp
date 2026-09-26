#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GeoStep__9CGeoStoneFv
// Address: 0x28bc20 - 0x28bc9c
void GeoStep__9CGeoStoneFv_0x28bc20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GeoStep__9CGeoStoneFv_0x28bc20");
#endif

    switch (ctx->pc) {
        case 0x28bc40u: goto label_28bc40;
        default: break;
    }

    ctx->pc = 0x28bc20u;

    // 0x28bc20: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x28bc20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x28bc24: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x28bc24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x28bc28: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x28bc28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x28bc2c: 0x8c830660  lw          $v1, 0x660($a0)
    ctx->pc = 0x28bc2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1632)));
    // 0x28bc30: 0x10600016  beqz        $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x28BC30u;
    {
        const bool branch_taken_0x28bc30 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x28BC34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28BC30u;
            // 0x28bc34: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28bc30) {
            ctx->pc = 0x28BC8Cu;
            goto label_28bc8c;
        }
    }
    ctx->pc = 0x28BC38u;
    // 0x28bc38: 0xc05cfb4  jal         func_173ED0
    ctx->pc = 0x28BC38u;
    SET_GPR_U32(ctx, 31, 0x28BC40u);
    ctx->pc = 0x173ED0u;
    if (runtime->hasFunction(0x173ED0u)) {
        auto targetFn = runtime->lookupFunction(0x173ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28BC40u; }
        if (ctx->pc != 0x28BC40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Step__11CCharacter2Fv_0x173ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28BC40u; }
        if (ctx->pc != 0x28BC40u) { return; }
    }
    ctx->pc = 0x28BC40u;
label_28bc40:
    // 0x28bc40: 0xc6020664  lwc1        $f2, 0x664($s0)
    ctx->pc = 0x28bc40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1636)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x28bc44: 0x3c033d56  lui         $v1, 0x3D56
    ctx->pc = 0x28bc44u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15702 << 16));
    // 0x28bc48: 0x34647750  ori         $a0, $v1, 0x7750
    ctx->pc = 0x28bc48u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)30544);
    // 0x28bc4c: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x28bc4cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x28bc50: 0x3c034049  lui         $v1, 0x4049
    ctx->pc = 0x28bc50u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16457 << 16));
    // 0x28bc54: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x28bc54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x28bc58: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x28bc58u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28bc5c: 0x0  nop
    ctx->pc = 0x28bc5cu;
    // NOP
    // 0x28bc60: 0x46011040  add.s       $f1, $f2, $f1
    ctx->pc = 0x28bc60u;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x28bc64: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x28bc64u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x28bc68: 0x0  nop
    ctx->pc = 0x28bc68u;
    // NOP
    // 0x28bc6c: 0x45010007  bc1t        . + 4 + (0x7 << 2)
    ctx->pc = 0x28BC6Cu;
    {
        const bool branch_taken_0x28bc6c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x28BC70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28BC6Cu;
            // 0x28bc70: 0xe6010664  swc1        $f1, 0x664($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1636), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x28bc6c) {
            ctx->pc = 0x28BC8Cu;
            goto label_28bc8c;
        }
    }
    ctx->pc = 0x28BC74u;
    // 0x28bc74: 0x3c0340c9  lui         $v1, 0x40C9
    ctx->pc = 0x28bc74u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16585 << 16));
    // 0x28bc78: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x28bc78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x28bc7c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x28bc7cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28bc80: 0x0  nop
    ctx->pc = 0x28bc80u;
    // NOP
    // 0x28bc84: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x28bc84u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x28bc88: 0xe6000664  swc1        $f0, 0x664($s0)
    ctx->pc = 0x28bc88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1636), bits); }
label_28bc8c:
    // 0x28bc8c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x28bc8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28bc90: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x28bc90u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28bc94: 0x3e00008  jr          $ra
    ctx->pc = 0x28BC94u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28BC98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28BC94u;
            // 0x28bc98: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x28BC9Cu;
}
