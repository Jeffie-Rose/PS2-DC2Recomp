#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetCPolyAttr__FP13MoveCheckInfoPfPffP6CCPolyii
// Address: 0x14ff30 - 0x15016c
void GetCPolyAttr__FP13MoveCheckInfoPfPffP6CCPolyii_0x14ff30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetCPolyAttr__FP13MoveCheckInfoPfPffP6CCPolyii_0x14ff30");
#endif

    switch (ctx->pc) {
        case 0x14ffa8u: goto label_14ffa8;
        case 0x14ffc0u: goto label_14ffc0;
        case 0x15000cu: goto label_15000c;
        case 0x150074u: goto label_150074;
        case 0x150080u: goto label_150080;
        case 0x1500b4u: goto label_1500b4;
        case 0x1500d4u: goto label_1500d4;
        default: break;
    }

    ctx->pc = 0x14ff30u;

    // 0x14ff30: 0x27bdfaa0  addiu       $sp, $sp, -0x560
    ctx->pc = 0x14ff30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294965920));
    // 0x14ff34: 0x240b0001  addiu       $t3, $zero, 0x1
    ctx->pc = 0x14ff34u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14ff38: 0xffbf00b0  sd          $ra, 0xB0($sp)
    ctx->pc = 0x14ff38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 31));
    // 0x14ff3c: 0x27a900c0  addiu       $t1, $sp, 0xC0
    ctx->pc = 0x14ff3cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x14ff40: 0x7fbe00a0  sq          $fp, 0xA0($sp)
    ctx->pc = 0x14ff40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 30));
    // 0x14ff44: 0x27aa0160  addiu       $t2, $sp, 0x160
    ctx->pc = 0x14ff44u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
    // 0x14ff48: 0x7fb70090  sq          $s7, 0x90($sp)
    ctx->pc = 0x14ff48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 23));
    // 0x14ff4c: 0x100f02d  daddu       $fp, $t0, $zero
    ctx->pc = 0x14ff4cu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14ff50: 0x7fb60080  sq          $s6, 0x80($sp)
    ctx->pc = 0x14ff50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 22));
    // 0x14ff54: 0x24080020  addiu       $t0, $zero, 0x20
    ctx->pc = 0x14ff54u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x14ff58: 0x7fb50070  sq          $s5, 0x70($sp)
    ctx->pc = 0x14ff58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 21));
    // 0x14ff5c: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x14ff5cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14ff60: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x14ff60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
    // 0x14ff64: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x14ff64u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14ff68: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x14ff68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x14ff6c: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x14ff6cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14ff70: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x14ff70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x14ff74: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x14ff74u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14ff78: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x14ff78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x14ff7c: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x14ff7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14ff80: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x14ff80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x14ff84: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x14ff84u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14ff88: 0xe7b40010  swc1        $f20, 0x10($sp)
    ctx->pc = 0x14ff88u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x14ff8c: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x14ff8cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14ff90: 0xac8000d4  sw          $zero, 0xD4($a0)
    ctx->pc = 0x14ff90u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 212), GPR_U32(ctx, 0));
    // 0x14ff94: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x14ff94u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x14ff98: 0xac8000f0  sw          $zero, 0xF0($a0)
    ctx->pc = 0x14ff98u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 240), GPR_U32(ctx, 0));
    // 0x14ff9c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x14ff9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14ffa0: 0xc0538ec  jal         func_14E3B0
    ctx->pc = 0x14FFA0u;
    SET_GPR_U32(ctx, 31, 0x14FFA8u);
    ctx->pc = 0x14FFA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14FFA0u;
            // 0x14ffa4: 0xffa00000  sd          $zero, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14E3B0u;
    if (runtime->hasFunction(0x14E3B0u)) {
        auto targetFn = runtime->lookupFunction(0x14E3B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14FFA8u; }
        if (ctx->pc != 0x14FFA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckHits__FP6CCPolyiPfPfiPiPA4_fii_0x14e3b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14FFA8u; }
        if (ctx->pc != 0x14FFA8u) { return; }
    }
    ctx->pc = 0x14FFA8u;
label_14ffa8:
    // 0x14ffa8: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x14ffa8u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14ffac: 0x17082a  slt         $at, $zero, $s7
    ctx->pc = 0x14ffacu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 23)) ? 1 : 0);
    // 0x14ffb0: 0x1020002c  beqz        $at, . + 4 + (0x2C << 2)
    ctx->pc = 0x14FFB0u;
    {
        const bool branch_taken_0x14ffb0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x14FFB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14FFB0u;
            // 0x14ffb4: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14ffb0) {
            ctx->pc = 0x150064u;
            goto label_150064;
        }
    }
    ctx->pc = 0x14FFB8u;
    // 0x14ffb8: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x14ffb8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14ffbc: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x14ffbcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_14ffc0:
    // 0x14ffc0: 0x23d1821  addu        $v1, $s1, $sp
    ctx->pc = 0x14ffc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 29)));
    // 0x14ffc4: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x14ffc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x14ffc8: 0x8c6400c0  lw          $a0, 0xC0($v1)
    ctx->pc = 0x14ffc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 192)));
    // 0x14ffcc: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x14ffccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x14ffd0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x14ffd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x14ffd4: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x14ffd4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x14ffd8: 0x2631821  addu        $v1, $s3, $v1
    ctx->pc = 0x14ffd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
    // 0x14ffdc: 0x84630044  lh          $v1, 0x44($v1)
    ctx->pc = 0x14ffdcu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 68)));
    // 0x14ffe0: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x14FFE0u;
    {
        const bool branch_taken_0x14ffe0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x14FFE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14FFE0u;
            // 0x14ffe4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14ffe0) {
            ctx->pc = 0x14FFF8u;
            goto label_14fff8;
        }
    }
    ctx->pc = 0x14FFE8u;
    // 0x14ffe8: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x14FFE8u;
    {
        const bool branch_taken_0x14ffe8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x14ffe8) {
            ctx->pc = 0x14FFF8u;
            goto label_14fff8;
        }
    }
    ctx->pc = 0x14FFF0u;
    // 0x14fff0: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x14FFF0u;
    {
        const bool branch_taken_0x14fff0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14fff0) {
            ctx->pc = 0x150050u;
            goto label_150050;
        }
    }
    ctx->pc = 0x14FFF8u;
label_14fff8:
    // 0x14fff8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x14fff8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14fffc: 0xaea200f0  sw          $v0, 0xF0($s5)
    ctx->pc = 0x14fffcu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 240), GPR_U32(ctx, 2));
    // 0x150000: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x150000u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x150004: 0xc04c018  jal         func_130060
    ctx->pc = 0x150004u;
    SET_GPR_U32(ctx, 31, 0x15000Cu);
    ctx->pc = 0x150008u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x150004u;
            // 0x150008: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x130060u;
    if (runtime->hasFunction(0x130060u)) {
        auto targetFn = runtime->lookupFunction(0x130060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15000Cu; }
        if (ctx->pc != 0x15000Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgDistVector__FPfPf_0x130060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15000Cu; }
        if (ctx->pc != 0x15000Cu) { return; }
    }
    ctx->pc = 0x15000Cu;
label_15000c:
    // 0x15000c: 0xe6a000f4  swc1        $f0, 0xF4($s5)
    ctx->pc = 0x15000cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 244), bits); }
    // 0x150010: 0xc6c10004  lwc1        $f1, 0x4($s6)
    ctx->pc = 0x150010u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x150014: 0xc6800004  lwc1        $f0, 0x4($s4)
    ctx->pc = 0x150014u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x150018: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x150018u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x15001c: 0x0  nop
    ctx->pc = 0x15001cu;
    // NOP
    // 0x150020: 0x45010007  bc1t        . + 4 + (0x7 << 2)
    ctx->pc = 0x150020u;
    {
        const bool branch_taken_0x150020 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x150020) {
            ctx->pc = 0x150040u;
            goto label_150040;
        }
    }
    ctx->pc = 0x150028u;
    // 0x150028: 0xc6a000f4  lwc1        $f0, 0xF4($s5)
    ctx->pc = 0x150028u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15002c: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x15002cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x150030: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x150030u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x150034: 0x0  nop
    ctx->pc = 0x150034u;
    // NOP
    // 0x150038: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x150038u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x15003c: 0xe6a000f4  swc1        $f0, 0xF4($s5)
    ctx->pc = 0x15003cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 244), bits); }
label_150040:
    // 0x150040: 0x25d1021  addu        $v0, $s2, $sp
    ctx->pc = 0x150040u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 29)));
    // 0x150044: 0x24420160  addiu       $v0, $v0, 0x160
    ctx->pc = 0x150044u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 352));
    // 0x150048: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x150048u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x15004c: 0x7ea20100  sq          $v0, 0x100($s5)
    ctx->pc = 0x15004cu;
    WRITE128(ADD32(GPR_U32(ctx, 21), 256), GPR_VEC(ctx, 2));
label_150050:
    // 0x150050: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x150050u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x150054: 0x217102a  slt         $v0, $s0, $s7
    ctx->pc = 0x150054u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 23)) ? 1 : 0);
    // 0x150058: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x150058u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x15005c: 0x1440ffd8  bnez        $v0, . + 4 + (-0x28 << 2)
    ctx->pc = 0x15005Cu;
    {
        const bool branch_taken_0x15005c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x150060u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15005Cu;
            // 0x150060: 0x26520010  addiu       $s2, $s2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15005c) {
            ctx->pc = 0x14FFC0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_14ffc0;
        }
    }
    ctx->pc = 0x150064u;
label_150064:
    // 0x150064: 0x0  nop
    ctx->pc = 0x150064u;
    // NOP
    // 0x150068: 0x27a40140  addiu       $a0, $sp, 0x140
    ctx->pc = 0x150068u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x15006c: 0xc041c5c  jal         func_107170
    ctx->pc = 0x15006Cu;
    SET_GPR_U32(ctx, 31, 0x150074u);
    ctx->pc = 0x150070u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15006Cu;
            // 0x150070: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107170u;
    if (runtime->hasFunction(0x107170u)) {
        auto targetFn = runtime->lookupFunction(0x107170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x150074u; }
        if (ctx->pc != 0x150074u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyVector_0x107170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x150074u; }
        if (ctx->pc != 0x150074u) { return; }
    }
    ctx->pc = 0x150074u;
label_150074:
    // 0x150074: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x150074u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x150078: 0xc041c5c  jal         func_107170
    ctx->pc = 0x150078u;
    SET_GPR_U32(ctx, 31, 0x150080u);
    ctx->pc = 0x15007Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x150078u;
            // 0x15007c: 0x27a40150  addiu       $a0, $sp, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107170u;
    if (runtime->hasFunction(0x107170u)) {
        auto targetFn = runtime->lookupFunction(0x107170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x150080u; }
        if (ctx->pc != 0x150080u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyVector_0x107170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x150080u; }
        if (ctx->pc != 0x150080u) { return; }
    }
    ctx->pc = 0x150080u;
label_150080:
    // 0x150080: 0xc7a00144  lwc1        $f0, 0x144($sp)
    ctx->pc = 0x150080u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 324)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x150084: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x150084u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x150088: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x150088u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15008c: 0x27a60140  addiu       $a2, $sp, 0x140
    ctx->pc = 0x15008cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x150090: 0x27a70150  addiu       $a3, $sp, 0x150
    ctx->pc = 0x150090u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    // 0x150094: 0x24080020  addiu       $t0, $zero, 0x20
    ctx->pc = 0x150094u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x150098: 0x27a900c0  addiu       $t1, $sp, 0xC0
    ctx->pc = 0x150098u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x15009c: 0x27aa0160  addiu       $t2, $sp, 0x160
    ctx->pc = 0x15009cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
    // 0x1500a0: 0x240b0001  addiu       $t3, $zero, 0x1
    ctx->pc = 0x1500a0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1500a4: 0x46140000  add.s       $f0, $f0, $f20
    ctx->pc = 0x1500a4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
    // 0x1500a8: 0xe7a00144  swc1        $f0, 0x144($sp)
    ctx->pc = 0x1500a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 324), bits); }
    // 0x1500ac: 0xc0538ec  jal         func_14E3B0
    ctx->pc = 0x1500ACu;
    SET_GPR_U32(ctx, 31, 0x1500B4u);
    ctx->pc = 0x1500B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1500ACu;
            // 0x1500b0: 0xffa00000  sd          $zero, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14E3B0u;
    if (runtime->hasFunction(0x14E3B0u)) {
        auto targetFn = runtime->lookupFunction(0x14E3B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1500B4u; }
        if (ctx->pc != 0x1500B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckHits__FP6CCPolyiPfPfiPiPA4_fii_0x14e3b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1500B4u; }
        if (ctx->pc != 0x1500B4u) { return; }
    }
    ctx->pc = 0x1500B4u;
label_1500b4:
    // 0x1500b4: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x1500B4u;
    {
        const bool branch_taken_0x1500b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1500B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1500B4u;
            // 0x1500b8: 0x2082a  slt         $at, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1500b4) {
            ctx->pc = 0x150138u;
            goto label_150138;
        }
    }
    ctx->pc = 0x1500BCu;
    // 0x1500bc: 0x1020001d  beqz        $at, . + 4 + (0x1D << 2)
    ctx->pc = 0x1500BCu;
    {
        const bool branch_taken_0x1500bc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1500C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1500BCu;
            // 0x1500c0: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1500bc) {
            ctx->pc = 0x150134u;
            goto label_150134;
        }
    }
    ctx->pc = 0x1500C4u;
    // 0x1500c4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1500c4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1500c8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1500c8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1500cc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1500ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1500d0: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1500d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_1500d4:
    // 0x1500d4: 0xfd1821  addu        $v1, $a3, $sp
    ctx->pc = 0x1500d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 29)));
    // 0x1500d8: 0x8c6600c0  lw          $a2, 0xC0($v1)
    ctx->pc = 0x1500d8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 192)));
    // 0x1500dc: 0x61880  sll         $v1, $a2, 2
    ctx->pc = 0x1500dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x1500e0: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x1500e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x1500e4: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1500e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1500e8: 0x2631821  addu        $v1, $s3, $v1
    ctx->pc = 0x1500e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
    // 0x1500ec: 0x84630044  lh          $v1, 0x44($v1)
    ctx->pc = 0x1500ecu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 68)));
    // 0x1500f0: 0x10650005  beq         $v1, $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1500F0u;
    {
        const bool branch_taken_0x1500f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        if (branch_taken_0x1500f0) {
            ctx->pc = 0x150108u;
            goto label_150108;
        }
    }
    ctx->pc = 0x1500F8u;
    // 0x1500f8: 0x10640003  beq         $v1, $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1500F8u;
    {
        const bool branch_taken_0x1500f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x1500f8) {
            ctx->pc = 0x150108u;
            goto label_150108;
        }
    }
    ctx->pc = 0x150100u;
    // 0x150100: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x150100u;
    {
        const bool branch_taken_0x150100 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x150100) {
            ctx->pc = 0x15011Cu;
            goto label_15011c;
        }
    }
    ctx->pc = 0x150108u;
label_150108:
    // 0x150108: 0x11d1821  addu        $v1, $t0, $sp
    ctx->pc = 0x150108u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 29)));
    // 0x15010c: 0xaea400d4  sw          $a0, 0xD4($s5)
    ctx->pc = 0x15010cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 212), GPR_U32(ctx, 4));
    // 0x150110: 0x24630160  addiu       $v1, $v1, 0x160
    ctx->pc = 0x150110u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 352));
    // 0x150114: 0x78630000  lq          $v1, 0x0($v1)
    ctx->pc = 0x150114u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x150118: 0x7ea300e0  sq          $v1, 0xE0($s5)
    ctx->pc = 0x150118u;
    WRITE128(ADD32(GPR_U32(ctx, 21), 224), GPR_VEC(ctx, 3));
label_15011c:
    // 0x15011c: 0x0  nop
    ctx->pc = 0x15011cu;
    // NOP
    // 0x150120: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x150120u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x150124: 0x122182a  slt         $v1, $t1, $v0
    ctx->pc = 0x150124u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 9) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x150128: 0x24e70004  addiu       $a3, $a3, 0x4
    ctx->pc = 0x150128u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
    // 0x15012c: 0x1460ffe9  bnez        $v1, . + 4 + (-0x17 << 2)
    ctx->pc = 0x15012Cu;
    {
        const bool branch_taken_0x15012c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x150130u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15012Cu;
            // 0x150130: 0x25080010  addiu       $t0, $t0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15012c) {
            ctx->pc = 0x1500D4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1500d4;
        }
    }
    ctx->pc = 0x150134u;
label_150134:
    // 0x150134: 0x0  nop
    ctx->pc = 0x150134u;
    // NOP
label_150138:
    // 0x150138: 0xdfbf00b0  ld          $ra, 0xB0($sp)
    ctx->pc = 0x150138u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x15013c: 0xc7b40010  lwc1        $f20, 0x10($sp)
    ctx->pc = 0x15013cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x150140: 0x7bbe00a0  lq          $fp, 0xA0($sp)
    ctx->pc = 0x150140u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x150144: 0x7bb70090  lq          $s7, 0x90($sp)
    ctx->pc = 0x150144u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x150148: 0x7bb60080  lq          $s6, 0x80($sp)
    ctx->pc = 0x150148u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x15014c: 0x7bb50070  lq          $s5, 0x70($sp)
    ctx->pc = 0x15014cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x150150: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x150150u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x150154: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x150154u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x150158: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x150158u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x15015c: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x15015cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x150160: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x150160u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x150164: 0x3e00008  jr          $ra
    ctx->pc = 0x150164u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x150168u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x150164u;
            // 0x150168: 0x27bd0560  addiu       $sp, $sp, 0x560 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1376));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x15016Cu;
}
