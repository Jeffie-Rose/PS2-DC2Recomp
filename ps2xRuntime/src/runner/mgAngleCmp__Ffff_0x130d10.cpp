#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: mgAngleCmp__Ffff
// Address: 0x130d10 - 0x130dcc
void mgAngleCmp__Ffff_0x130d10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("mgAngleCmp__Ffff_0x130d10");
#endif

    ctx->pc = 0x130d10u;

    // 0x130d10: 0x460d6041  sub.s       $f1, $f12, $f13
    ctx->pc = 0x130d10u;
    ctx->f[1] = FPU_SUB_S(ctx->f[12], ctx->f[13]);
    // 0x130d14: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x130d14u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x130d18: 0x0  nop
    ctx->pc = 0x130d18u;
    // NOP
    // 0x130d1c: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x130d1cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x130d20: 0x0  nop
    ctx->pc = 0x130d20u;
    // NOP
    // 0x130d24: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x130D24u;
    {
        const bool branch_taken_0x130d24 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x130D28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x130D24u;
            // 0x130d28: 0x3c024049  lui         $v0, 0x4049 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x130d24) {
            ctx->pc = 0x130D34u;
            goto label_130d34;
        }
    }
    ctx->pc = 0x130D2Cu;
    // 0x130d2c: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x130D2Cu;
    {
        const bool branch_taken_0x130d2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x130D30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x130D2Cu;
            // 0x130d30: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x130d2c) {
            ctx->pc = 0x130DC4u;
            goto label_130dc4;
        }
    }
    ctx->pc = 0x130D34u;
label_130d34:
    // 0x130d34: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x130d34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x130d38: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x130d38u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x130d3c: 0x0  nop
    ctx->pc = 0x130d3cu;
    // NOP
    // 0x130d40: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x130d40u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x130d44: 0x0  nop
    ctx->pc = 0x130d44u;
    // NOP
    // 0x130d48: 0x45010007  bc1t        . + 4 + (0x7 << 2)
    ctx->pc = 0x130D48u;
    {
        const bool branch_taken_0x130d48 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x130D4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x130D48u;
            // 0x130d4c: 0x3c02c049  lui         $v0, 0xC049 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x130d48) {
            ctx->pc = 0x130D68u;
            goto label_130d68;
        }
    }
    ctx->pc = 0x130D50u;
    // 0x130d50: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x130d50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
    // 0x130d54: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x130d54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x130d58: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x130d58u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x130d5c: 0x0  nop
    ctx->pc = 0x130d5cu;
    // NOP
    // 0x130d60: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x130d60u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x130d64: 0x3c02c049  lui         $v0, 0xC049
    ctx->pc = 0x130d64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
label_130d68:
    // 0x130d68: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x130d68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x130d6c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x130d6cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x130d70: 0x0  nop
    ctx->pc = 0x130d70u;
    // NOP
    // 0x130d74: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x130d74u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x130d78: 0x0  nop
    ctx->pc = 0x130d78u;
    // NOP
    // 0x130d7c: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x130D7Cu;
    {
        const bool branch_taken_0x130d7c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x130D80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x130D7Cu;
            // 0x130d80: 0x3c0240c9  lui         $v0, 0x40C9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x130d7c) {
            ctx->pc = 0x130D94u;
            goto label_130d94;
        }
    }
    ctx->pc = 0x130D84u;
    // 0x130d84: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x130d84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x130d88: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x130d88u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x130d8c: 0x0  nop
    ctx->pc = 0x130d8cu;
    // NOP
    // 0x130d90: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x130d90u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_130d94:
    // 0x130d94: 0x460e0836  c.le.s      $f1, $f14
    ctx->pc = 0x130d94u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[14])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x130d98: 0x0  nop
    ctx->pc = 0x130d98u;
    // NOP
    // 0x130d9c: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x130D9Cu;
    {
        const bool branch_taken_0x130d9c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x130DA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x130D9Cu;
            // 0x130da0: 0x46007007  neg.s       $f0, $f14 (Delay Slot)
        ctx->f[0] = FPU_NEG_S(ctx->f[14]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x130d9c) {
            ctx->pc = 0x130DACu;
            goto label_130dac;
        }
    }
    ctx->pc = 0x130DA4u;
    // 0x130da4: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x130DA4u;
    {
        const bool branch_taken_0x130da4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x130DA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x130DA4u;
            // 0x130da8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x130da4) {
            ctx->pc = 0x130DC4u;
            goto label_130dc4;
        }
    }
    ctx->pc = 0x130DACu;
label_130dac:
    // 0x130dac: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x130dacu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x130db0: 0x0  nop
    ctx->pc = 0x130db0u;
    // NOP
    // 0x130db4: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x130DB4u;
    {
        const bool branch_taken_0x130db4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x130DB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x130DB4u;
            // 0x130db8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x130db4) {
            ctx->pc = 0x130DC4u;
            goto label_130dc4;
        }
    }
    ctx->pc = 0x130DBCu;
    // 0x130dbc: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x130DBCu;
    {
        const bool branch_taken_0x130dbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x130DC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x130DBCu;
            // 0x130dc0: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x130dbc) {
            ctx->pc = 0x130DC4u;
            goto label_130dc4;
        }
    }
    ctx->pc = 0x130DC4u;
label_130dc4:
    // 0x130dc4: 0x3e00008  jr          $ra
    ctx->pc = 0x130DC4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x130DCCu;
}
