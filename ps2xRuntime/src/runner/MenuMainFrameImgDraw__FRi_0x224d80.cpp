#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: MenuMainFrameImgDraw__FRi
// Address: 0x224d80 - 0x224f38
void MenuMainFrameImgDraw__FRi_0x224d80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("MenuMainFrameImgDraw__FRi_0x224d80");
#endif

    switch (ctx->pc) {
        case 0x224db4u: goto label_224db4;
        case 0x224decu: goto label_224dec;
        case 0x224e18u: goto label_224e18;
        case 0x224e94u: goto label_224e94;
        case 0x224eacu: goto label_224eac;
        case 0x224ec8u: goto label_224ec8;
        case 0x224eecu: goto label_224eec;
        case 0x224f1cu: goto label_224f1c;
        default: break;
    }

    ctx->pc = 0x224d80u;

    // 0x224d80: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x224d80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x224d84: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x224d84u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x224d88: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x224d88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x224d8c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x224d8cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x224d90: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x224d90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x224d94: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x224d94u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x224d98: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x224d98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x224d9c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x224d9cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x224da0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x224da0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x224da4: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x224da4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x224da8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x224da8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x224dac: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x224DACu;
    SET_GPR_U32(ctx, 31, 0x224DB4u);
    ctx->pc = 0x224DB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x224DACu;
            // 0x224db0: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x224DB4u; }
        if (ctx->pc != 0x224DB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x224DB4u; }
        if (ctx->pc != 0x224DB4u) { return; }
    }
    ctx->pc = 0x224DB4u;
label_224db4:
    // 0x224db4: 0x8f828780  lw          $v0, -0x7880($gp)
    ctx->pc = 0x224db4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936448)));
    // 0x224db8: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x224DB8u;
    {
        const bool branch_taken_0x224db8 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x224DBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x224DB8u;
            // 0x224dbc: 0x23843  sra         $a3, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x224db8) {
            ctx->pc = 0x224DC8u;
            goto label_224dc8;
        }
    }
    ctx->pc = 0x224DC0u;
    // 0x224dc0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x224dc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x224dc4: 0x23843  sra         $a3, $v0, 1
    ctx->pc = 0x224dc4u;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 2), 1));
label_224dc8:
    // 0x224dc8: 0x8f828784  lw          $v0, -0x787C($gp)
    ctx->pc = 0x224dc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936452)));
    // 0x224dcc: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x224DCCu;
    {
        const bool branch_taken_0x224dcc = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x224DD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x224DCCu;
            // 0x224dd0: 0x24043  sra         $t0, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x224dcc) {
            ctx->pc = 0x224DDCu;
            goto label_224ddc;
        }
    }
    ctx->pc = 0x224DD4u;
    // 0x224dd4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x224dd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x224dd8: 0x24043  sra         $t0, $v0, 1
    ctx->pc = 0x224dd8u;
    SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 2), 1));
label_224ddc:
    // 0x224ddc: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x224ddcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x224de0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x224de0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x224de4: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x224DE4u;
    SET_GPR_U32(ctx, 31, 0x224DECu);
    ctx->pc = 0x224DE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x224DE4u;
            // 0x224de8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x224DECu; }
        if (ctx->pc != 0x224DECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x224DECu; }
        if (ctx->pc != 0x224DECu) { return; }
    }
    ctx->pc = 0x224DECu;
label_224dec:
    // 0x224dec: 0xc78193b8  lwc1        $f1, -0x6C48($gp)
    ctx->pc = 0x224decu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294939576)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x224df0: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x224df0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x224df4: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x224df4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x224df8: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x224df8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x224dfc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x224dfcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x224e00: 0x0  nop
    ctx->pc = 0x224e00u;
    // NOP
    // 0x224e04: 0x46020843  div.s       $f1, $f1, $f2
    ctx->pc = 0x224e04u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[2]); }
    // 0x224e08: 0x0  nop
    ctx->pc = 0x224e08u;
    // NOP
    // 0x224e0c: 0x0  nop
    ctx->pc = 0x224e0cu;
    // NOP
    // 0x224e10: 0xc0a248c  jal         func_289230
    ctx->pc = 0x224E10u;
    SET_GPR_U32(ctx, 31, 0x224E18u);
    ctx->pc = 0x224E14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x224E10u;
            // 0x224e14: 0x46010302  mul.s       $f12, $f0, $f1 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x224E18u; }
        if (ctx->pc != 0x224E18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x224E18u; }
        if (ctx->pc != 0x224E18u) { return; }
    }
    ctx->pc = 0x224E18u;
label_224e18:
    // 0x224e18: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x224e18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x224e1c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x224e1cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x224e20: 0x8c26ce70  lw          $a2, -0x3190($at)
    ctx->pc = 0x224e20u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294954608)));
    // 0x224e24: 0x27b10054  addiu       $s1, $sp, 0x54
    ctx->pc = 0x224e24u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 84));
    // 0x224e28: 0x27b2005c  addiu       $s2, $sp, 0x5C
    ctx->pc = 0x224e28u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
    // 0x224e2c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x224e2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x224e30: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x224e30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x224e34: 0xafa60050  sw          $a2, 0x50($sp)
    ctx->pc = 0x224e34u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 6));
    // 0x224e38: 0x8c23ce74  lw          $v1, -0x318C($at)
    ctx->pc = 0x224e38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294954612)));
    // 0x224e3c: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x224e3cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x224e40: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x224e40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x224e44: 0x8c26ce78  lw          $a2, -0x3188($at)
    ctx->pc = 0x224e44u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294954616)));
    // 0x224e48: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x224e48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x224e4c: 0xafa60058  sw          $a2, 0x58($sp)
    ctx->pc = 0x224e4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 6));
    // 0x224e50: 0x8c23ce7c  lw          $v1, -0x3184($at)
    ctx->pc = 0x224e50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294954620)));
    // 0x224e54: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x224e54u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
    // 0x224e58: 0x878393b4  lh          $v1, -0x6C4C($gp)
    ctx->pc = 0x224e58u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294939572)));
    // 0x224e5c: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x224E5Cu;
    {
        const bool branch_taken_0x224e5c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x224E60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x224E5Cu;
            // 0x224e60: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x224e5c) {
            ctx->pc = 0x224E74u;
            goto label_224e74;
        }
    }
    ctx->pc = 0x224E64u;
    // 0x224e64: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x224E64u;
    {
        const bool branch_taken_0x224e64 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x224e64) {
            ctx->pc = 0x224E74u;
            goto label_224e74;
        }
    }
    ctx->pc = 0x224E6Cu;
    // 0x224e6c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x224E6Cu;
    {
        const bool branch_taken_0x224e6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x224E70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x224E6Cu;
            // 0x224e70: 0xc78193c0  lwc1        $f1, -0x6C40($gp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294939584)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x224e6c) {
            ctx->pc = 0x224E84u;
            goto label_224e84;
        }
    }
    ctx->pc = 0x224E74u;
label_224e74:
    // 0x224e74: 0x1462000f  bne         $v1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x224E74u;
    {
        const bool branch_taken_0x224e74 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x224E78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x224E74u;
            // 0x224e78: 0x27a40070  addiu       $a0, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x224e74) {
            ctx->pc = 0x224EB4u;
            goto label_224eb4;
        }
    }
    ctx->pc = 0x224E7Cu;
    // 0x224e7c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x224E7Cu;
    {
        const bool branch_taken_0x224e7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x224E80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x224E7Cu;
            // 0x224e80: 0x24100080  addiu       $s0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x224e7c) {
            ctx->pc = 0x224EB0u;
            goto label_224eb0;
        }
    }
    ctx->pc = 0x224E84u;
label_224e84:
    // 0x224e84: 0x3c024345  lui         $v0, 0x4345
    ctx->pc = 0x224e84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17221 << 16));
    // 0x224e88: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x224e88u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x224e8c: 0xc0a248c  jal         func_289230
    ctx->pc = 0x224E8Cu;
    SET_GPR_U32(ctx, 31, 0x224E94u);
    ctx->pc = 0x224E90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x224E8Cu;
            // 0x224e90: 0x46000b01  sub.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x224E94u; }
        if (ctx->pc != 0x224E94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x224E94u; }
        if (ctx->pc != 0x224E94u) { return; }
    }
    ctx->pc = 0x224E94u;
label_224e94:
    // 0x224e94: 0xc78193c4  lwc1        $f1, -0x6C3C($gp)
    ctx->pc = 0x224e94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294939588)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x224e98: 0xafa20050  sw          $v0, 0x50($sp)
    ctx->pc = 0x224e98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
    // 0x224e9c: 0x3c024320  lui         $v0, 0x4320
    ctx->pc = 0x224e9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17184 << 16));
    // 0x224ea0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x224ea0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x224ea4: 0xc0a248c  jal         func_289230
    ctx->pc = 0x224EA4u;
    SET_GPR_U32(ctx, 31, 0x224EACu);
    ctx->pc = 0x224EA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x224EA4u;
            // 0x224ea8: 0x46000b01  sub.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x224EACu; }
        if (ctx->pc != 0x224EACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x224EACu; }
        if (ctx->pc != 0x224EACu) { return; }
    }
    ctx->pc = 0x224EACu;
label_224eac:
    // 0x224eac: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x224eacu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_224eb0:
    // 0x224eb0: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x224eb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_224eb4:
    // 0x224eb4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x224eb4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x224eb8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x224eb8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x224ebc: 0x24070200  addiu       $a3, $zero, 0x200
    ctx->pc = 0x224ebcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x224ec0: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x224EC0u;
    SET_GPR_U32(ctx, 31, 0x224EC8u);
    ctx->pc = 0x224EC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x224EC0u;
            // 0x224ec4: 0x240801a0  addiu       $t0, $zero, 0x1A0 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 416));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x224EC8u; }
        if (ctx->pc != 0x224EC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x224EC8u; }
        if (ctx->pc != 0x224EC8u) { return; }
    }
    ctx->pc = 0x224EC8u;
label_224ec8:
    // 0x224ec8: 0x24070080  addiu       $a3, $zero, 0x80
    ctx->pc = 0x224ec8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x224ecc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x224eccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x224ed0: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x224ed0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x224ed4: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x224ed4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x224ed8: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x224ed8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x224edc: 0xe0482d  daddu       $t1, $a3, $zero
    ctx->pc = 0x224edcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x224ee0: 0x200502d  daddu       $t2, $s0, $zero
    ctx->pc = 0x224ee0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x224ee4: 0xc088fc0  jal         func_223F00
    ctx->pc = 0x224EE4u;
    SET_GPR_U32(ctx, 31, 0x224EECu);
    ctx->pc = 0x224EE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x224EE4u;
            // 0x224ee8: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x223F00u;
    if (runtime->hasFunction(0x223F00u)) {
        auto targetFn = runtime->lookupFunction(0x223F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x224EECu; }
        if (ctx->pc != 0x224EECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawMenuMainFrmImg__FRi9mgRect_i_9mgRect_i_iiiii_0x223f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x224EECu; }
        if (ctx->pc != 0x224EECu) { return; }
    }
    ctx->pc = 0x224EECu;
label_224eec:
    // 0x224eec: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x224eecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x224ef0: 0x24070080  addiu       $a3, $zero, 0x80
    ctx->pc = 0x224ef0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x224ef4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x224ef4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x224ef8: 0x200502d  daddu       $t2, $s0, $zero
    ctx->pc = 0x224ef8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x224efc: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x224efcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x224f00: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x224f00u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x224f04: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x224f04u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x224f08: 0xe0482d  daddu       $t1, $a3, $zero
    ctx->pc = 0x224f08u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x224f0c: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x224f0cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x224f10: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x224f10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x224f14: 0xc088fc0  jal         func_223F00
    ctx->pc = 0x224F14u;
    SET_GPR_U32(ctx, 31, 0x224F1Cu);
    ctx->pc = 0x224F18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x224F14u;
            // 0x224f18: 0xae420000  sw          $v0, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x223F00u;
    if (runtime->hasFunction(0x223F00u)) {
        auto targetFn = runtime->lookupFunction(0x223F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x224F1Cu; }
        if (ctx->pc != 0x224F1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawMenuMainFrmImg__FRi9mgRect_i_9mgRect_i_iiiii_0x223f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x224F1Cu; }
        if (ctx->pc != 0x224F1Cu) { return; }
    }
    ctx->pc = 0x224F1Cu;
label_224f1c:
    // 0x224f1c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x224f1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x224f20: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x224f20u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x224f24: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x224f24u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x224f28: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x224f28u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x224f2c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x224f2cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x224f30: 0x3e00008  jr          $ra
    ctx->pc = 0x224F30u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x224F34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x224F30u;
            // 0x224f34: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x224F38u;
}
