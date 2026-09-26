#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Initialize__9CAquaFishFv
// Address: 0x20d440 - 0x20d4f4
void Initialize__9CAquaFishFv_0x20d440(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Initialize__9CAquaFishFv_0x20d440");
#endif

    switch (ctx->pc) {
        case 0x20d454u: goto label_20d454;
        case 0x20d45cu: goto label_20d45c;
        case 0x20d464u: goto label_20d464;
        case 0x20d46cu: goto label_20d46c;
        case 0x20d474u: goto label_20d474;
        case 0x20d48cu: goto label_20d48c;
        case 0x20d4a8u: goto label_20d4a8;
        case 0x20d4ccu: goto label_20d4cc;
        case 0x20d4d8u: goto label_20d4d8;
        default: break;
    }

    ctx->pc = 0x20d440u;

    // 0x20d440: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x20d440u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x20d444: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x20d444u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x20d448: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x20d448u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x20d44c: 0xc05d4d0  jal         func_175340
    ctx->pc = 0x20D44Cu;
    SET_GPR_U32(ctx, 31, 0x20D454u);
    ctx->pc = 0x20D450u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20D44Cu;
            // 0x20d450: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x175340u;
    if (runtime->hasFunction(0x175340u)) {
        auto targetFn = runtime->lookupFunction(0x175340u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20D454u; }
        if (ctx->pc != 0x20D454u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Initialize__11CCharacter2Fv_0x175340(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20D454u; }
        if (ctx->pc != 0x20D454u) { return; }
    }
    ctx->pc = 0x20D454u;
label_20d454:
    // 0x20d454: 0xc04bc8c  jal         func_12F230
    ctx->pc = 0x20D454u;
    SET_GPR_U32(ctx, 31, 0x20D45Cu);
    ctx->pc = 0x20D458u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20D454u;
            // 0x20d458: 0x26040670  addiu       $a0, $s0, 0x670 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1648));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12F230u;
    if (runtime->hasFunction(0x12F230u)) {
        auto targetFn = runtime->lookupFunction(0x12F230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20D45Cu; }
        if (ctx->pc != 0x20D45Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgZeroVector__FPf_0x12f230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20D45Cu; }
        if (ctx->pc != 0x20D45Cu) { return; }
    }
    ctx->pc = 0x20D45Cu;
label_20d45c:
    // 0x20d45c: 0xc04bc8c  jal         func_12F230
    ctx->pc = 0x20D45Cu;
    SET_GPR_U32(ctx, 31, 0x20D464u);
    ctx->pc = 0x20D460u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20D45Cu;
            // 0x20d460: 0x26040660  addiu       $a0, $s0, 0x660 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1632));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12F230u;
    if (runtime->hasFunction(0x12F230u)) {
        auto targetFn = runtime->lookupFunction(0x12F230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20D464u; }
        if (ctx->pc != 0x20D464u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgZeroVector__FPf_0x12f230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20D464u; }
        if (ctx->pc != 0x20D464u) { return; }
    }
    ctx->pc = 0x20D464u;
label_20d464:
    // 0x20d464: 0xc04bc8c  jal         func_12F230
    ctx->pc = 0x20D464u;
    SET_GPR_U32(ctx, 31, 0x20D46Cu);
    ctx->pc = 0x20D468u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20D464u;
            // 0x20d468: 0x26040680  addiu       $a0, $s0, 0x680 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1664));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12F230u;
    if (runtime->hasFunction(0x12F230u)) {
        auto targetFn = runtime->lookupFunction(0x12F230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20D46Cu; }
        if (ctx->pc != 0x20D46Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgZeroVector__FPf_0x12f230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20D46Cu; }
        if (ctx->pc != 0x20D46Cu) { return; }
    }
    ctx->pc = 0x20D46Cu;
label_20d46c:
    // 0x20d46c: 0xc04bc8c  jal         func_12F230
    ctx->pc = 0x20D46Cu;
    SET_GPR_U32(ctx, 31, 0x20D474u);
    ctx->pc = 0x20D470u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20D46Cu;
            // 0x20d470: 0x26040690  addiu       $a0, $s0, 0x690 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1680));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12F230u;
    if (runtime->hasFunction(0x12F230u)) {
        auto targetFn = runtime->lookupFunction(0x12F230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20D474u; }
        if (ctx->pc != 0x20D474u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgZeroVector__FPf_0x12f230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20D474u; }
        if (ctx->pc != 0x20D474u) { return; }
    }
    ctx->pc = 0x20D474u;
label_20d474:
    // 0x20d474: 0x3c023d00  lui         $v0, 0x3D00
    ctx->pc = 0x20d474u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15616 << 16));
    // 0x20d478: 0x24040029  addiu       $a0, $zero, 0x29
    ctx->pc = 0x20d478u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 41));
    // 0x20d47c: 0x3442adfd  ori         $v0, $v0, 0xADFD
    ctx->pc = 0x20d47cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)44541);
    // 0x20d480: 0xae020690  sw          $v0, 0x690($s0)
    ctx->pc = 0x20d480u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1680), GPR_U32(ctx, 2));
    // 0x20d484: 0xc0941b0  jal         func_2506C0
    ctx->pc = 0x20D484u;
    SET_GPR_U32(ctx, 31, 0x20D48Cu);
    ctx->pc = 0x20D488u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20D484u;
            // 0x20d488: 0xa60006ae  sh          $zero, 0x6AE($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 1710), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2506C0u;
    if (runtime->hasFunction(0x2506C0u)) {
        auto targetFn = runtime->lookupFunction(0x2506C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20D48Cu; }
        if (ctx->pc != 0x20D48Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetRandI__Fi_0x2506c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20D48Cu; }
        if (ctx->pc != 0x20D48Cu) { return; }
    }
    ctx->pc = 0x20D48Cu;
label_20d48c:
    // 0x20d48c: 0x2442000a  addiu       $v0, $v0, 0xA
    ctx->pc = 0x20d48cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10));
    // 0x20d490: 0xae0206a8  sw          $v0, 0x6A8($s0)
    ctx->pc = 0x20d490u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1704), GPR_U32(ctx, 2));
    // 0x20d494: 0x8e040938  lw          $a0, 0x938($s0)
    ctx->pc = 0x20d494u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2360)));
    // 0x20d498: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x20D498u;
    {
        const bool branch_taken_0x20d498 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x20d498) {
            ctx->pc = 0x20D4A8u;
            goto label_20d4a8;
        }
    }
    ctx->pc = 0x20D4A0u;
    // 0x20d4a0: 0xc065c30  jal         func_1970C0
    ctx->pc = 0x20D4A0u;
    SET_GPR_U32(ctx, 31, 0x20D4A8u);
    ctx->pc = 0x1970C0u;
    if (runtime->hasFunction(0x1970C0u)) {
        auto targetFn = runtime->lookupFunction(0x1970C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20D4A8u; }
        if (ctx->pc != 0x20D4A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Init__13CGameDataUsedFv_0x1970c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20D4A8u; }
        if (ctx->pc != 0x20D4A8u) { return; }
    }
    ctx->pc = 0x20D4A8u;
label_20d4a8:
    // 0x20d4a8: 0xae000938  sw          $zero, 0x938($s0)
    ctx->pc = 0x20d4a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2360), GPR_U32(ctx, 0));
    // 0x20d4ac: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x20d4acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x20d4b0: 0xa60206ac  sh          $v0, 0x6AC($s0)
    ctx->pc = 0x20d4b0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1708), (uint16_t)GPR_U32(ctx, 2));
    // 0x20d4b4: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x20d4b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x20d4b8: 0xae000924  sw          $zero, 0x924($s0)
    ctx->pc = 0x20d4b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2340), GPR_U32(ctx, 0));
    // 0x20d4bc: 0xae0006a4  sw          $zero, 0x6A4($s0)
    ctx->pc = 0x20d4bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1700), GPR_U32(ctx, 0));
    // 0x20d4c0: 0xae000928  sw          $zero, 0x928($s0)
    ctx->pc = 0x20d4c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2344), GPR_U32(ctx, 0));
    // 0x20d4c4: 0xc0941b0  jal         func_2506C0
    ctx->pc = 0x20D4C4u;
    SET_GPR_U32(ctx, 31, 0x20D4CCu);
    ctx->pc = 0x20D4C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20D4C4u;
            // 0x20d4c8: 0xa6000920  sh          $zero, 0x920($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 2336), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2506C0u;
    if (runtime->hasFunction(0x2506C0u)) {
        auto targetFn = runtime->lookupFunction(0x2506C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20D4CCu; }
        if (ctx->pc != 0x20D4CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetRandI__Fi_0x2506c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20D4CCu; }
        if (ctx->pc != 0x20D4CCu) { return; }
    }
    ctx->pc = 0x20D4CCu;
label_20d4cc:
    // 0x20d4cc: 0xa2020922  sb          $v0, 0x922($s0)
    ctx->pc = 0x20d4ccu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2338), (uint8_t)GPR_U32(ctx, 2));
    // 0x20d4d0: 0xc0834d4  jal         func_20D350
    ctx->pc = 0x20D4D0u;
    SET_GPR_U32(ctx, 31, 0x20D4D8u);
    ctx->pc = 0x20D4D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20D4D0u;
            // 0x20d4d4: 0x260406c0  addiu       $a0, $s0, 0x6C0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1728));
        ctx->in_delay_slot = false;
    ctx->pc = 0x20D350u;
    if (runtime->hasFunction(0x20D350u)) {
        auto targetFn = runtime->lookupFunction(0x20D350u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20D4D8u; }
        if (ctx->pc != 0x20D4D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Initialize__20CAquaFishActionParamFv_0x20d350(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20D4D8u; }
        if (ctx->pc != 0x20D4D8u) { return; }
    }
    ctx->pc = 0x20D4D8u;
label_20d4d8:
    // 0x20d4d8: 0xae000934  sw          $zero, 0x934($s0)
    ctx->pc = 0x20d4d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2356), GPR_U32(ctx, 0));
    // 0x20d4dc: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x20d4dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x20d4e0: 0xa60306a0  sh          $v1, 0x6A0($s0)
    ctx->pc = 0x20d4e0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1696), (uint16_t)GPR_U32(ctx, 3));
    // 0x20d4e4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x20d4e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x20d4e8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x20d4e8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20d4ec: 0x3e00008  jr          $ra
    ctx->pc = 0x20D4ECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20D4F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20D4ECu;
            // 0x20d4f0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x20D4F4u;
}
