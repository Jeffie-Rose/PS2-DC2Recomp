#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: CalcMoveSpeed__9CAquaFishFf
// Address: 0x20d960 - 0x20db80
void CalcMoveSpeed__9CAquaFishFf_0x20d960(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CalcMoveSpeed__9CAquaFishFf_0x20d960");
#endif

    switch (ctx->pc) {
        case 0x20d9d4u: goto label_20d9d4;
        default: break;
    }

    ctx->pc = 0x20d960u;

    // 0x20d960: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x20d960u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x20d964: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x20d964u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x20d968: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x20d968u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x20d96c: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x20d96cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x20d970: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x20d970u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x20d974: 0x8c820938  lw          $v0, 0x938($a0)
    ctx->pc = 0x20d974u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 2360)));
    // 0x20d978: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x20D978u;
    {
        const bool branch_taken_0x20d978 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20D97Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20D978u;
            // 0x20d97c: 0x46006546  mov.s       $f21, $f12 (Delay Slot)
        ctx->f[21] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x20d978) {
            ctx->pc = 0x20D988u;
            goto label_20d988;
        }
    }
    ctx->pc = 0x20D980u;
    // 0x20d980: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x20D980u;
    {
        const bool branch_taken_0x20d980 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20D984u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20D980u;
            // 0x20d984: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20d980) {
            ctx->pc = 0x20D98Cu;
            goto label_20d98c;
        }
    }
    ctx->pc = 0x20D988u;
label_20d988:
    // 0x20d988: 0x24500010  addiu       $s0, $v0, 0x10
    ctx->pc = 0x20d988u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_20d98c:
    // 0x20d98c: 0x848306ae  lh          $v1, 0x6AE($a0)
    ctx->pc = 0x20d98cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 1710)));
    // 0x20d990: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x20d990u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
    // 0x20d994: 0x4482a000  mtc1        $v0, $f20
    ctx->pc = 0x20d994u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x20d998: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x20d998u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x20d99c: 0x10620056  beq         $v1, $v0, . + 4 + (0x56 << 2)
    ctx->pc = 0x20D99Cu;
    {
        const bool branch_taken_0x20d99c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x20D9A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20D99Cu;
            // 0x20d9a0: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20d99c) {
            ctx->pc = 0x20DAF8u;
            goto label_20daf8;
        }
    }
    ctx->pc = 0x20D9A4u;
    // 0x20d9a4: 0x10620054  beq         $v1, $v0, . + 4 + (0x54 << 2)
    ctx->pc = 0x20D9A4u;
    {
        const bool branch_taken_0x20d9a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x20D9A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20D9A4u;
            // 0x20d9a8: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20d9a4) {
            ctx->pc = 0x20DAF8u;
            goto label_20daf8;
        }
    }
    ctx->pc = 0x20D9ACu;
    // 0x20d9ac: 0x1062003b  beq         $v1, $v0, . + 4 + (0x3B << 2)
    ctx->pc = 0x20D9ACu;
    {
        const bool branch_taken_0x20d9ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x20D9B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20D9ACu;
            // 0x20d9b0: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20d9ac) {
            ctx->pc = 0x20DA9Cu;
            goto label_20da9c;
        }
    }
    ctx->pc = 0x20D9B4u;
    // 0x20d9b4: 0x10620020  beq         $v1, $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x20D9B4u;
    {
        const bool branch_taken_0x20d9b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x20D9B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20D9B4u;
            // 0x20d9b8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20d9b4) {
            ctx->pc = 0x20DA38u;
            goto label_20da38;
        }
    }
    ctx->pc = 0x20D9BCu;
    // 0x20d9bc: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x20D9BCu;
    {
        const bool branch_taken_0x20d9bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x20D9C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20D9BCu;
            // 0x20d9c0: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20d9bc) {
            ctx->pc = 0x20D9CCu;
            goto label_20d9cc;
        }
    }
    ctx->pc = 0x20D9C4u;
    // 0x20d9c4: 0x10000062  b           . + 4 + (0x62 << 2)
    ctx->pc = 0x20D9C4u;
    {
        const bool branch_taken_0x20d9c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x20d9c4) {
            ctx->pc = 0x20DB50u;
            goto label_20db50;
        }
    }
    ctx->pc = 0x20D9CCu;
label_20d9cc:
    // 0x20d9cc: 0xc0941b0  jal         func_2506C0
    ctx->pc = 0x20D9CCu;
    SET_GPR_U32(ctx, 31, 0x20D9D4u);
    ctx->pc = 0x2506C0u;
    if (runtime->hasFunction(0x2506C0u)) {
        auto targetFn = runtime->lookupFunction(0x2506C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20D9D4u; }
        if (ctx->pc != 0x20D9D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetRandI__Fi_0x2506c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20D9D4u; }
        if (ctx->pc != 0x20D9D4u) { return; }
    }
    ctx->pc = 0x20D9D4u;
label_20d9d4:
    // 0x20d9d4: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x20d9d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x20d9d8: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x20d9d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x20d9dc: 0x94420026  lhu         $v0, 0x26($v0)
    ctx->pc = 0x20d9dcu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 38)));
    // 0x20d9e0: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x20D9E0u;
    {
        const bool branch_taken_0x20d9e0 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x20D9E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20D9E0u;
            // 0x20d9e4: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20d9e0) {
            ctx->pc = 0x20D9F4u;
            goto label_20d9f4;
        }
    }
    ctx->pc = 0x20D9E8u;
    // 0x20d9e8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x20d9e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20d9ec: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x20D9ECu;
    {
        const bool branch_taken_0x20d9ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20D9F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20D9ECu;
            // 0x20d9f0: 0x468000a0  cvt.s.w     $f2, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x20d9ec) {
            ctx->pc = 0x20DA0Cu;
            goto label_20da0c;
        }
    }
    ctx->pc = 0x20D9F4u;
label_20d9f4:
    // 0x20d9f4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x20d9f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x20d9f8: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x20d9f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x20d9fc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x20d9fcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20da00: 0x0  nop
    ctx->pc = 0x20da00u;
    // NOP
    // 0x20da04: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x20da04u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x20da08: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x20da08u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_20da0c:
    // 0x20da0c: 0x3c033ca3  lui         $v1, 0x3CA3
    ctx->pc = 0x20da0cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15523 << 16));
    // 0x20da10: 0x3c023f0c  lui         $v0, 0x3F0C
    ctx->pc = 0x20da10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16140 << 16));
    // 0x20da14: 0x3463d70a  ori         $v1, $v1, 0xD70A
    ctx->pc = 0x20da14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)55050);
    // 0x20da18: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x20da18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x20da1c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x20da1cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x20da20: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x20da20u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20da24: 0x0  nop
    ctx->pc = 0x20da24u;
    // NOP
    // 0x20da28: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x20da28u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x20da2c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x20da2cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x20da30: 0x10000047  b           . + 4 + (0x47 << 2)
    ctx->pc = 0x20DA30u;
    {
        const bool branch_taken_0x20da30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20DA34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20DA30u;
            // 0x20da34: 0x4600ad42  mul.s       $f21, $f21, $f0 (Delay Slot)
        ctx->f[21] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x20da30) {
            ctx->pc = 0x20DB50u;
            goto label_20db50;
        }
    }
    ctx->pc = 0x20DA38u;
label_20da38:
    // 0x20da38: 0x96020026  lhu         $v0, 0x26($s0)
    ctx->pc = 0x20da38u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 38)));
    // 0x20da3c: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x20DA3Cu;
    {
        const bool branch_taken_0x20da3c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x20DA40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20DA3Cu;
            // 0x20da40: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20da3c) {
            ctx->pc = 0x20DA50u;
            goto label_20da50;
        }
    }
    ctx->pc = 0x20DA44u;
    // 0x20da44: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x20da44u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20da48: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x20DA48u;
    {
        const bool branch_taken_0x20da48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20DA4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20DA48u;
            // 0x20da4c: 0x468000a0  cvt.s.w     $f2, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x20da48) {
            ctx->pc = 0x20DA68u;
            goto label_20da68;
        }
    }
    ctx->pc = 0x20DA50u;
label_20da50:
    // 0x20da50: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x20da50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x20da54: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x20da54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x20da58: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x20da58u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20da5c: 0x0  nop
    ctx->pc = 0x20da5cu;
    // NOP
    // 0x20da60: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x20da60u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x20da64: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x20da64u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_20da68:
    // 0x20da68: 0x3c033cc4  lui         $v1, 0x3CC4
    ctx->pc = 0x20da68u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15556 << 16));
    // 0x20da6c: 0x3c023f26  lui         $v0, 0x3F26
    ctx->pc = 0x20da6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16166 << 16));
    // 0x20da70: 0x34649ba6  ori         $a0, $v1, 0x9BA6
    ctx->pc = 0x20da70u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)39846);
    // 0x20da74: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x20da74u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x20da78: 0x34436666  ori         $v1, $v0, 0x6666
    ctx->pc = 0x20da78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26214);
    // 0x20da7c: 0x3c02408c  lui         $v0, 0x408C
    ctx->pc = 0x20da7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16524 << 16));
    // 0x20da80: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x20da80u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x20da84: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x20da84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x20da88: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x20da88u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20da8c: 0x4482a000  mtc1        $v0, $f20
    ctx->pc = 0x20da8cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x20da90: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x20da90u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x20da94: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x20DA94u;
    {
        const bool branch_taken_0x20da94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20DA98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20DA94u;
            // 0x20da98: 0x4600ad42  mul.s       $f21, $f21, $f0 (Delay Slot)
        ctx->f[21] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x20da94) {
            ctx->pc = 0x20DB50u;
            goto label_20db50;
        }
    }
    ctx->pc = 0x20DA9Cu;
label_20da9c:
    // 0x20da9c: 0x96020026  lhu         $v0, 0x26($s0)
    ctx->pc = 0x20da9cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 38)));
    // 0x20daa0: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x20DAA0u;
    {
        const bool branch_taken_0x20daa0 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x20DAA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20DAA0u;
            // 0x20daa4: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20daa0) {
            ctx->pc = 0x20DAB4u;
            goto label_20dab4;
        }
    }
    ctx->pc = 0x20DAA8u;
    // 0x20daa8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x20daa8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20daac: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x20DAACu;
    {
        const bool branch_taken_0x20daac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20DAB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20DAACu;
            // 0x20dab0: 0x468000a0  cvt.s.w     $f2, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x20daac) {
            ctx->pc = 0x20DACCu;
            goto label_20dacc;
        }
    }
    ctx->pc = 0x20DAB4u;
label_20dab4:
    // 0x20dab4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x20dab4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x20dab8: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x20dab8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x20dabc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x20dabcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20dac0: 0x0  nop
    ctx->pc = 0x20dac0u;
    // NOP
    // 0x20dac4: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x20dac4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x20dac8: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x20dac8u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_20dacc:
    // 0x20dacc: 0x3c033cc4  lui         $v1, 0x3CC4
    ctx->pc = 0x20daccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15556 << 16));
    // 0x20dad0: 0x3c023f26  lui         $v0, 0x3F26
    ctx->pc = 0x20dad0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16166 << 16));
    // 0x20dad4: 0x34639ba6  ori         $v1, $v1, 0x9BA6
    ctx->pc = 0x20dad4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)39846);
    // 0x20dad8: 0x34426666  ori         $v0, $v0, 0x6666
    ctx->pc = 0x20dad8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26214);
    // 0x20dadc: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x20dadcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x20dae0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x20dae0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20dae4: 0x0  nop
    ctx->pc = 0x20dae4u;
    // NOP
    // 0x20dae8: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x20dae8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x20daec: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x20daecu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x20daf0: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x20DAF0u;
    {
        const bool branch_taken_0x20daf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20DAF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20DAF0u;
            // 0x20daf4: 0x4600ad42  mul.s       $f21, $f21, $f0 (Delay Slot)
        ctx->f[21] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x20daf0) {
            ctx->pc = 0x20DB50u;
            goto label_20db50;
        }
    }
    ctx->pc = 0x20DAF8u;
label_20daf8:
    // 0x20daf8: 0x9602002c  lhu         $v0, 0x2C($s0)
    ctx->pc = 0x20daf8u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x20dafc: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x20DAFCu;
    {
        const bool branch_taken_0x20dafc = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x20DB00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20DAFCu;
            // 0x20db00: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20dafc) {
            ctx->pc = 0x20DB10u;
            goto label_20db10;
        }
    }
    ctx->pc = 0x20DB04u;
    // 0x20db04: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x20db04u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20db08: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x20DB08u;
    {
        const bool branch_taken_0x20db08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20DB0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20DB08u;
            // 0x20db0c: 0x468000a0  cvt.s.w     $f2, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x20db08) {
            ctx->pc = 0x20DB28u;
            goto label_20db28;
        }
    }
    ctx->pc = 0x20DB10u;
label_20db10:
    // 0x20db10: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x20db10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x20db14: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x20db14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x20db18: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x20db18u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20db1c: 0x0  nop
    ctx->pc = 0x20db1cu;
    // NOP
    // 0x20db20: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x20db20u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x20db24: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x20db24u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_20db28:
    // 0x20db28: 0x3c033ca3  lui         $v1, 0x3CA3
    ctx->pc = 0x20db28u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15523 << 16));
    // 0x20db2c: 0x3c023ecc  lui         $v0, 0x3ECC
    ctx->pc = 0x20db2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16076 << 16));
    // 0x20db30: 0x3463d70a  ori         $v1, $v1, 0xD70A
    ctx->pc = 0x20db30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)55050);
    // 0x20db34: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x20db34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x20db38: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x20db38u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x20db3c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x20db3cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20db40: 0x0  nop
    ctx->pc = 0x20db40u;
    // NOP
    // 0x20db44: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x20db44u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x20db48: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x20db48u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x20db4c: 0x4600ad42  mul.s       $f21, $f21, $f0
    ctx->pc = 0x20db4cu;
    ctx->f[21] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
label_20db50:
    // 0x20db50: 0x4615a034  c.lt.s      $f20, $f21
    ctx->pc = 0x20db50u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x20db54: 0x0  nop
    ctx->pc = 0x20db54u;
    // NOP
    // 0x20db58: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x20DB58u;
    {
        const bool branch_taken_0x20db58 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x20DB5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20DB58u;
            // 0x20db5c: 0x4600a806  mov.s       $f0, $f21 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x20db58) {
            ctx->pc = 0x20DB68u;
            goto label_20db68;
        }
    }
    ctx->pc = 0x20DB60u;
    // 0x20db60: 0x4600a546  mov.s       $f21, $f20
    ctx->pc = 0x20db60u;
    ctx->f[21] = FPU_MOV_S(ctx->f[20]);
    // 0x20db64: 0x4600a806  mov.s       $f0, $f21
    ctx->pc = 0x20db64u;
    ctx->f[0] = FPU_MOV_S(ctx->f[21]);
label_20db68:
    // 0x20db68: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x20db68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x20db6c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x20db6cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x20db70: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x20db70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x20db74: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x20db74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x20db78: 0x3e00008  jr          $ra
    ctx->pc = 0x20DB78u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20DB7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20DB78u;
            // 0x20db7c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x20DB80u;
}
