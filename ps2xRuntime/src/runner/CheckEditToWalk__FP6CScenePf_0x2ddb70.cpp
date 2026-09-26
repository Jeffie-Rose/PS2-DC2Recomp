#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: CheckEditToWalk__FP6CScenePf
// Address: 0x2ddb70 - 0x2dddd4
void CheckEditToWalk__FP6CScenePf_0x2ddb70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CheckEditToWalk__FP6CScenePf_0x2ddb70");
#endif

    switch (ctx->pc) {
        case 0x2ddbbcu: goto label_2ddbbc;
        case 0x2ddbd8u: goto label_2ddbd8;
        case 0x2ddbfcu: goto label_2ddbfc;
        case 0x2ddca0u: goto label_2ddca0;
        case 0x2ddcc4u: goto label_2ddcc4;
        case 0x2ddd54u: goto label_2ddd54;
        case 0x2ddd78u: goto label_2ddd78;
        default: break;
    }

    ctx->pc = 0x2ddb70u;

    // 0x2ddb70: 0x3c01ffff  lui         $at, 0xFFFF
    ctx->pc = 0x2ddb70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)65535 << 16));
    // 0x2ddb74: 0x3c0601f6  lui         $a2, 0x1F6
    ctx->pc = 0x2ddb74u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)502 << 16));
    // 0x2ddb78: 0x34215a70  ori         $at, $at, 0x5A70
    ctx->pc = 0x2ddb78u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)23152);
    // 0x2ddb7c: 0x24c688f0  addiu       $a2, $a2, -0x7710
    ctx->pc = 0x2ddb7cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294936816));
    // 0x2ddb80: 0x3a1e821  addu        $sp, $sp, $at
    ctx->pc = 0x2ddb80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 1)));
    // 0x2ddb84: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2ddb84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2ddb88: 0x27a20050  addiu       $v0, $sp, 0x50
    ctx->pc = 0x2ddb88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2ddb8c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2ddb8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2ddb90: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2ddb90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2ddb94: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x2ddb94u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ddb98: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2ddb98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2ddb9c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2ddb9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2ddba0: 0x78c30000  lq          $v1, 0x0($a2)
    ctx->pc = 0x2ddba0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2ddba4: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x2ddba4u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x2ddba8: 0x78c20000  lq          $v0, 0x0($a2)
    ctx->pc = 0x2ddba8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2ddbac: 0x7ca20000  sq          $v0, 0x0($a1)
    ctx->pc = 0x2ddbacu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 2));
    // 0x2ddbb0: 0x8c852e5c  lw          $a1, 0x2E5C($a0)
    ctx->pc = 0x2ddbb0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 11868)));
    // 0x2ddbb4: 0xc0a0f58  jal         func_283D60
    ctx->pc = 0x2DDBB4u;
    SET_GPR_U32(ctx, 31, 0x2DDBBCu);
    ctx->pc = 0x2DDBB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DDBB4u;
            // 0x2ddbb8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x283D60u;
    if (runtime->hasFunction(0x283D60u)) {
        auto targetFn = runtime->lookupFunction(0x283D60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DDBBCu; }
        if (ctx->pc != 0x2DDBBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMap__6CSceneFi_0x283d60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DDBBCu; }
        if (ctx->pc != 0x2DDBBCu) { return; }
    }
    ctx->pc = 0x2DDBBCu;
label_2ddbbc:
    // 0x2ddbbc: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2ddbbcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ddbc0: 0x16200003  bnez        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2DDBC0u;
    {
        const bool branch_taken_0x2ddbc0 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DDBC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DDBC0u;
            // 0x2ddbc4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ddbc0) {
            ctx->pc = 0x2DDBD0u;
            goto label_2ddbd0;
        }
    }
    ctx->pc = 0x2DDBC8u;
    // 0x2ddbc8: 0x1000007a  b           . + 4 + (0x7A << 2)
    ctx->pc = 0x2DDBC8u;
    {
        const bool branch_taken_0x2ddbc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DDBCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DDBC8u;
            // 0x2ddbcc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ddbc8) {
            ctx->pc = 0x2DDDB4u;
            goto label_2dddb4;
        }
    }
    ctx->pc = 0x2DDBD0u;
label_2ddbd0:
    // 0x2ddbd0: 0xc0b7604  jal         func_2DD810
    ctx->pc = 0x2DDBD0u;
    SET_GPR_U32(ctx, 31, 0x2DDBD8u);
    ctx->pc = 0x2DD810u;
    if (runtime->hasFunction(0x2DD810u)) {
        auto targetFn = runtime->lookupFunction(0x2DD810u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DDBD8u; }
        if (ctx->pc != 0x2DDBD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetGeoCheckPts__FP4CMap_0x2dd810(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DDBD8u; }
        if (ctx->pc != 0x2DDBD8u) { return; }
    }
    ctx->pc = 0x2DDBD8u;
label_2ddbd8:
    // 0x2ddbd8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2DDBD8u;
    {
        const bool branch_taken_0x2ddbd8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DDBDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DDBD8u;
            // 0x2ddbdc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ddbd8) {
            ctx->pc = 0x2DDBE8u;
            goto label_2ddbe8;
        }
    }
    ctx->pc = 0x2DDBE0u;
    // 0x2ddbe0: 0x10000074  b           . + 4 + (0x74 << 2)
    ctx->pc = 0x2DDBE0u;
    {
        const bool branch_taken_0x2ddbe0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DDBE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DDBE0u;
            // 0x2ddbe4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ddbe0) {
            ctx->pc = 0x2DDDB4u;
            goto label_2dddb4;
        }
    }
    ctx->pc = 0x2DDBE8u;
label_2ddbe8:
    // 0x2ddbe8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2ddbe8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2ddbec: 0x27b1005c  addiu       $s1, $sp, 0x5C
    ctx->pc = 0x2ddbecu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
    // 0x2ddbf0: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x2ddbf0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2ddbf4: 0xc0a5b38  jal         func_296CE0
    ctx->pc = 0x2DDBF4u;
    SET_GPR_U32(ctx, 31, 0x2DDBFCu);
    ctx->pc = 0x2DDBF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DDBF4u;
            // 0x2ddbf8: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x296CE0u;
    if (runtime->hasFunction(0x296CE0u)) {
        auto targetFn = runtime->lookupFunction(0x296CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DDBFCu; }
        if (ctx->pc != 0x2DDBFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        IsRiverGrid__8CEditMapFPf_0x296ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DDBFCu; }
        if (ctx->pc != 0x2DDBFCu) { return; }
    }
    ctx->pc = 0x2DDBFCu;
label_2ddbfc:
    // 0x2ddbfc: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2DDBFCu;
    {
        const bool branch_taken_0x2ddbfc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DDC00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DDBFCu;
            // 0x2ddc00: 0x3c0701f6  lui         $a3, 0x1F6 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)502 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ddbfc) {
            ctx->pc = 0x2DDC0Cu;
            goto label_2ddc0c;
        }
    }
    ctx->pc = 0x2DDC04u;
    // 0x2ddc04: 0x1000006b  b           . + 4 + (0x6B << 2)
    ctx->pc = 0x2DDC04u;
    {
        const bool branch_taken_0x2ddc04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DDC08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DDC04u;
            // 0x2ddc08: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ddc04) {
            ctx->pc = 0x2DDDB4u;
            goto label_2dddb4;
        }
    }
    ctx->pc = 0x2DDC0Cu;
label_2ddc0c:
    // 0x2ddc0c: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x2ddc0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
    // 0x2ddc10: 0x24e788f0  addiu       $a3, $a3, -0x7710
    ctx->pc = 0x2ddc10u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294936816));
    // 0x2ddc14: 0x27a60070  addiu       $a2, $sp, 0x70
    ctx->pc = 0x2ddc14u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2ddc18: 0x78e50000  lq          $a1, 0x0($a3)
    ctx->pc = 0x2ddc18u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x2ddc1c: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x2ddc1cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2ddc20: 0x27ab0080  addiu       $t3, $sp, 0x80
    ctx->pc = 0x2ddc20u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2ddc24: 0x3c09447a  lui         $t1, 0x447A
    ctx->pc = 0x2ddc24u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)17530 << 16));
    // 0x2ddc28: 0x3c02461c  lui         $v0, 0x461C
    ctx->pc = 0x2ddc28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17948 << 16));
    // 0x2ddc2c: 0x27b20054  addiu       $s2, $sp, 0x54
    ctx->pc = 0x2ddc2cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 84));
    // 0x2ddc30: 0x34484000  ori         $t0, $v0, 0x4000
    ctx->pc = 0x2ddc30u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x2ddc34: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2ddc34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ddc38: 0x3c02c61c  lui         $v0, 0xC61C
    ctx->pc = 0x2ddc38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50716 << 16));
    // 0x2ddc3c: 0x34434000  ori         $v1, $v0, 0x4000
    ctx->pc = 0x2ddc3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x2ddc40: 0x7cc50000  sq          $a1, 0x0($a2)
    ctx->pc = 0x2ddc40u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 5));
    // 0x2ddc44: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2ddc44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2ddc48: 0x78ea0000  lq          $t2, 0x0($a3)
    ctx->pc = 0x2ddc48u;
    SET_GPR_VEC(ctx, 10, READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x2ddc4c: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x2ddc4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x2ddc50: 0x7d6a0000  sq          $t2, 0x0($t3)
    ctx->pc = 0x2ddc50u;
    WRITE128(ADD32(GPR_U32(ctx, 11), 0), GPR_VEC(ctx, 10));
    // 0x2ddc54: 0x24070200  addiu       $a3, $zero, 0x200
    ctx->pc = 0x2ddc54u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x2ddc58: 0xae490000  sw          $t1, 0x0($s2)
    ctx->pc = 0x2ddc58u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 9));
    // 0x2ddc5c: 0xc7a10070  lwc1        $f1, 0x70($sp)
    ctx->pc = 0x2ddc5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2ddc60: 0xafa80074  sw          $t0, 0x74($sp)
    ctx->pc = 0x2ddc60u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 8));
    // 0x2ddc64: 0xc7a00078  lwc1        $f0, 0x78($sp)
    ctx->pc = 0x2ddc64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ddc68: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x2ddc68u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x2ddc6c: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x2ddc6cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x2ddc70: 0xe7a10070  swc1        $f1, 0x70($sp)
    ctx->pc = 0x2ddc70u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x2ddc74: 0xe7a00078  swc1        $f0, 0x78($sp)
    ctx->pc = 0x2ddc74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x2ddc78: 0xc5600000  lwc1        $f0, 0x0($t3)
    ctx->pc = 0x2ddc78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ddc7c: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x2ddc7cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x2ddc80: 0xe5600000  swc1        $f0, 0x0($t3)
    ctx->pc = 0x2ddc80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 11), 0), bits); }
    // 0x2ddc84: 0xc7a00088  lwc1        $f0, 0x88($sp)
    ctx->pc = 0x2ddc84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ddc88: 0xafa30084  sw          $v1, 0x84($sp)
    ctx->pc = 0x2ddc88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 132), GPR_U32(ctx, 3));
    // 0x2ddc8c: 0xafa2007c  sw          $v0, 0x7C($sp)
    ctx->pc = 0x2ddc8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 2));
    // 0x2ddc90: 0xafa2008c  sw          $v0, 0x8C($sp)
    ctx->pc = 0x2ddc90u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 140), GPR_U32(ctx, 2));
    // 0x2ddc94: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x2ddc94u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x2ddc98: 0xc0b1ed4  jal         func_2C7B50
    ctx->pc = 0x2DDC98u;
    SET_GPR_U32(ctx, 31, 0x2DDCA0u);
    ctx->pc = 0x2DDC9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DDC98u;
            // 0x2ddc9c: 0xe7a00088  swc1        $f0, 0x88($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C7B50u;
    if (runtime->hasFunction(0x2C7B50u)) {
        auto targetFn = runtime->lookupFunction(0x2C7B50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DDCA0u; }
        if (ctx->pc != 0x2DDCA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetColPoly__6CSceneFP6CCPolyR9mgVu0FBOXi_0x2c7b50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DDCA0u; }
        if (ctx->pc != 0x2DDCA0u) { return; }
    }
    ctx->pc = 0x2DDCA0u;
label_2ddca0:
    // 0x2ddca0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2ddca0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ddca4: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x2ddca4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x2ddca8: 0x3c02c4fa  lui         $v0, 0xC4FA
    ctx->pc = 0x2ddca8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50426 << 16));
    // 0x2ddcac: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2ddcacu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ddcb0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2ddcb0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2ddcb4: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x2ddcb4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2ddcb8: 0x27a70060  addiu       $a3, $sp, 0x60
    ctx->pc = 0x2ddcb8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2ddcbc: 0xc053870  jal         func_14E1C0
    ctx->pc = 0x2DDCBCu;
    SET_GPR_U32(ctx, 31, 0x2DDCC4u);
    ctx->pc = 0x2DDCC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DDCBCu;
            // 0x2ddcc0: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14E1C0u;
    if (runtime->hasFunction(0x14E1C0u)) {
        auto targetFn = runtime->lookupFunction(0x14E1C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DDCC4u; }
        if (ctx->pc != 0x2DDCC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckHitVertical__FP6CCPolyiPffPfi_0x14e1c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DDCC4u; }
        if (ctx->pc != 0x2DDCC4u) { return; }
    }
    ctx->pc = 0x2DDCC4u;
label_2ddcc4:
    // 0x2ddcc4: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2DDCC4u;
    {
        const bool branch_taken_0x2ddcc4 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x2DDCC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DDCC4u;
            // 0x2ddcc8: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ddcc4) {
            ctx->pc = 0x2DDCD4u;
            goto label_2ddcd4;
        }
    }
    ctx->pc = 0x2DDCCCu;
    // 0x2ddccc: 0x10000039  b           . + 4 + (0x39 << 2)
    ctx->pc = 0x2DDCCCu;
    {
        const bool branch_taken_0x2ddccc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DDCD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DDCCCu;
            // 0x2ddcd0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ddccc) {
            ctx->pc = 0x2DDDB4u;
            goto label_2dddb4;
        }
    }
    ctx->pc = 0x2DDCD4u;
label_2ddcd4:
    // 0x2ddcd4: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x2ddcd4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2ddcd8: 0x78840000  lq          $a0, 0x0($a0)
    ctx->pc = 0x2ddcd8u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2ddcdc: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x2ddcdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2ddce0: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x2ddce0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x2ddce4: 0x7d1821  addu        $v1, $v1, $sp
    ctx->pc = 0x2ddce4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
    // 0x2ddce8: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x2ddce8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x2ddcec: 0x7e640000  sq          $a0, 0x0($s3)
    ctx->pc = 0x2ddcecu;
    WRITE128(ADD32(GPR_U32(ctx, 19), 0), GPR_VEC(ctx, 4));
    // 0x2ddcf0: 0x846300d4  lh          $v1, 0xD4($v1)
    ctx->pc = 0x2ddcf0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 212)));
    // 0x2ddcf4: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2DDCF4u;
    {
        const bool branch_taken_0x2ddcf4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2DDCF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DDCF4u;
            // 0x2ddcf8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ddcf4) {
            ctx->pc = 0x2DDD04u;
            goto label_2ddd04;
        }
    }
    ctx->pc = 0x2DDCFCu;
    // 0x2ddcfc: 0x1000002d  b           . + 4 + (0x2D << 2)
    ctx->pc = 0x2DDCFCu;
    {
        const bool branch_taken_0x2ddcfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DDD00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DDCFCu;
            // 0x2ddd00: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ddcfc) {
            ctx->pc = 0x2DDDB4u;
            goto label_2dddb4;
        }
    }
    ctx->pc = 0x2DDD04u;
label_2ddd04:
    // 0x2ddd04: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x2ddd04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x2ddd08: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x2ddd08u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x2ddd0c: 0x27b00064  addiu       $s0, $sp, 0x64
    ctx->pc = 0x2ddd0cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 100));
    // 0x2ddd10: 0xc6410000  lwc1        $f1, 0x0($s2)
    ctx->pc = 0x2ddd10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2ddd14: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x2ddd14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
    // 0x2ddd18: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x2ddd18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ddd1c: 0x3401a490  ori         $at, $zero, 0xA490
    ctx->pc = 0x2ddd1cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)42128);
    // 0x2ddd20: 0x3a14021  addu        $t0, $sp, $at
    ctx->pc = 0x2ddd20u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 1)));
    // 0x2ddd24: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x2ddd24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x2ddd28: 0x3401a090  ori         $at, $zero, 0xA090
    ctx->pc = 0x2ddd28u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)41104);
    // 0x2ddd2c: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x2ddd2cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2ddd30: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x2ddd30u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2ddd34: 0x24070040  addiu       $a3, $zero, 0x40
    ctx->pc = 0x2ddd34u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x2ddd38: 0x3a14821  addu        $t1, $sp, $at
    ctx->pc = 0x2ddd38u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 1)));
    // 0x2ddd3c: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x2ddd3cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ddd40: 0x240b0001  addiu       $t3, $zero, 0x1
    ctx->pc = 0x2ddd40u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ddd44: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2ddd44u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2ddd48: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x2ddd48u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x2ddd4c: 0xc053a08  jal         func_14E820
    ctx->pc = 0x2DDD4Cu;
    SET_GPR_U32(ctx, 31, 0x2DDD54u);
    ctx->pc = 0x2DDD50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DDD4Cu;
            // 0x2ddd50: 0x46000307  neg.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_NEG_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x14E820u;
    if (runtime->hasFunction(0x14E820u)) {
        auto targetFn = runtime->lookupFunction(0x14E820u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DDD54u; }
        if (ctx->pc != 0x2DDD54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckHitsPipeY__FP6CCPolyiPffiPiPA4_fii_0x14e820(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DDD54u; }
        if (ctx->pc != 0x2DDD54u) { return; }
    }
    ctx->pc = 0x2DDD54u;
label_2ddd54:
    // 0x2ddd54: 0x2082a  slt         $at, $zero, $v0
    ctx->pc = 0x2ddd54u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2ddd58: 0x10200015  beqz        $at, . + 4 + (0x15 << 2)
    ctx->pc = 0x2DDD58u;
    {
        const bool branch_taken_0x2ddd58 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DDD5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DDD58u;
            // 0x2ddd5c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ddd58) {
            ctx->pc = 0x2DDDB0u;
            goto label_2dddb0;
        }
    }
    ctx->pc = 0x2DDD60u;
    // 0x2ddd60: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2ddd60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ddd64: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x2ddd64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ddd68: 0x3c0340a0  lui         $v1, 0x40A0
    ctx->pc = 0x2ddd68u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16544 << 16));
    // 0x2ddd6c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2ddd6cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2ddd70: 0x0  nop
    ctx->pc = 0x2ddd70u;
    // NOP
    // 0x2ddd74: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2ddd74u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_2ddd78:
    // 0x2ddd78: 0xbd1821  addu        $v1, $a1, $sp
    ctx->pc = 0x2ddd78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 29)));
    // 0x2ddd7c: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x2ddd7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x2ddd80: 0x610821  addu        $at, $v1, $at
    ctx->pc = 0x2ddd80u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 1)));
    // 0x2ddd84: 0xc421a094  lwc1        $f1, -0x5F6C($at)
    ctx->pc = 0x2ddd84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294942868)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2ddd88: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2ddd88u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2ddd8c: 0x0  nop
    ctx->pc = 0x2ddd8cu;
    // NOP
    // 0x2ddd90: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x2DDD90u;
    {
        const bool branch_taken_0x2ddd90 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2ddd90) {
            ctx->pc = 0x2DDDA0u;
            goto label_2ddda0;
        }
    }
    ctx->pc = 0x2DDD98u;
    // 0x2ddd98: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2DDD98u;
    {
        const bool branch_taken_0x2ddd98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DDD9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DDD98u;
            // 0x2ddd9c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ddd98) {
            ctx->pc = 0x2DDDB4u;
            goto label_2dddb4;
        }
    }
    ctx->pc = 0x2DDDA0u;
label_2ddda0:
    // 0x2ddda0: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x2ddda0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x2ddda4: 0x82182a  slt         $v1, $a0, $v0
    ctx->pc = 0x2ddda4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2ddda8: 0x1460fff3  bnez        $v1, . + 4 + (-0xD << 2)
    ctx->pc = 0x2DDDA8u;
    {
        const bool branch_taken_0x2ddda8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DDDACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DDDA8u;
            // 0x2dddac: 0x24a50010  addiu       $a1, $a1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ddda8) {
            ctx->pc = 0x2DDD78u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2ddd78;
        }
    }
    ctx->pc = 0x2DDDB0u;
label_2dddb0:
    // 0x2dddb0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2dddb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2dddb4:
    // 0x2dddb4: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2dddb4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2dddb8: 0x3401a590  ori         $at, $zero, 0xA590
    ctx->pc = 0x2dddb8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)42384);
    // 0x2dddbc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2dddbcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2dddc0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2dddc0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2dddc4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2dddc4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2dddc8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2dddc8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2dddcc: 0x3e00008  jr          $ra
    ctx->pc = 0x2DDDCCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DDDD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DDDCCu;
            // 0x2dddd0: 0x3a1e821  addu        $sp, $sp, $at (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 1)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2DDDD4u;
}
