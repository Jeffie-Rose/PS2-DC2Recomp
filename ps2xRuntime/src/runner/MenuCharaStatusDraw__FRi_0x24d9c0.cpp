#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: MenuCharaStatusDraw__FRi
// Address: 0x24d9c0 - 0x24dc4c
void MenuCharaStatusDraw__FRi_0x24d9c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("MenuCharaStatusDraw__FRi_0x24d9c0");
#endif

    switch (ctx->pc) {
        case 0x24da24u: goto label_24da24;
        case 0x24da58u: goto label_24da58;
        case 0x24da84u: goto label_24da84;
        case 0x24dac4u: goto label_24dac4;
        case 0x24dae8u: goto label_24dae8;
        case 0x24db68u: goto label_24db68;
        case 0x24db94u: goto label_24db94;
        case 0x24dbd4u: goto label_24dbd4;
        case 0x24dbf8u: goto label_24dbf8;
        default: break;
    }

    ctx->pc = 0x24d9c0u;

    // 0x24d9c0: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x24d9c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x24d9c4: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x24d9c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x24d9c8: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x24d9c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x24d9cc: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x24d9ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x24d9d0: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x24d9d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x24d9d4: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x24d9d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x24d9d8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x24d9d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x24d9dc: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x24d9dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x24d9e0: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x24d9e0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x24d9e4: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x24d9e4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x24d9e8: 0x8f8395b0  lw          $v1, -0x6A50($gp)
    ctx->pc = 0x24d9e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940080)));
    // 0x24d9ec: 0x1060008c  beqz        $v1, . + 4 + (0x8C << 2)
    ctx->pc = 0x24D9ECu;
    {
        const bool branch_taken_0x24d9ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x24D9F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24D9ECu;
            // 0x24d9f0: 0x80a82d  daddu       $s5, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24d9ec) {
            ctx->pc = 0x24DC20u;
            goto label_24dc20;
        }
    }
    ctx->pc = 0x24D9F4u;
    // 0x24d9f4: 0x838395ac  lb          $v1, -0x6A54($gp)
    ctx->pc = 0x24d9f4u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294940076)));
    // 0x24d9f8: 0x14600088  bnez        $v1, . + 4 + (0x88 << 2)
    ctx->pc = 0x24D9F8u;
    {
        const bool branch_taken_0x24d9f8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x24d9f8) {
            ctx->pc = 0x24DC1Cu;
            goto label_24dc1c;
        }
    }
    ctx->pc = 0x24DA00u;
    // 0x24da00: 0x8f8595c0  lw          $a1, -0x6A40($gp)
    ctx->pc = 0x24da00u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940096)));
    // 0x24da04: 0x84a40110  lh          $a0, 0x110($a1)
    ctx->pc = 0x24da04u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 272)));
    // 0x24da08: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x24DA08u;
    {
        const bool branch_taken_0x24da08 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x24DA0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24DA08u;
            // 0x24da0c: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24da08) {
            ctx->pc = 0x24DA18u;
            goto label_24da18;
        }
    }
    ctx->pc = 0x24DA10u;
    // 0x24da10: 0x1483003e  bne         $a0, $v1, . + 4 + (0x3E << 2)
    ctx->pc = 0x24DA10u;
    {
        const bool branch_taken_0x24da10 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x24da10) {
            ctx->pc = 0x24DB0Cu;
            goto label_24db0c;
        }
    }
    ctx->pc = 0x24DA18u;
label_24da18:
    // 0x24da18: 0x8f8494ac  lw          $a0, -0x6B54($gp)
    ctx->pc = 0x24da18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939820)));
    // 0x24da1c: 0xc0670b0  jal         func_19C2C0
    ctx->pc = 0x24DA1Cu;
    SET_GPR_U32(ctx, 31, 0x24DA24u);
    ctx->pc = 0x24DA20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24DA1Cu;
            // 0x24da20: 0x84a50114  lh          $a1, 0x114($a1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 276)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19C2C0u;
    if (runtime->hasFunction(0x19C2C0u)) {
        auto targetFn = runtime->lookupFunction(0x19C2C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24DA24u; }
        if (ctx->pc != 0x24DA24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCharaStatusAttirbute__16CUserDataManagerFi_0x19c2c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24DA24u; }
        if (ctx->pc != 0x24DA24u) { return; }
    }
    ctx->pc = 0x24DA24u;
label_24da24:
    // 0x24da24: 0x8f8495c0  lw          $a0, -0x6A40($gp)
    ctx->pc = 0x24da24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940096)));
    // 0x24da28: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x24da28u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24da2c: 0x84830114  lh          $v1, 0x114($a0)
    ctx->pc = 0x24da2cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 276)));
    // 0x24da30: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x24da30u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x24da34: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x24da34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x24da38: 0x12200034  beqz        $s1, . + 4 + (0x34 << 2)
    ctx->pc = 0x24DA38u;
    {
        const bool branch_taken_0x24da38 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x24DA3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24DA38u;
            // 0x24da3c: 0x8c700180  lw          $s0, 0x180($v1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 384)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24da38) {
            ctx->pc = 0x24DB0Cu;
            goto label_24db0c;
        }
    }
    ctx->pc = 0x24DA40u;
    // 0x24da40: 0x12000032  beqz        $s0, . + 4 + (0x32 << 2)
    ctx->pc = 0x24DA40u;
    {
        const bool branch_taken_0x24da40 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x24da40) {
            ctx->pc = 0x24DB0Cu;
            goto label_24db0c;
        }
    }
    ctx->pc = 0x24DA48u;
    // 0x24da48: 0x8f8295b0  lw          $v0, -0x6A50($gp)
    ctx->pc = 0x24da48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940080)));
    // 0x24da4c: 0x84450000  lh          $a1, 0x0($v0)
    ctx->pc = 0x24da4cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x24da50: 0xc08878c  jal         func_221E30
    ctx->pc = 0x24DA50u;
    SET_GPR_U32(ctx, 31, 0x24DA58u);
    ctx->pc = 0x24DA54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24DA50u;
            // 0x24da54: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x221E30u;
    if (runtime->hasFunction(0x221E30u)) {
        auto targetFn = runtime->lookupFunction(0x221E30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24DA58u; }
        if (ctx->pc != 0x24DA58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuReloadTexture__FRii_0x221e30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24DA58u; }
        if (ctx->pc != 0x24DA58u) { return; }
    }
    ctx->pc = 0x24DA58u;
label_24da58:
    // 0x24da58: 0x3c034180  lui         $v1, 0x4180
    ctx->pc = 0x24da58u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16768 << 16));
    // 0x24da5c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x24da5cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24da60: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x24da60u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x24da64: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x24da64u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24da68: 0xc603000c  lwc1        $f3, 0xC($s0)
    ctx->pc = 0x24da68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x24da6c: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x24da6cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24da70: 0x3c034348  lui         $v1, 0x4348
    ctx->pc = 0x24da70u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17224 << 16));
    // 0x24da74: 0xc6010010  lwc1        $f1, 0x10($s0)
    ctx->pc = 0x24da74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24da78: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x24da78u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24da7c: 0x46031500  add.s       $f20, $f2, $f3
    ctx->pc = 0x24da7cu;
    ctx->f[20] = FPU_ADD_S(ctx->f[2], ctx->f[3]);
    // 0x24da80: 0x46000d41  sub.s       $f21, $f1, $f0
    ctx->pc = 0x24da80u;
    ctx->f[21] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_24da84:
    // 0x24da84: 0x3c030035  lui         $v1, 0x35
    ctx->pc = 0x24da84u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)53 << 16));
    // 0x24da88: 0x246313d0  addiu       $v1, $v1, 0x13D0
    ctx->pc = 0x24da88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 5072));
    // 0x24da8c: 0x731821  addu        $v1, $v1, $s3
    ctx->pc = 0x24da8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x24da90: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x24da90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x24da94: 0x2231824  and         $v1, $s1, $v1
    ctx->pc = 0x24da94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & GPR_U64(ctx, 3));
    // 0x24da98: 0x10600017  beqz        $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x24DA98u;
    {
        const bool branch_taken_0x24da98 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x24da98) {
            ctx->pc = 0x24DAF8u;
            goto label_24daf8;
        }
    }
    ctx->pc = 0x24DAA0u;
    // 0x24daa0: 0x3c020035  lui         $v0, 0x35
    ctx->pc = 0x24daa0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
    // 0x24daa4: 0x24070018  addiu       $a3, $zero, 0x18
    ctx->pc = 0x24daa4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x24daa8: 0x244213f0  addiu       $v0, $v0, 0x13F0
    ctx->pc = 0x24daa8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5104));
    // 0x24daac: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x24daacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x24dab0: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x24dab0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x24dab4: 0x80450000  lb          $a1, 0x0($v0)
    ctx->pc = 0x24dab4u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x24dab8: 0x80460001  lb          $a2, 0x1($v0)
    ctx->pc = 0x24dab8u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
    // 0x24dabc: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x24DABCu;
    SET_GPR_U32(ctx, 31, 0x24DAC4u);
    ctx->pc = 0x24DAC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24DABCu;
            // 0x24dac0: 0xe0402d  daddu       $t0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24DAC4u; }
        if (ctx->pc != 0x24DAC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24DAC4u; }
        if (ctx->pc != 0x24DAC4u) { return; }
    }
    ctx->pc = 0x24DAC4u;
label_24dac4:
    // 0x24dac4: 0x92060058  lbu         $a2, 0x58($s0)
    ctx->pc = 0x24dac4u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 88)));
    // 0x24dac8: 0x24070080  addiu       $a3, $zero, 0x80
    ctx->pc = 0x24dac8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x24dacc: 0x8f8495b0  lw          $a0, -0x6A50($gp)
    ctx->pc = 0x24daccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940080)));
    // 0x24dad0: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x24dad0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x24dad4: 0x4600ab46  mov.s       $f13, $f21
    ctx->pc = 0x24dad4u;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
    // 0x24dad8: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x24dad8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x24dadc: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x24dadcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24dae0: 0xc087fcc  jal         func_21FF30
    ctx->pc = 0x24DAE0u;
    SET_GPR_U32(ctx, 31, 0x24DAE8u);
    ctx->pc = 0x24DAE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24DAE0u;
            // 0x24dae4: 0xe0482d  daddu       $t1, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21FF30u;
    if (runtime->hasFunction(0x21FF30u)) {
        auto targetFn = runtime->lookupFunction(0x21FF30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24DAE8u; }
        if (ctx->pc != 0x24DAE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PrimQuad__FP10mgCTextureff9mgRect_i_iiii_0x21ff30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24DAE8u; }
        if (ctx->pc != 0x24DAE8u) { return; }
    }
    ctx->pc = 0x24DAE8u;
label_24dae8:
    // 0x24dae8: 0x3c0341c0  lui         $v1, 0x41C0
    ctx->pc = 0x24dae8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16832 << 16));
    // 0x24daec: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x24daecu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24daf0: 0x0  nop
    ctx->pc = 0x24daf0u;
    // NOP
    // 0x24daf4: 0x4600a500  add.s       $f20, $f20, $f0
    ctx->pc = 0x24daf4u;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
label_24daf8:
    // 0x24daf8: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x24daf8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x24dafc: 0x2a430007  slti        $v1, $s2, 0x7
    ctx->pc = 0x24dafcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)7) ? 1 : 0);
    // 0x24db00: 0x26730004  addiu       $s3, $s3, 0x4
    ctx->pc = 0x24db00u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
    // 0x24db04: 0x1460ffdf  bnez        $v1, . + 4 + (-0x21 << 2)
    ctx->pc = 0x24DB04u;
    {
        const bool branch_taken_0x24db04 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x24DB08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24DB04u;
            // 0x24db08: 0x26940002  addiu       $s4, $s4, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24db04) {
            ctx->pc = 0x24DA84u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_24da84;
        }
    }
    ctx->pc = 0x24DB0Cu;
label_24db0c:
    // 0x24db0c: 0x0  nop
    ctx->pc = 0x24db0cu;
    // NOP
    // 0x24db10: 0x8f8595c0  lw          $a1, -0x6A40($gp)
    ctx->pc = 0x24db10u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940096)));
    // 0x24db14: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x24db14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x24db18: 0x84a40110  lh          $a0, 0x110($a1)
    ctx->pc = 0x24db18u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 272)));
    // 0x24db1c: 0x1483003f  bne         $a0, $v1, . + 4 + (0x3F << 2)
    ctx->pc = 0x24DB1Cu;
    {
        const bool branch_taken_0x24db1c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x24db1c) {
            ctx->pc = 0x24DC1Cu;
            goto label_24dc1c;
        }
    }
    ctx->pc = 0x24DB24u;
    // 0x24db24: 0x8ca6017c  lw          $a2, 0x17C($a1)
    ctx->pc = 0x24db24u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 380)));
    // 0x24db28: 0x10c00007  beqz        $a2, . + 4 + (0x7 << 2)
    ctx->pc = 0x24DB28u;
    {
        const bool branch_taken_0x24db28 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x24DB2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24DB28u;
            // 0x24db2c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24db28) {
            ctx->pc = 0x24DB48u;
            goto label_24db48;
        }
    }
    ctx->pc = 0x24DB30u;
    // 0x24db30: 0x84c40000  lh          $a0, 0x0($a2)
    ctx->pc = 0x24db30u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x24db34: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x24db34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x24db38: 0x14830003  bne         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x24DB38u;
    {
        const bool branch_taken_0x24db38 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x24db38) {
            ctx->pc = 0x24DB48u;
            goto label_24db48;
        }
    }
    ctx->pc = 0x24DB40u;
    // 0x24db40: 0x8cd00038  lw          $s0, 0x38($a2)
    ctx->pc = 0x24db40u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 56)));
    // 0x24db44: 0x0  nop
    ctx->pc = 0x24db44u;
    // NOP
label_24db48:
    // 0x24db48: 0x12000034  beqz        $s0, . + 4 + (0x34 << 2)
    ctx->pc = 0x24DB48u;
    {
        const bool branch_taken_0x24db48 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x24DB4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24DB48u;
            // 0x24db4c: 0x8cb10188  lw          $s1, 0x188($a1) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 392)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24db48) {
            ctx->pc = 0x24DC1Cu;
            goto label_24dc1c;
        }
    }
    ctx->pc = 0x24DB50u;
    // 0x24db50: 0x12200032  beqz        $s1, . + 4 + (0x32 << 2)
    ctx->pc = 0x24DB50u;
    {
        const bool branch_taken_0x24db50 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x24db50) {
            ctx->pc = 0x24DC1Cu;
            goto label_24dc1c;
        }
    }
    ctx->pc = 0x24DB58u;
    // 0x24db58: 0x8f8295b0  lw          $v0, -0x6A50($gp)
    ctx->pc = 0x24db58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940080)));
    // 0x24db5c: 0x84450000  lh          $a1, 0x0($v0)
    ctx->pc = 0x24db5cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x24db60: 0xc08878c  jal         func_221E30
    ctx->pc = 0x24DB60u;
    SET_GPR_U32(ctx, 31, 0x24DB68u);
    ctx->pc = 0x24DB64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24DB60u;
            // 0x24db64: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x221E30u;
    if (runtime->hasFunction(0x221E30u)) {
        auto targetFn = runtime->lookupFunction(0x221E30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24DB68u; }
        if (ctx->pc != 0x24DB68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuReloadTexture__FRii_0x221e30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24DB68u; }
        if (ctx->pc != 0x24DB68u) { return; }
    }
    ctx->pc = 0x24DB68u;
label_24db68:
    // 0x24db68: 0x3c0341d0  lui         $v1, 0x41D0
    ctx->pc = 0x24db68u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16848 << 16));
    // 0x24db6c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x24db6cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24db70: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x24db70u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x24db74: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x24db74u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24db78: 0xc623000c  lwc1        $f3, 0xC($s1)
    ctx->pc = 0x24db78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x24db7c: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x24db7cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24db80: 0x3c034228  lui         $v1, 0x4228
    ctx->pc = 0x24db80u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16936 << 16));
    // 0x24db84: 0xc6210010  lwc1        $f1, 0x10($s1)
    ctx->pc = 0x24db84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24db88: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x24db88u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24db8c: 0x46031500  add.s       $f20, $f2, $f3
    ctx->pc = 0x24db8cu;
    ctx->f[20] = FPU_ADD_S(ctx->f[2], ctx->f[3]);
    // 0x24db90: 0x46000d41  sub.s       $f21, $f1, $f0
    ctx->pc = 0x24db90u;
    ctx->f[21] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_24db94:
    // 0x24db94: 0x3c030035  lui         $v1, 0x35
    ctx->pc = 0x24db94u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)53 << 16));
    // 0x24db98: 0x24631420  addiu       $v1, $v1, 0x1420
    ctx->pc = 0x24db98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 5152));
    // 0x24db9c: 0x731821  addu        $v1, $v1, $s3
    ctx->pc = 0x24db9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x24dba0: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x24dba0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x24dba4: 0x2031824  and         $v1, $s0, $v1
    ctx->pc = 0x24dba4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & GPR_U64(ctx, 3));
    // 0x24dba8: 0x10600017  beqz        $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x24DBA8u;
    {
        const bool branch_taken_0x24dba8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x24dba8) {
            ctx->pc = 0x24DC08u;
            goto label_24dc08;
        }
    }
    ctx->pc = 0x24DBB0u;
    // 0x24dbb0: 0x3c020035  lui         $v0, 0x35
    ctx->pc = 0x24dbb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
    // 0x24dbb4: 0x24070015  addiu       $a3, $zero, 0x15
    ctx->pc = 0x24dbb4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x24dbb8: 0x24421400  addiu       $v0, $v0, 0x1400
    ctx->pc = 0x24dbb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5120));
    // 0x24dbbc: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x24dbbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x24dbc0: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x24dbc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x24dbc4: 0x80450000  lb          $a1, 0x0($v0)
    ctx->pc = 0x24dbc4u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x24dbc8: 0x80460001  lb          $a2, 0x1($v0)
    ctx->pc = 0x24dbc8u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
    // 0x24dbcc: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x24DBCCu;
    SET_GPR_U32(ctx, 31, 0x24DBD4u);
    ctx->pc = 0x24DBD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24DBCCu;
            // 0x24dbd0: 0xe0402d  daddu       $t0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24DBD4u; }
        if (ctx->pc != 0x24DBD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24DBD4u; }
        if (ctx->pc != 0x24DBD4u) { return; }
    }
    ctx->pc = 0x24DBD4u;
label_24dbd4:
    // 0x24dbd4: 0x92260058  lbu         $a2, 0x58($s1)
    ctx->pc = 0x24dbd4u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 88)));
    // 0x24dbd8: 0x24070080  addiu       $a3, $zero, 0x80
    ctx->pc = 0x24dbd8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x24dbdc: 0x8f8495b0  lw          $a0, -0x6A50($gp)
    ctx->pc = 0x24dbdcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940080)));
    // 0x24dbe0: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x24dbe0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x24dbe4: 0x4600ab46  mov.s       $f13, $f21
    ctx->pc = 0x24dbe4u;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
    // 0x24dbe8: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x24dbe8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x24dbec: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x24dbecu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24dbf0: 0xc087fcc  jal         func_21FF30
    ctx->pc = 0x24DBF0u;
    SET_GPR_U32(ctx, 31, 0x24DBF8u);
    ctx->pc = 0x24DBF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24DBF0u;
            // 0x24dbf4: 0xe0482d  daddu       $t1, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21FF30u;
    if (runtime->hasFunction(0x21FF30u)) {
        auto targetFn = runtime->lookupFunction(0x21FF30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24DBF8u; }
        if (ctx->pc != 0x24DBF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PrimQuad__FP10mgCTextureff9mgRect_i_iiii_0x21ff30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24DBF8u; }
        if (ctx->pc != 0x24DBF8u) { return; }
    }
    ctx->pc = 0x24DBF8u;
label_24dbf8:
    // 0x24dbf8: 0x3c0341c0  lui         $v1, 0x41C0
    ctx->pc = 0x24dbf8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16832 << 16));
    // 0x24dbfc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x24dbfcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24dc00: 0x0  nop
    ctx->pc = 0x24dc00u;
    // NOP
    // 0x24dc04: 0x4600a500  add.s       $f20, $f20, $f0
    ctx->pc = 0x24dc04u;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
label_24dc08:
    // 0x24dc08: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x24dc08u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x24dc0c: 0x2a43000c  slti        $v1, $s2, 0xC
    ctx->pc = 0x24dc0cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)12) ? 1 : 0);
    // 0x24dc10: 0x26730004  addiu       $s3, $s3, 0x4
    ctx->pc = 0x24dc10u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
    // 0x24dc14: 0x1460ffdf  bnez        $v1, . + 4 + (-0x21 << 2)
    ctx->pc = 0x24DC14u;
    {
        const bool branch_taken_0x24dc14 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x24DC18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24DC14u;
            // 0x24dc18: 0x26940002  addiu       $s4, $s4, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24dc14) {
            ctx->pc = 0x24DB94u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_24db94;
        }
    }
    ctx->pc = 0x24DC1Cu;
label_24dc1c:
    // 0x24dc1c: 0x0  nop
    ctx->pc = 0x24dc1cu;
    // NOP
label_24dc20:
    // 0x24dc20: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x24dc20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x24dc24: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x24dc24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x24dc28: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x24dc28u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x24dc2c: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x24dc2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x24dc30: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x24dc30u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x24dc34: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x24dc34u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x24dc38: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x24dc38u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x24dc3c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x24dc3cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x24dc40: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x24dc40u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x24dc44: 0x3e00008  jr          $ra
    ctx->pc = 0x24DC44u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24DC48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24DC44u;
            // 0x24dc48: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x24DC4Cu;
}
