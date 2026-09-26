#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: CheckView__14CActiveMonsterFi
// Address: 0x1d9d70 - 0x1d9e74
void CheckView__14CActiveMonsterFi_0x1d9d70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CheckView__14CActiveMonsterFi_0x1d9d70");
#endif

    ctx->pc = 0x1d9d70u;

    // 0x1d9d70: 0x848612f0  lh          $a2, 0x12F0($a0)
    ctx->pc = 0x1d9d70u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4848)));
    // 0x1d9d74: 0x4c10002  bgez        $a2, . + 4 + (0x2 << 2)
    ctx->pc = 0x1D9D74u;
    {
        const bool branch_taken_0x1d9d74 = (GPR_S32(ctx, 6) >= 0);
        if (branch_taken_0x1d9d74) {
            ctx->pc = 0x1D9D80u;
            goto label_1d9d80;
        }
    }
    ctx->pc = 0x1D9D7Cu;
    // 0x1d9d7c: 0x24060063  addiu       $a2, $zero, 0x63
    ctx->pc = 0x1d9d7cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 99));
label_1d9d80:
    // 0x1d9d80: 0x8c821348  lw          $v0, 0x1348($a0)
    ctx->pc = 0x1d9d80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4936)));
    // 0x1d9d84: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x1d9d84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x1d9d88: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1D9D88u;
    {
        const bool branch_taken_0x1d9d88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D9D8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D9D88u;
            // 0x1d9d8c: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d9d88) {
            ctx->pc = 0x1D9DA4u;
            goto label_1d9da4;
        }
    }
    ctx->pc = 0x1D9D90u;
    // 0x1d9d90: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1d9d90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1d9d94: 0xa48312e4  sh          $v1, 0x12E4($a0)
    ctx->pc = 0x1d9d94u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4836), (uint16_t)GPR_U32(ctx, 3));
    // 0x1d9d98: 0xac8212e8  sw          $v0, 0x12E8($a0)
    ctx->pc = 0x1d9d98u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4840), GPR_U32(ctx, 2));
    // 0x1d9d9c: 0x10000033  b           . + 4 + (0x33 << 2)
    ctx->pc = 0x1D9D9Cu;
    {
        const bool branch_taken_0x1d9d9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D9DA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D9D9Cu;
            // 0x1d9da0: 0x848212e4  lh          $v0, 0x12E4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4836)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d9d9c) {
            ctx->pc = 0x1D9E6Cu;
            goto label_1d9e6c;
        }
    }
    ctx->pc = 0x1D9DA4u;
label_1d9da4:
    // 0x1d9da4: 0x848312e4  lh          $v1, 0x12E4($a0)
    ctx->pc = 0x1d9da4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4836)));
    // 0x1d9da8: 0x14600011  bnez        $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x1D9DA8u;
    {
        const bool branch_taken_0x1d9da8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D9DACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D9DA8u;
            // 0x1d9dac: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d9da8) {
            ctx->pc = 0x1D9DF0u;
            goto label_1d9df0;
        }
    }
    ctx->pc = 0x1D9DB0u;
    // 0x1d9db0: 0xc48112f4  lwc1        $f1, 0x12F4($a0)
    ctx->pc = 0x1d9db0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4852)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d9db4: 0xc48012fc  lwc1        $f0, 0x12FC($a0)
    ctx->pc = 0x1d9db4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4860)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d9db8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1d9db8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1d9dbc: 0x0  nop
    ctx->pc = 0x1d9dbcu;
    // NOP
    // 0x1d9dc0: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x1D9DC0u;
    {
        const bool branch_taken_0x1d9dc0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1D9DC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D9DC0u;
            // 0x1d9dc4: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d9dc0) {
            ctx->pc = 0x1D9DDCu;
            goto label_1d9ddc;
        }
    }
    ctx->pc = 0x1D9DC8u;
    // 0x1d9dc8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1d9dc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1d9dcc: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1d9dccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1d9dd0: 0xa48312e4  sh          $v1, 0x12E4($a0)
    ctx->pc = 0x1d9dd0u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4836), (uint16_t)GPR_U32(ctx, 3));
    // 0x1d9dd4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1D9DD4u;
    {
        const bool branch_taken_0x1d9dd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D9DD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D9DD4u;
            // 0x1d9dd8: 0xac8212e8  sw          $v0, 0x12E8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4840), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d9dd4) {
            ctx->pc = 0x1D9DE8u;
            goto label_1d9de8;
        }
    }
    ctx->pc = 0x1D9DDCu;
label_1d9ddc:
    // 0x1d9ddc: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1d9ddcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1d9de0: 0xa48312e4  sh          $v1, 0x12E4($a0)
    ctx->pc = 0x1d9de0u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4836), (uint16_t)GPR_U32(ctx, 3));
    // 0x1d9de4: 0xac8212e8  sw          $v0, 0x12E8($a0)
    ctx->pc = 0x1d9de4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4840), GPR_U32(ctx, 2));
label_1d9de8:
    // 0x1d9de8: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x1D9DE8u;
    {
        const bool branch_taken_0x1d9de8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D9DECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D9DE8u;
            // 0x1d9dec: 0x848212e4  lh          $v0, 0x12E4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4836)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d9de8) {
            ctx->pc = 0x1D9E6Cu;
            goto label_1d9e6c;
        }
    }
    ctx->pc = 0x1D9DF0u;
label_1d9df0:
    // 0x1d9df0: 0x1462000f  bne         $v1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x1D9DF0u;
    {
        const bool branch_taken_0x1d9df0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1d9df0) {
            ctx->pc = 0x1D9E30u;
            goto label_1d9e30;
        }
    }
    ctx->pc = 0x1D9DF8u;
    // 0x1d9df8: 0xc48112fc  lwc1        $f1, 0x12FC($a0)
    ctx->pc = 0x1d9df8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4860)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d9dfc: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x1d9dfcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
    // 0x1d9e00: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d9e00u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d9e04: 0xc48212f4  lwc1        $f2, 0x12F4($a0)
    ctx->pc = 0x1d9e04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4852)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1d9e08: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1d9e08u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1d9e0c: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x1d9e0cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1d9e10: 0x0  nop
    ctx->pc = 0x1d9e10u;
    // NOP
    // 0x1d9e14: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x1D9E14u;
    {
        const bool branch_taken_0x1d9e14 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1D9E18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D9E14u;
            // 0x1d9e18: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d9e14) {
            ctx->pc = 0x1D9E2Cu;
            goto label_1d9e2c;
        }
    }
    ctx->pc = 0x1D9E1Cu;
    // 0x1d9e1c: 0xc5102a  slt         $v0, $a2, $a1
    ctx->pc = 0x1d9e1cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x1d9e20: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1D9E20u;
    {
        const bool branch_taken_0x1d9e20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d9e20) {
            ctx->pc = 0x1D9E30u;
            goto label_1d9e30;
        }
    }
    ctx->pc = 0x1D9E28u;
    // 0x1d9e28: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1d9e28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1d9e2c:
    // 0x1d9e2c: 0xa48212e4  sh          $v0, 0x12E4($a0)
    ctx->pc = 0x1d9e2cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4836), (uint16_t)GPR_U32(ctx, 2));
label_1d9e30:
    // 0x1d9e30: 0x848312e4  lh          $v1, 0x12E4($a0)
    ctx->pc = 0x1d9e30u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4836)));
    // 0x1d9e34: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1d9e34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d9e38: 0x1462000a  bne         $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1D9E38u;
    {
        const bool branch_taken_0x1d9e38 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1d9e38) {
            ctx->pc = 0x1D9E64u;
            goto label_1d9e64;
        }
    }
    ctx->pc = 0x1D9E40u;
    // 0x1d9e40: 0xc48112f4  lwc1        $f1, 0x12F4($a0)
    ctx->pc = 0x1d9e40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4852)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d9e44: 0xc48012fc  lwc1        $f0, 0x12FC($a0)
    ctx->pc = 0x1d9e44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4860)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d9e48: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1d9e48u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1d9e4c: 0x0  nop
    ctx->pc = 0x1d9e4cu;
    // NOP
    // 0x1d9e50: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x1D9E50u;
    {
        const bool branch_taken_0x1d9e50 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1D9E54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D9E50u;
            // 0x1d9e54: 0xc5082a  slt         $at, $a2, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d9e50) {
            ctx->pc = 0x1D9E64u;
            goto label_1d9e64;
        }
    }
    ctx->pc = 0x1D9E58u;
    // 0x1d9e58: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x1D9E58u;
    {
        const bool branch_taken_0x1d9e58 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D9E5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D9E58u;
            // 0x1d9e5c: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d9e58) {
            ctx->pc = 0x1D9E64u;
            goto label_1d9e64;
        }
    }
    ctx->pc = 0x1D9E60u;
    // 0x1d9e60: 0xa48212e4  sh          $v0, 0x12E4($a0)
    ctx->pc = 0x1d9e60u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4836), (uint16_t)GPR_U32(ctx, 2));
label_1d9e64:
    // 0x1d9e64: 0x848212e4  lh          $v0, 0x12E4($a0)
    ctx->pc = 0x1d9e64u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4836)));
    // 0x1d9e68: 0x0  nop
    ctx->pc = 0x1d9e68u;
    // NOP
label_1d9e6c:
    // 0x1d9e6c: 0x3e00008  jr          $ra
    ctx->pc = 0x1D9E6Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1D9E74u;
}
