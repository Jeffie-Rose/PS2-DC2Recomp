#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sgLoopSubGame__Fv
// Address: 0x304120 - 0x3041c8
void sgLoopSubGame__Fv_0x304120(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sgLoopSubGame__Fv_0x304120");
#endif

    switch (ctx->pc) {
        case 0x304130u: goto label_304130;
        case 0x30417cu: goto label_30417c;
        case 0x304190u: goto label_304190;
        case 0x3041a4u: goto label_3041a4;
        default: break;
    }

    ctx->pc = 0x304120u;

    // 0x304120: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x304120u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x304124: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x304124u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x304128: 0xc0c0fc8  jal         func_303F20
    ctx->pc = 0x304128u;
    SET_GPR_U32(ctx, 31, 0x304130u);
    ctx->pc = 0x303F20u;
    if (runtime->hasFunction(0x303F20u)) {
        auto targetFn = runtime->lookupFunction(0x303F20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x304130u; }
        if (ctx->pc != 0x304130u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SubGameRunning__Fv_0x303f20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x304130u; }
        if (ctx->pc != 0x304130u) { return; }
    }
    ctx->pc = 0x304130u;
label_304130:
    // 0x304130: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x304130u;
    {
        const bool branch_taken_0x304130 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x304134u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x304130u;
            // 0x304134: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x304130) {
            ctx->pc = 0x304140u;
            goto label_304140;
        }
    }
    ctx->pc = 0x304138u;
    // 0x304138: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x304138u;
    {
        const bool branch_taken_0x304138 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30413Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x304138u;
            // 0x30413c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x304138) {
            ctx->pc = 0x3041C0u;
            goto label_3041c0;
        }
    }
    ctx->pc = 0x304140u;
label_304140:
    // 0x304140: 0x8f84a104  lw          $a0, -0x5EFC($gp)
    ctx->pc = 0x304140u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942980)));
    // 0x304144: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x304144u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x304148: 0x10830018  beq         $a0, $v1, . + 4 + (0x18 << 2)
    ctx->pc = 0x304148u;
    {
        const bool branch_taken_0x304148 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x30414Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x304148u;
            // 0x30414c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x304148) {
            ctx->pc = 0x3041ACu;
            goto label_3041ac;
        }
    }
    ctx->pc = 0x304150u;
    // 0x304150: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x304150u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x304154: 0x10830010  beq         $a0, $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x304154u;
    {
        const bool branch_taken_0x304154 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x304158u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x304154u;
            // 0x304158: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x304154) {
            ctx->pc = 0x304198u;
            goto label_304198;
        }
    }
    ctx->pc = 0x30415Cu;
    // 0x30415c: 0x10830009  beq         $a0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x30415Cu;
    {
        const bool branch_taken_0x30415c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x304160u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30415Cu;
            // 0x304160: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30415c) {
            ctx->pc = 0x304184u;
            goto label_304184;
        }
    }
    ctx->pc = 0x304164u;
    // 0x304164: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x304164u;
    {
        const bool branch_taken_0x304164 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x304168u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x304164u;
            // 0x304168: 0x3c0401f6  lui         $a0, 0x1F6 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)502 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x304164) {
            ctx->pc = 0x304174u;
            goto label_304174;
        }
    }
    ctx->pc = 0x30416Cu;
    // 0x30416c: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x30416Cu;
    {
        const bool branch_taken_0x30416c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x30416c) {
            ctx->pc = 0x3041B0u;
            goto label_3041b0;
        }
    }
    ctx->pc = 0x304174u;
label_304174:
    // 0x304174: 0xc0bf744  jal         func_2FDD10
    ctx->pc = 0x304174u;
    SET_GPR_U32(ctx, 31, 0x30417Cu);
    ctx->pc = 0x304178u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x304174u;
            // 0x304178: 0x24849e30  addiu       $a0, $a0, -0x61D0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294942256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2FDD10u;
    if (runtime->hasFunction(0x2FDD10u)) {
        auto targetFn = runtime->lookupFunction(0x2FDD10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30417Cu; }
        if (ctx->pc != 0x30417Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sgLoopFishing__FP11SubGameInfo_0x2fdd10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30417Cu; }
        if (ctx->pc != 0x30417Cu) { return; }
    }
    ctx->pc = 0x30417Cu;
label_30417c:
    // 0x30417c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x30417Cu;
    {
        const bool branch_taken_0x30417c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x30417c) {
            ctx->pc = 0x3041B0u;
            goto label_3041b0;
        }
    }
    ctx->pc = 0x304184u;
label_304184:
    // 0x304184: 0x3c0401f6  lui         $a0, 0x1F6
    ctx->pc = 0x304184u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)502 << 16));
    // 0x304188: 0xc0c16ac  jal         func_305AB0
    ctx->pc = 0x304188u;
    SET_GPR_U32(ctx, 31, 0x304190u);
    ctx->pc = 0x30418Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x304188u;
            // 0x30418c: 0x24849e30  addiu       $a0, $a0, -0x61D0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294942256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x305AB0u;
    if (runtime->hasFunction(0x305AB0u)) {
        auto targetFn = runtime->lookupFunction(0x305AB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x304190u; }
        if (ctx->pc != 0x304190u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sgLoopGyoRace__FP11SubGameInfo_0x305ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x304190u; }
        if (ctx->pc != 0x304190u) { return; }
    }
    ctx->pc = 0x304190u;
label_304190:
    // 0x304190: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x304190u;
    {
        const bool branch_taken_0x304190 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x304190) {
            ctx->pc = 0x3041B0u;
            goto label_3041b0;
        }
    }
    ctx->pc = 0x304198u;
label_304198:
    // 0x304198: 0x3c0401f6  lui         $a0, 0x1F6
    ctx->pc = 0x304198u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)502 << 16));
    // 0x30419c: 0xc0c507c  jal         func_3141F0
    ctx->pc = 0x30419Cu;
    SET_GPR_U32(ctx, 31, 0x3041A4u);
    ctx->pc = 0x3041A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30419Cu;
            // 0x3041a0: 0x24849e30  addiu       $a0, $a0, -0x61D0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294942256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3141F0u;
    if (runtime->hasFunction(0x3141F0u)) {
        auto targetFn = runtime->lookupFunction(0x3141F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3041A4u; }
        if (ctx->pc != 0x3041A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sgLoopBuggy__FP11SubGameInfo_0x3141f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3041A4u; }
        if (ctx->pc != 0x3041A4u) { return; }
    }
    ctx->pc = 0x3041A4u;
label_3041a4:
    // 0x3041a4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x3041A4u;
    {
        const bool branch_taken_0x3041a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3041a4) {
            ctx->pc = 0x3041B0u;
            goto label_3041b0;
        }
    }
    ctx->pc = 0x3041ACu;
label_3041ac:
    // 0x3041ac: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3041acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3041b0:
    // 0x3041b0: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x3041B0u;
    {
        const bool branch_taken_0x3041b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3041B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3041B0u;
            // 0x3041b4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3041b0) {
            ctx->pc = 0x3041BCu;
            goto label_3041bc;
        }
    }
    ctx->pc = 0x3041B8u;
    // 0x3041b8: 0xaf80a104  sw          $zero, -0x5EFC($gp)
    ctx->pc = 0x3041b8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942980), GPR_U32(ctx, 0));
label_3041bc:
    // 0x3041bc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3041bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3041c0:
    // 0x3041c0: 0x3e00008  jr          $ra
    ctx->pc = 0x3041C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3041C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3041C0u;
            // 0x3041c4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3041C8u;
}
