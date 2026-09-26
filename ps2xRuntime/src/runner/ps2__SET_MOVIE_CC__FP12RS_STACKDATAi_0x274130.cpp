#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _SET_MOVIE_CC__FP12RS_STACKDATAi
// Address: 0x274130 - 0x27429c
void ps2__SET_MOVIE_CC__FP12RS_STACKDATAi_0x274130(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__SET_MOVIE_CC__FP12RS_STACKDATAi_0x274130");
#endif

    switch (ctx->pc) {
        case 0x274150u: goto label_274150;
        case 0x274174u: goto label_274174;
        case 0x274198u: goto label_274198;
        case 0x2741bcu: goto label_2741bc;
        case 0x2741e4u: goto label_2741e4;
        case 0x2741f4u: goto label_2741f4;
        case 0x274204u: goto label_274204;
        case 0x274210u: goto label_274210;
        case 0x274260u: goto label_274260;
        default: break;
    }

    ctx->pc = 0x274130u;

    // 0x274130: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x274130u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x274134: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x274134u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x274138: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x274138u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x27413c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x27413cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x274140: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x274140u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x274144: 0x24910008  addiu       $s1, $a0, 0x8
    ctx->pc = 0x274144u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x274148: 0xc097e18  jal         func_25F860
    ctx->pc = 0x274148u;
    SET_GPR_U32(ctx, 31, 0x274150u);
    ctx->pc = 0x27414Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x274148u;
            // 0x27414c: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x274150u; }
        if (ctx->pc != 0x274150u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x274150u; }
        if (ctx->pc != 0x274150u) { return; }
    }
    ctx->pc = 0x274150u;
label_274150:
    // 0x274150: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x274150u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x274154: 0x10430021  beq         $v0, $v1, . + 4 + (0x21 << 2)
    ctx->pc = 0x274154u;
    {
        const bool branch_taken_0x274154 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x274158u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x274154u;
            // 0x274158: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x274154) {
            ctx->pc = 0x2741DCu;
            goto label_2741dc;
        }
    }
    ctx->pc = 0x27415Cu;
    // 0x27415c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x27415Cu;
    {
        const bool branch_taken_0x27415c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x274160u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27415Cu;
            // 0x274160: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27415c) {
            ctx->pc = 0x27416Cu;
            goto label_27416c;
        }
    }
    ctx->pc = 0x274164u;
    // 0x274164: 0x10000043  b           . + 4 + (0x43 << 2)
    ctx->pc = 0x274164u;
    {
        const bool branch_taken_0x274164 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x274168u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x274164u;
            // 0x274168: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x274164) {
            ctx->pc = 0x274274u;
            goto label_274274;
        }
    }
    ctx->pc = 0x27416Cu;
label_27416c:
    // 0x27416c: 0xc097e18  jal         func_25F860
    ctx->pc = 0x27416Cu;
    SET_GPR_U32(ctx, 31, 0x274174u);
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x274174u; }
        if (ctx->pc != 0x274174u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x274174u; }
        if (ctx->pc != 0x274174u) { return; }
    }
    ctx->pc = 0x274174u;
label_274174:
    // 0x274174: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x274174u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x274178: 0xac22e634  sw          $v0, -0x19CC($at)
    ctx->pc = 0x274178u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294960692), GPR_U32(ctx, 2));
    // 0x27417c: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x27417cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x274180: 0x8c22e634  lw          $v0, -0x19CC($at)
    ctx->pc = 0x274180u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294960692)));
    // 0x274184: 0x1440003e  bnez        $v0, . + 4 + (0x3E << 2)
    ctx->pc = 0x274184u;
    {
        const bool branch_taken_0x274184 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x274188u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x274184u;
            // 0x274188: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x274184) {
            ctx->pc = 0x274280u;
            goto label_274280;
        }
    }
    ctx->pc = 0x27418Cu;
    // 0x27418c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x27418cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x274190: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x274190u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x274194: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x274194u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_274198:
    // 0x274198: 0x3c0201ed  lui         $v0, 0x1ED
    ctx->pc = 0x274198u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)493 << 16));
    // 0x27419c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x27419cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2741a0: 0x2442e430  addiu       $v0, $v0, -0x1BD0
    ctx->pc = 0x2741a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960176));
    // 0x2741a4: 0x24060080  addiu       $a2, $zero, 0x80
    ctx->pc = 0x2741a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x2741a8: 0x519821  addu        $s3, $v0, $s1
    ctx->pc = 0x2741a8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x2741ac: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x2741acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x2741b0: 0xae600208  sw          $zero, 0x208($s3)
    ctx->pc = 0x2741b0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 520), GPR_U32(ctx, 0));
    // 0x2741b4: 0xc049c86  jal         func_127218
    ctx->pc = 0x2741B4u;
    SET_GPR_U32(ctx, 31, 0x2741BCu);
    ctx->pc = 0x2741B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2741B4u;
            // 0x2741b8: 0x24440228  addiu       $a0, $v0, 0x228 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 552));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127218u;
    if (runtime->hasFunction(0x127218u)) {
        auto targetFn = runtime->lookupFunction(0x127218u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2741BCu; }
        if (ctx->pc != 0x2741BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memset_0x127218(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2741BCu; }
        if (ctx->pc != 0x2741BCu) { return; }
    }
    ctx->pc = 0x2741BCu;
label_2741bc:
    // 0x2741bc: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2741bcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x2741c0: 0xae600218  sw          $zero, 0x218($s3)
    ctx->pc = 0x2741c0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 536), GPR_U32(ctx, 0));
    // 0x2741c4: 0x2a020004  slti        $v0, $s0, 0x4
    ctx->pc = 0x2741c4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x2741c8: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x2741c8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x2741cc: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
    ctx->pc = 0x2741CCu;
    {
        const bool branch_taken_0x2741cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2741D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2741CCu;
            // 0x2741d0: 0x26520080  addiu       $s2, $s2, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2741cc) {
            ctx->pc = 0x274198u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_274198;
        }
    }
    ctx->pc = 0x2741D4u;
    // 0x2741d4: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x2741D4u;
    {
        const bool branch_taken_0x2741d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2741d4) {
            ctx->pc = 0x27427Cu;
            goto label_27427c;
        }
    }
    ctx->pc = 0x2741DCu;
label_2741dc:
    // 0x2741dc: 0xc097e18  jal         func_25F860
    ctx->pc = 0x2741DCu;
    SET_GPR_U32(ctx, 31, 0x2741E4u);
    ctx->pc = 0x2741E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2741DCu;
            // 0x2741e0: 0x24910008  addiu       $s1, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2741E4u; }
        if (ctx->pc != 0x2741E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2741E4u; }
        if (ctx->pc != 0x2741E4u) { return; }
    }
    ctx->pc = 0x2741E4u;
label_2741e4:
    // 0x2741e4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2741e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2741e8: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x2741e8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2741ec: 0xc097e18  jal         func_25F860
    ctx->pc = 0x2741ECu;
    SET_GPR_U32(ctx, 31, 0x2741F4u);
    ctx->pc = 0x2741F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2741ECu;
            // 0x2741f0: 0x24910008  addiu       $s1, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2741F4u; }
        if (ctx->pc != 0x2741F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2741F4u; }
        if (ctx->pc != 0x2741F4u) { return; }
    }
    ctx->pc = 0x2741F4u;
label_2741f4:
    // 0x2741f4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2741f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2741f8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2741f8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2741fc: 0xc097e48  jal         func_25F920
    ctx->pc = 0x2741FCu;
    SET_GPR_U32(ctx, 31, 0x274204u);
    ctx->pc = 0x274200u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2741FCu;
            // 0x274200: 0x24910008  addiu       $s1, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F920u;
    if (runtime->hasFunction(0x25F920u)) {
        auto targetFn = runtime->lookupFunction(0x25F920u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x274204u; }
        if (ctx->pc != 0x274204u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackString__FP12RS_STACKDATA_0x25f920(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x274204u; }
        if (ctx->pc != 0x274204u) { return; }
    }
    ctx->pc = 0x274204u;
label_274204:
    // 0x274204: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x274204u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x274208: 0xc097e18  jal         func_25F860
    ctx->pc = 0x274208u;
    SET_GPR_U32(ctx, 31, 0x274210u);
    ctx->pc = 0x27420Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x274208u;
            // 0x27420c: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x274210u; }
        if (ctx->pc != 0x274210u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x274210u; }
        if (ctx->pc != 0x274210u) { return; }
    }
    ctx->pc = 0x274210u;
label_274210:
    // 0x274210: 0x6610003  bgez        $s3, . + 4 + (0x3 << 2)
    ctx->pc = 0x274210u;
    {
        const bool branch_taken_0x274210 = (GPR_S32(ctx, 19) >= 0);
        ctx->pc = 0x274214u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x274210u;
            // 0x274214: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x274210) {
            ctx->pc = 0x274220u;
            goto label_274220;
        }
    }
    ctx->pc = 0x274218u;
    // 0x274218: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x274218u;
    {
        const bool branch_taken_0x274218 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27421Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x274218u;
            // 0x27421c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x274218) {
            ctx->pc = 0x274280u;
            goto label_274280;
        }
    }
    ctx->pc = 0x274220u;
label_274220:
    // 0x274220: 0x2a620004  slti        $v0, $s3, 0x4
    ctx->pc = 0x274220u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x274224: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x274224u;
    {
        const bool branch_taken_0x274224 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x274228u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x274224u;
            // 0x274228: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x274224) {
            ctx->pc = 0x274234u;
            goto label_274234;
        }
    }
    ctx->pc = 0x27422Cu;
    // 0x27422c: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x27422Cu;
    {
        const bool branch_taken_0x27422c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x274230u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27422Cu;
            // 0x274230: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27422c) {
            ctx->pc = 0x274280u;
            goto label_274280;
        }
    }
    ctx->pc = 0x274234u;
label_274234:
    // 0x274234: 0x3c0201ed  lui         $v0, 0x1ED
    ctx->pc = 0x274234u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)493 << 16));
    // 0x274238: 0x139080  sll         $s2, $s3, 2
    ctx->pc = 0x274238u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x27423c: 0x2442e638  addiu       $v0, $v0, -0x19C8
    ctx->pc = 0x27423cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960696));
    // 0x274240: 0x522021  addu        $a0, $v0, $s2
    ctx->pc = 0x274240u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x274244: 0x1319c0  sll         $v1, $s3, 7
    ctx->pc = 0x274244u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 7));
    // 0x274248: 0x3c0201ed  lui         $v0, 0x1ED
    ctx->pc = 0x274248u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)493 << 16));
    // 0x27424c: 0xac900000  sw          $s0, 0x0($a0)
    ctx->pc = 0x27424cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 16));
    // 0x274250: 0x2442e430  addiu       $v0, $v0, -0x1BD0
    ctx->pc = 0x274250u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960176));
    // 0x274254: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x274254u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x274258: 0xc04a3dc  jal         func_128F70
    ctx->pc = 0x274258u;
    SET_GPR_U32(ctx, 31, 0x274260u);
    ctx->pc = 0x27425Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x274258u;
            // 0x27425c: 0x24440228  addiu       $a0, $v0, 0x228 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 552));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128F70u;
    if (runtime->hasFunction(0x128F70u)) {
        auto targetFn = runtime->lookupFunction(0x128F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x274260u; }
        if (ctx->pc != 0x274260u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x128f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x274260u; }
        if (ctx->pc != 0x274260u) { return; }
    }
    ctx->pc = 0x274260u;
label_274260:
    // 0x274260: 0x3c0201ed  lui         $v0, 0x1ED
    ctx->pc = 0x274260u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)493 << 16));
    // 0x274264: 0x2442e648  addiu       $v0, $v0, -0x19B8
    ctx->pc = 0x274264u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960712));
    // 0x274268: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x274268u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x27426c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x27426Cu;
    {
        const bool branch_taken_0x27426c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x274270u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27426Cu;
            // 0x274270: 0xac510000  sw          $s1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27426c) {
            ctx->pc = 0x27427Cu;
            goto label_27427c;
        }
    }
    ctx->pc = 0x274274u;
label_274274:
    // 0x274274: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x274274u;
    {
        const bool branch_taken_0x274274 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x274278u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x274274u;
            // 0x274278: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x274274) {
            ctx->pc = 0x274284u;
            goto label_274284;
        }
    }
    ctx->pc = 0x27427Cu;
label_27427c:
    // 0x27427c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x27427cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_274280:
    // 0x274280: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x274280u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_274284:
    // 0x274284: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x274284u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x274288: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x274288u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x27428c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x27428cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x274290: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x274290u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x274294: 0x3e00008  jr          $ra
    ctx->pc = 0x274294u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x274298u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x274294u;
            // 0x274298: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x27429Cu;
}
