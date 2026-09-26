#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: StepFish__FiP15RACE_FISH_PARAM
// Address: 0x31db90 - 0x31de48
void StepFish__FiP15RACE_FISH_PARAM_0x31db90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("StepFish__FiP15RACE_FISH_PARAM_0x31db90");
#endif

    switch (ctx->pc) {
        case 0x31dbe0u: goto label_31dbe0;
        case 0x31dd00u: goto label_31dd00;
        default: break;
    }

    ctx->pc = 0x31db90u;

    // 0x31db90: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x31db90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x31db94: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x31db94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x31db98: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x31db98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x31db9c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x31db9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x31dba0: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x31dba0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x31dba4: 0x8ca3009c  lw          $v1, 0x9C($a1)
    ctx->pc = 0x31dba4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 156)));
    // 0x31dba8: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x31DBA8u;
    {
        const bool branch_taken_0x31dba8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x31DBACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31DBA8u;
            // 0x31dbac: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31dba8) {
            ctx->pc = 0x31DBC0u;
            goto label_31dbc0;
        }
    }
    ctx->pc = 0x31DBB0u;
    // 0x31dbb0: 0x8e220098  lw          $v0, 0x98($s1)
    ctx->pc = 0x31dbb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 152)));
    // 0x31dbb4: 0x82102a  slt         $v0, $a0, $v0
    ctx->pc = 0x31dbb4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x31dbb8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x31DBB8u;
    {
        const bool branch_taken_0x31dbb8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x31dbb8) {
            ctx->pc = 0x31DBC8u;
            goto label_31dbc8;
        }
    }
    ctx->pc = 0x31DBC0u;
label_31dbc0:
    // 0x31dbc0: 0x1000009b  b           . + 4 + (0x9B << 2)
    ctx->pc = 0x31DBC0u;
    {
        const bool branch_taken_0x31dbc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31DBC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31DBC0u;
            // 0x31dbc4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31dbc0) {
            ctx->pc = 0x31DE30u;
            goto label_31de30;
        }
    }
    ctx->pc = 0x31DBC8u;
label_31dbc8:
    // 0x31dbc8: 0xc62c0054  lwc1        $f12, 0x54($s1)
    ctx->pc = 0x31dbc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x31dbcc: 0x41040  sll         $v0, $a0, 1
    ctx->pc = 0x31dbccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x31dbd0: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x31dbd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x31dbd4: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x31dbd4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x31dbd8: 0xc0c7c68  jal         func_31F1A0
    ctx->pc = 0x31DBD8u;
    SET_GPR_U32(ctx, 31, 0x31DBE0u);
    ctx->pc = 0x31DBDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31DBD8u;
            // 0x31dbdc: 0x628021  addu        $s0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x31F1A0u;
    if (runtime->hasFunction(0x31F1A0u)) {
        auto targetFn = runtime->lookupFunction(0x31F1A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31DBE0u; }
        if (ctx->pc != 0x31DBE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetRaceDivision__Ff_0x31f1a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31DBE0u; }
        if (ctx->pc != 0x31DBE0u) { return; }
    }
    ctx->pc = 0x31DBE0u;
label_31dbe0:
    // 0x31dbe0: 0x4410012  bgez        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x31DBE0u;
    {
        const bool branch_taken_0x31dbe0 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x31DBE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31DBE0u;
            // 0x31dbe4: 0x21880  sll         $v1, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31dbe0) {
            ctx->pc = 0x31DC2Cu;
            goto label_31dc2c;
        }
    }
    ctx->pc = 0x31DBE8u;
    // 0x31dbe8: 0xc6210050  lwc1        $f1, 0x50($s1)
    ctx->pc = 0x31dbe8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x31dbec: 0x3c023c23  lui         $v0, 0x3C23
    ctx->pc = 0x31dbecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15395 << 16));
    // 0x31dbf0: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x31dbf0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
    // 0x31dbf4: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x31dbf4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x31dbf8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x31dbf8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31dbfc: 0x0  nop
    ctx->pc = 0x31dbfcu;
    // NOP
    // 0x31dc00: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x31dc00u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x31dc04: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x31dc04u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x31dc08: 0x0  nop
    ctx->pc = 0x31dc08u;
    // NOP
    // 0x31dc0c: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x31DC0Cu;
    {
        const bool branch_taken_0x31dc0c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x31DC10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31DC0Cu;
            // 0x31dc10: 0xe6210050  swc1        $f1, 0x50($s1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 80), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x31dc0c) {
            ctx->pc = 0x31DC18u;
            goto label_31dc18;
        }
    }
    ctx->pc = 0x31DC14u;
    // 0x31dc14: 0xe6220050  swc1        $f2, 0x50($s1)
    ctx->pc = 0x31dc14u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 80), bits); }
label_31dc18:
    // 0x31dc18: 0xc6210050  lwc1        $f1, 0x50($s1)
    ctx->pc = 0x31dc18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x31dc1c: 0xc6200054  lwc1        $f0, 0x54($s1)
    ctx->pc = 0x31dc1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x31dc20: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x31dc20u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x31dc24: 0x10000068  b           . + 4 + (0x68 << 2)
    ctx->pc = 0x31DC24u;
    {
        const bool branch_taken_0x31dc24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31DC28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31DC24u;
            // 0x31dc28: 0xe6200054  swc1        $f0, 0x54($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 84), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x31dc24) {
            ctx->pc = 0x31DDC8u;
            goto label_31ddc8;
        }
    }
    ctx->pc = 0x31DC2Cu;
label_31dc2c:
    // 0x31dc2c: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x31dc2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x31dc30: 0x3c023951  lui         $v0, 0x3951
    ctx->pc = 0x31dc30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14673 << 16));
    // 0x31dc34: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x31dc34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x31dc38: 0x3442b718  ori         $v0, $v0, 0xB718
    ctx->pc = 0x31dc38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)46872);
    // 0x31dc3c: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x31dc3cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x31dc40: 0xc4630014  lwc1        $f3, 0x14($v1)
    ctx->pc = 0x31dc40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x31dc44: 0x3c023dcc  lui         $v0, 0x3DCC
    ctx->pc = 0x31dc44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15820 << 16));
    // 0x31dc48: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x31dc48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x31dc4c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x31dc4cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31dc50: 0x0  nop
    ctx->pc = 0x31dc50u;
    // NOP
    // 0x31dc54: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x31dc54u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x31dc58: 0x8e23007c  lw          $v1, 0x7C($s1)
    ctx->pc = 0x31dc58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 124)));
    // 0x31dc5c: 0x18600007  blez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x31DC5Cu;
    {
        const bool branch_taken_0x31dc5c = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x31DC60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31DC5Cu;
            // 0x31dc60: 0x46010100  add.s       $f4, $f0, $f1 (Delay Slot)
        ctx->f[4] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x31dc5c) {
            ctx->pc = 0x31DC7Cu;
            goto label_31dc7c;
        }
    }
    ctx->pc = 0x31DC64u;
    // 0x31dc64: 0x28610007  slti        $at, $v1, 0x7
    ctx->pc = 0x31dc64u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)7) ? 1 : 0);
    // 0x31dc68: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x31DC68u;
    {
        const bool branch_taken_0x31dc68 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x31DC6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31DC68u;
            // 0x31dc6c: 0x31080  sll         $v0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31dc68) {
            ctx->pc = 0x31DC7Cu;
            goto label_31dc7c;
        }
    }
    ctx->pc = 0x31DC70u;
    // 0x31dc70: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x31dc70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x31dc74: 0xc440007c  lwc1        $f0, 0x7C($v0)
    ctx->pc = 0x31dc74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x31dc78: 0x46002102  mul.s       $f4, $f4, $f0
    ctx->pc = 0x31dc78u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
label_31dc7c:
    // 0x31dc7c: 0xc6220050  lwc1        $f2, 0x50($s1)
    ctx->pc = 0x31dc7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x31dc80: 0x3c023c83  lui         $v0, 0x3C83
    ctx->pc = 0x31dc80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15491 << 16));
    // 0x31dc84: 0x3442126f  ori         $v0, $v0, 0x126F
    ctx->pc = 0x31dc84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4719);
    // 0x31dc88: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x31dc88u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x31dc8c: 0xc6200078  lwc1        $f0, 0x78($s1)
    ctx->pc = 0x31dc8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x31dc90: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x31dc90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x31dc94: 0x44822800  mtc1        $v0, $f5
    ctx->pc = 0x31dc94u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x31dc98: 0x0  nop
    ctx->pc = 0x31dc98u;
    // NOP
    // 0x31dc9c: 0x46041081  sub.s       $f2, $f2, $f4
    ctx->pc = 0x31dc9cu;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[4]);
    // 0x31dca0: 0x46011043  div.s       $f1, $f2, $f1
    ctx->pc = 0x31dca0u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[2], ctx->f[1]); }
    // 0x31dca4: 0x0  nop
    ctx->pc = 0x31dca4u;
    // NOP
    // 0x31dca8: 0x46050036  c.le.s      $f0, $f5
    ctx->pc = 0x31dca8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x31dcac: 0x0  nop
    ctx->pc = 0x31dcacu;
    // NOP
    // 0x31dcb0: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x31DCB0u;
    {
        const bool branch_taken_0x31dcb0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x31DCB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31DCB0u;
            // 0x31dcb4: 0x46011d01  sub.s       $f20, $f3, $f1 (Delay Slot)
        ctx->f[20] = FPU_SUB_S(ctx->f[3], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x31dcb0) {
            ctx->pc = 0x31DCBCu;
            goto label_31dcbc;
        }
    }
    ctx->pc = 0x31DCB8u;
    // 0x31dcb8: 0xe6250078  swc1        $f5, 0x78($s1)
    ctx->pc = 0x31dcb8u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 120), bits); }
label_31dcbc:
    // 0x31dcbc: 0xc6200078  lwc1        $f0, 0x78($s1)
    ctx->pc = 0x31dcbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x31dcc0: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x31dcc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x31dcc4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x31dcc4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x31dcc8: 0x0  nop
    ctx->pc = 0x31dcc8u;
    // NOP
    // 0x31dccc: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x31dcccu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x31dcd0: 0x0  nop
    ctx->pc = 0x31dcd0u;
    // NOP
    // 0x31dcd4: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x31DCD4u;
    {
        const bool branch_taken_0x31dcd4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x31dcd4) {
            ctx->pc = 0x31DCE0u;
            goto label_31dce0;
        }
    }
    ctx->pc = 0x31DCDCu;
    // 0x31dcdc: 0xe6210078  swc1        $f1, 0x78($s1)
    ctx->pc = 0x31dcdcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 120), bits); }
label_31dce0:
    // 0x31dce0: 0xc6200078  lwc1        $f0, 0x78($s1)
    ctx->pc = 0x31dce0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x31dce4: 0x3c023fa0  lui         $v0, 0x3FA0
    ctx->pc = 0x31dce4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16288 << 16));
    // 0x31dce8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x31dce8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x31dcec: 0xc62c0054  lwc1        $f12, 0x54($s1)
    ctx->pc = 0x31dcecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x31dcf0: 0xc60d0008  lwc1        $f13, 0x8($s0)
    ctx->pc = 0x31dcf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x31dcf4: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x31dcf4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x31dcf8: 0xc0c7ca8  jal         func_31F2A0
    ctx->pc = 0x31DCF8u;
    SET_GPR_U32(ctx, 31, 0x31DD00u);
    ctx->pc = 0x31DCFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31DCF8u;
            // 0x31dcfc: 0x4600a500  add.s       $f20, $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x31F2A0u;
    if (runtime->hasFunction(0x31F2A0u)) {
        auto targetFn = runtime->lookupFunction(0x31F2A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31DD00u; }
        if (ctx->pc != 0x31DD00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCourseR__Fff_0x31f2a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31DD00u; }
        if (ctx->pc != 0x31DD00u) { return; }
    }
    ctx->pc = 0x31DD00u;
label_31dd00:
    // 0x31dd00: 0x3c023ad1  lui         $v0, 0x3AD1
    ctx->pc = 0x31dd00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15057 << 16));
    // 0x31dd04: 0x3443b718  ori         $v1, $v0, 0xB718
    ctx->pc = 0x31dd04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)46872);
    // 0x31dd08: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x31dd08u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x31dd0c: 0x3c023c23  lui         $v0, 0x3C23
    ctx->pc = 0x31dd0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15395 << 16));
    // 0x31dd10: 0xc6220050  lwc1        $f2, 0x50($s1)
    ctx->pc = 0x31dd10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x31dd14: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x31dd14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
    // 0x31dd18: 0x46140842  mul.s       $f1, $f1, $f20
    ctx->pc = 0x31dd18u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[20]);
    // 0x31dd1c: 0x46011040  add.s       $f1, $f2, $f1
    ctx->pc = 0x31dd1cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x31dd20: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x31dd20u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x31dd24: 0x0  nop
    ctx->pc = 0x31dd24u;
    // NOP
    // 0x31dd28: 0x46030834  c.lt.s      $f1, $f3
    ctx->pc = 0x31dd28u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x31dd2c: 0x0  nop
    ctx->pc = 0x31dd2cu;
    // NOP
    // 0x31dd30: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x31DD30u;
    {
        const bool branch_taken_0x31dd30 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x31DD34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31DD30u;
            // 0x31dd34: 0xe6210050  swc1        $f1, 0x50($s1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 80), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x31dd30) {
            ctx->pc = 0x31DD3Cu;
            goto label_31dd3c;
        }
    }
    ctx->pc = 0x31DD38u;
    // 0x31dd38: 0xe6230050  swc1        $f3, 0x50($s1)
    ctx->pc = 0x31dd38u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 80), bits); }
label_31dd3c:
    // 0x31dd3c: 0xc6220050  lwc1        $f2, 0x50($s1)
    ctx->pc = 0x31dd3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x31dd40: 0xc6210054  lwc1        $f1, 0x54($s1)
    ctx->pc = 0x31dd40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x31dd44: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x31dd44u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x31dd48: 0x0  nop
    ctx->pc = 0x31dd48u;
    // NOP
    // 0x31dd4c: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x31dd4cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x31dd50: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x31dd50u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x31dd54: 0xe6200054  swc1        $f0, 0x54($s1)
    ctx->pc = 0x31dd54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 84), bits); }
    // 0x31dd58: 0xc6210078  lwc1        $f1, 0x78($s1)
    ctx->pc = 0x31dd58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x31dd5c: 0x46030836  c.le.s      $f1, $f3
    ctx->pc = 0x31dd5cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x31dd60: 0x0  nop
    ctx->pc = 0x31dd60u;
    // NOP
    // 0x31dd64: 0x4501000b  bc1t        . + 4 + (0xB << 2)
    ctx->pc = 0x31DD64u;
    {
        const bool branch_taken_0x31dd64 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x31DD68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31DD64u;
            // 0x31dd68: 0x3c023d4c  lui         $v0, 0x3D4C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15692 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31dd64) {
            ctx->pc = 0x31DD94u;
            goto label_31dd94;
        }
    }
    ctx->pc = 0x31DD6Cu;
    // 0x31dd6c: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x31dd6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x31dd70: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x31dd70u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31dd74: 0x0  nop
    ctx->pc = 0x31dd74u;
    // NOP
    // 0x31dd78: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x31dd78u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x31dd7c: 0x46030034  c.lt.s      $f0, $f3
    ctx->pc = 0x31dd7cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x31dd80: 0x0  nop
    ctx->pc = 0x31dd80u;
    // NOP
    // 0x31dd84: 0x45000010  bc1f        . + 4 + (0x10 << 2)
    ctx->pc = 0x31DD84u;
    {
        const bool branch_taken_0x31dd84 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x31DD88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31DD84u;
            // 0x31dd88: 0xe6200078  swc1        $f0, 0x78($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 120), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x31dd84) {
            ctx->pc = 0x31DDC8u;
            goto label_31ddc8;
        }
    }
    ctx->pc = 0x31DD8Cu;
    // 0x31dd8c: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x31DD8Cu;
    {
        const bool branch_taken_0x31dd8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31DD90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31DD8Cu;
            // 0x31dd90: 0xe6230078  swc1        $f3, 0x78($s1) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 120), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x31dd8c) {
            ctx->pc = 0x31DDC8u;
            goto label_31ddc8;
        }
    }
    ctx->pc = 0x31DD94u;
label_31dd94:
    // 0x31dd94: 0x46030834  c.lt.s      $f1, $f3
    ctx->pc = 0x31dd94u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x31dd98: 0x0  nop
    ctx->pc = 0x31dd98u;
    // NOP
    // 0x31dd9c: 0x4500000a  bc1f        . + 4 + (0xA << 2)
    ctx->pc = 0x31DD9Cu;
    {
        const bool branch_taken_0x31dd9c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x31DDA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31DD9Cu;
            // 0x31dda0: 0x3c023d4c  lui         $v0, 0x3D4C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15692 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31dd9c) {
            ctx->pc = 0x31DDC8u;
            goto label_31ddc8;
        }
    }
    ctx->pc = 0x31DDA4u;
    // 0x31dda4: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x31dda4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x31dda8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x31dda8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31ddac: 0x0  nop
    ctx->pc = 0x31ddacu;
    // NOP
    // 0x31ddb0: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x31ddb0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x31ddb4: 0x46030036  c.le.s      $f0, $f3
    ctx->pc = 0x31ddb4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x31ddb8: 0x0  nop
    ctx->pc = 0x31ddb8u;
    // NOP
    // 0x31ddbc: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x31DDBCu;
    {
        const bool branch_taken_0x31ddbc = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x31DDC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31DDBCu;
            // 0x31ddc0: 0xe6200078  swc1        $f0, 0x78($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 120), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x31ddbc) {
            ctx->pc = 0x31DDC8u;
            goto label_31ddc8;
        }
    }
    ctx->pc = 0x31DDC4u;
    // 0x31ddc4: 0xe6230078  swc1        $f3, 0x78($s1)
    ctx->pc = 0x31ddc4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 120), bits); }
label_31ddc8:
    // 0x31ddc8: 0xc6210054  lwc1        $f1, 0x54($s1)
    ctx->pc = 0x31ddc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x31ddcc: 0x3c024180  lui         $v0, 0x4180
    ctx->pc = 0x31ddccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16768 << 16));
    // 0x31ddd0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x31ddd0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31ddd4: 0x0  nop
    ctx->pc = 0x31ddd4u;
    // NOP
    // 0x31ddd8: 0xe6010000  swc1        $f1, 0x0($s0)
    ctx->pc = 0x31ddd8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x31dddc: 0x8222005c  lb          $v0, 0x5C($s1)
    ctx->pc = 0x31dddcu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 92)));
    // 0x31dde0: 0xa202000c  sb          $v0, 0xC($s0)
    ctx->pc = 0x31dde0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 12), (uint8_t)GPR_U32(ctx, 2));
    // 0x31dde4: 0x8222005d  lb          $v0, 0x5D($s1)
    ctx->pc = 0x31dde4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 93)));
    // 0x31dde8: 0xa202000d  sb          $v0, 0xD($s0)
    ctx->pc = 0x31dde8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 13), (uint8_t)GPR_U32(ctx, 2));
    // 0x31ddec: 0x8e220060  lw          $v0, 0x60($s1)
    ctx->pc = 0x31ddecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
    // 0x31ddf0: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x31ddf0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
    // 0x31ddf4: 0x8e220064  lw          $v0, 0x64($s1)
    ctx->pc = 0x31ddf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 100)));
    // 0x31ddf8: 0xae020014  sw          $v0, 0x14($s0)
    ctx->pc = 0x31ddf8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
    // 0x31ddfc: 0x8e220058  lw          $v0, 0x58($s1)
    ctx->pc = 0x31ddfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
    // 0x31de00: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x31de00u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x31de04: 0xc6210058  lwc1        $f1, 0x58($s1)
    ctx->pc = 0x31de04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x31de08: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x31de08u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x31de0c: 0xe6010008  swc1        $f1, 0x8($s0)
    ctx->pc = 0x31de0cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x31de10: 0xc6010000  lwc1        $f1, 0x0($s0)
    ctx->pc = 0x31de10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x31de14: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x31de14u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x31de18: 0x0  nop
    ctx->pc = 0x31de18u;
    // NOP
    // 0x31de1c: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x31DE1Cu;
    {
        const bool branch_taken_0x31de1c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x31DE20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31DE1Cu;
            // 0x31de20: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31de1c) {
            ctx->pc = 0x31DE30u;
            goto label_31de30;
        }
    }
    ctx->pc = 0x31DE24u;
    // 0x31de24: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x31de24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x31de28: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x31de28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x31de2c: 0xa203000c  sb          $v1, 0xC($s0)
    ctx->pc = 0x31de2cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 12), (uint8_t)GPR_U32(ctx, 3));
label_31de30:
    // 0x31de30: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x31de30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x31de34: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x31de34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x31de38: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x31de38u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x31de3c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x31de3cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x31de40: 0x3e00008  jr          $ra
    ctx->pc = 0x31DE40u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31DE44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31DE40u;
            // 0x31de44: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x31DE48u;
}
