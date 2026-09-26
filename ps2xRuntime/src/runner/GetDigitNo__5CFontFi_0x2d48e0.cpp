#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetDigitNo__5CFontFi
// Address: 0x2d48e0 - 0x2d49f4
void GetDigitNo__5CFontFi_0x2d48e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetDigitNo__5CFontFi_0x2d48e0");
#endif

    switch (ctx->pc) {
        case 0x2d48fcu: goto label_2d48fc;
        case 0x2d4914u: goto label_2d4914;
        case 0x2d492cu: goto label_2d492c;
        case 0x2d4944u: goto label_2d4944;
        case 0x2d495cu: goto label_2d495c;
        case 0x2d4974u: goto label_2d4974;
        case 0x2d498cu: goto label_2d498c;
        case 0x2d49a4u: goto label_2d49a4;
        case 0x2d49bcu: goto label_2d49bc;
        case 0x2d49d4u: goto label_2d49d4;
        default: break;
    }

    ctx->pc = 0x2d48e0u;

    // 0x2d48e0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2d48e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2d48e4: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x2d48e4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x2d48e8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2d48e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2d48ec: 0x24840910  addiu       $a0, $a0, 0x910
    ctx->pc = 0x2d48ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2320));
    // 0x2d48f0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2d48f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2d48f4: 0xc0b51d0  jal         func_2D4740
    ctx->pc = 0x2D48F4u;
    SET_GPR_U32(ctx, 31, 0x2D48FCu);
    ctx->pc = 0x2D48F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D48F4u;
            // 0x2d48f8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D4740u;
    if (runtime->hasFunction(0x2D4740u)) {
        auto targetFn = runtime->lookupFunction(0x2D4740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D48FCu; }
        if (ctx->pc != 0x2D48FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetFontNo__FPc_0x2d4740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D48FCu; }
        if (ctx->pc != 0x2D48FCu) { return; }
    }
    ctx->pc = 0x2D48FCu;
label_2d48fc:
    // 0x2d48fc: 0x16020003  bne         $s0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2D48FCu;
    {
        const bool branch_taken_0x2d48fc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x2D4900u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D48FCu;
            // 0x2d4900: 0x3c040037  lui         $a0, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d48fc) {
            ctx->pc = 0x2D490Cu;
            goto label_2d490c;
        }
    }
    ctx->pc = 0x2D4904u;
    // 0x2d4904: 0x10000037  b           . + 4 + (0x37 << 2)
    ctx->pc = 0x2D4904u;
    {
        const bool branch_taken_0x2d4904 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D4908u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D4904u;
            // 0x2d4908: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d4904) {
            ctx->pc = 0x2D49E4u;
            goto label_2d49e4;
        }
    }
    ctx->pc = 0x2D490Cu;
label_2d490c:
    // 0x2d490c: 0xc0b51d0  jal         func_2D4740
    ctx->pc = 0x2D490Cu;
    SET_GPR_U32(ctx, 31, 0x2D4914u);
    ctx->pc = 0x2D4910u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D490Cu;
            // 0x2d4910: 0x24840918  addiu       $a0, $a0, 0x918 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2328));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D4740u;
    if (runtime->hasFunction(0x2D4740u)) {
        auto targetFn = runtime->lookupFunction(0x2D4740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D4914u; }
        if (ctx->pc != 0x2D4914u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetFontNo__FPc_0x2d4740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D4914u; }
        if (ctx->pc != 0x2D4914u) { return; }
    }
    ctx->pc = 0x2D4914u;
label_2d4914:
    // 0x2d4914: 0x16020003  bne         $s0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2D4914u;
    {
        const bool branch_taken_0x2d4914 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x2D4918u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D4914u;
            // 0x2d4918: 0x3c040037  lui         $a0, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d4914) {
            ctx->pc = 0x2D4924u;
            goto label_2d4924;
        }
    }
    ctx->pc = 0x2D491Cu;
    // 0x2d491c: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x2D491Cu;
    {
        const bool branch_taken_0x2d491c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D4920u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D491Cu;
            // 0x2d4920: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d491c) {
            ctx->pc = 0x2D49E4u;
            goto label_2d49e4;
        }
    }
    ctx->pc = 0x2D4924u;
label_2d4924:
    // 0x2d4924: 0xc0b51d0  jal         func_2D4740
    ctx->pc = 0x2D4924u;
    SET_GPR_U32(ctx, 31, 0x2D492Cu);
    ctx->pc = 0x2D4928u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D4924u;
            // 0x2d4928: 0x24840920  addiu       $a0, $a0, 0x920 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2336));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D4740u;
    if (runtime->hasFunction(0x2D4740u)) {
        auto targetFn = runtime->lookupFunction(0x2D4740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D492Cu; }
        if (ctx->pc != 0x2D492Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetFontNo__FPc_0x2d4740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D492Cu; }
        if (ctx->pc != 0x2D492Cu) { return; }
    }
    ctx->pc = 0x2D492Cu;
label_2d492c:
    // 0x2d492c: 0x16020003  bne         $s0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2D492Cu;
    {
        const bool branch_taken_0x2d492c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x2D4930u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D492Cu;
            // 0x2d4930: 0x3c040037  lui         $a0, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d492c) {
            ctx->pc = 0x2D493Cu;
            goto label_2d493c;
        }
    }
    ctx->pc = 0x2D4934u;
    // 0x2d4934: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x2D4934u;
    {
        const bool branch_taken_0x2d4934 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D4938u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D4934u;
            // 0x2d4938: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d4934) {
            ctx->pc = 0x2D49E4u;
            goto label_2d49e4;
        }
    }
    ctx->pc = 0x2D493Cu;
label_2d493c:
    // 0x2d493c: 0xc0b51d0  jal         func_2D4740
    ctx->pc = 0x2D493Cu;
    SET_GPR_U32(ctx, 31, 0x2D4944u);
    ctx->pc = 0x2D4940u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D493Cu;
            // 0x2d4940: 0x24840928  addiu       $a0, $a0, 0x928 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2344));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D4740u;
    if (runtime->hasFunction(0x2D4740u)) {
        auto targetFn = runtime->lookupFunction(0x2D4740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D4944u; }
        if (ctx->pc != 0x2D4944u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetFontNo__FPc_0x2d4740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D4944u; }
        if (ctx->pc != 0x2D4944u) { return; }
    }
    ctx->pc = 0x2D4944u;
label_2d4944:
    // 0x2d4944: 0x16020003  bne         $s0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2D4944u;
    {
        const bool branch_taken_0x2d4944 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x2D4948u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D4944u;
            // 0x2d4948: 0x3c040037  lui         $a0, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d4944) {
            ctx->pc = 0x2D4954u;
            goto label_2d4954;
        }
    }
    ctx->pc = 0x2D494Cu;
    // 0x2d494c: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x2D494Cu;
    {
        const bool branch_taken_0x2d494c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D4950u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D494Cu;
            // 0x2d4950: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d494c) {
            ctx->pc = 0x2D49E4u;
            goto label_2d49e4;
        }
    }
    ctx->pc = 0x2D4954u;
label_2d4954:
    // 0x2d4954: 0xc0b51d0  jal         func_2D4740
    ctx->pc = 0x2D4954u;
    SET_GPR_U32(ctx, 31, 0x2D495Cu);
    ctx->pc = 0x2D4958u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D4954u;
            // 0x2d4958: 0x24840930  addiu       $a0, $a0, 0x930 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2352));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D4740u;
    if (runtime->hasFunction(0x2D4740u)) {
        auto targetFn = runtime->lookupFunction(0x2D4740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D495Cu; }
        if (ctx->pc != 0x2D495Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetFontNo__FPc_0x2d4740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D495Cu; }
        if (ctx->pc != 0x2D495Cu) { return; }
    }
    ctx->pc = 0x2D495Cu;
label_2d495c:
    // 0x2d495c: 0x16020003  bne         $s0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2D495Cu;
    {
        const bool branch_taken_0x2d495c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x2D4960u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D495Cu;
            // 0x2d4960: 0x3c040037  lui         $a0, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d495c) {
            ctx->pc = 0x2D496Cu;
            goto label_2d496c;
        }
    }
    ctx->pc = 0x2D4964u;
    // 0x2d4964: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x2D4964u;
    {
        const bool branch_taken_0x2d4964 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D4968u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D4964u;
            // 0x2d4968: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d4964) {
            ctx->pc = 0x2D49E4u;
            goto label_2d49e4;
        }
    }
    ctx->pc = 0x2D496Cu;
label_2d496c:
    // 0x2d496c: 0xc0b51d0  jal         func_2D4740
    ctx->pc = 0x2D496Cu;
    SET_GPR_U32(ctx, 31, 0x2D4974u);
    ctx->pc = 0x2D4970u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D496Cu;
            // 0x2d4970: 0x24840938  addiu       $a0, $a0, 0x938 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2360));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D4740u;
    if (runtime->hasFunction(0x2D4740u)) {
        auto targetFn = runtime->lookupFunction(0x2D4740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D4974u; }
        if (ctx->pc != 0x2D4974u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetFontNo__FPc_0x2d4740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D4974u; }
        if (ctx->pc != 0x2D4974u) { return; }
    }
    ctx->pc = 0x2D4974u;
label_2d4974:
    // 0x2d4974: 0x16020003  bne         $s0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2D4974u;
    {
        const bool branch_taken_0x2d4974 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x2D4978u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D4974u;
            // 0x2d4978: 0x3c040037  lui         $a0, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d4974) {
            ctx->pc = 0x2D4984u;
            goto label_2d4984;
        }
    }
    ctx->pc = 0x2D497Cu;
    // 0x2d497c: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x2D497Cu;
    {
        const bool branch_taken_0x2d497c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D4980u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D497Cu;
            // 0x2d4980: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d497c) {
            ctx->pc = 0x2D49E4u;
            goto label_2d49e4;
        }
    }
    ctx->pc = 0x2D4984u;
label_2d4984:
    // 0x2d4984: 0xc0b51d0  jal         func_2D4740
    ctx->pc = 0x2D4984u;
    SET_GPR_U32(ctx, 31, 0x2D498Cu);
    ctx->pc = 0x2D4988u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D4984u;
            // 0x2d4988: 0x24840940  addiu       $a0, $a0, 0x940 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2368));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D4740u;
    if (runtime->hasFunction(0x2D4740u)) {
        auto targetFn = runtime->lookupFunction(0x2D4740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D498Cu; }
        if (ctx->pc != 0x2D498Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetFontNo__FPc_0x2d4740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D498Cu; }
        if (ctx->pc != 0x2D498Cu) { return; }
    }
    ctx->pc = 0x2D498Cu;
label_2d498c:
    // 0x2d498c: 0x16020003  bne         $s0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2D498Cu;
    {
        const bool branch_taken_0x2d498c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x2D4990u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D498Cu;
            // 0x2d4990: 0x3c040037  lui         $a0, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d498c) {
            ctx->pc = 0x2D499Cu;
            goto label_2d499c;
        }
    }
    ctx->pc = 0x2D4994u;
    // 0x2d4994: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x2D4994u;
    {
        const bool branch_taken_0x2d4994 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D4998u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D4994u;
            // 0x2d4998: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d4994) {
            ctx->pc = 0x2D49E4u;
            goto label_2d49e4;
        }
    }
    ctx->pc = 0x2D499Cu;
label_2d499c:
    // 0x2d499c: 0xc0b51d0  jal         func_2D4740
    ctx->pc = 0x2D499Cu;
    SET_GPR_U32(ctx, 31, 0x2D49A4u);
    ctx->pc = 0x2D49A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D499Cu;
            // 0x2d49a0: 0x24840948  addiu       $a0, $a0, 0x948 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2376));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D4740u;
    if (runtime->hasFunction(0x2D4740u)) {
        auto targetFn = runtime->lookupFunction(0x2D4740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D49A4u; }
        if (ctx->pc != 0x2D49A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetFontNo__FPc_0x2d4740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D49A4u; }
        if (ctx->pc != 0x2D49A4u) { return; }
    }
    ctx->pc = 0x2D49A4u;
label_2d49a4:
    // 0x2d49a4: 0x16020003  bne         $s0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2D49A4u;
    {
        const bool branch_taken_0x2d49a4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x2D49A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D49A4u;
            // 0x2d49a8: 0x3c040037  lui         $a0, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d49a4) {
            ctx->pc = 0x2D49B4u;
            goto label_2d49b4;
        }
    }
    ctx->pc = 0x2D49ACu;
    // 0x2d49ac: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x2D49ACu;
    {
        const bool branch_taken_0x2d49ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D49B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D49ACu;
            // 0x2d49b0: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d49ac) {
            ctx->pc = 0x2D49E4u;
            goto label_2d49e4;
        }
    }
    ctx->pc = 0x2D49B4u;
label_2d49b4:
    // 0x2d49b4: 0xc0b51d0  jal         func_2D4740
    ctx->pc = 0x2D49B4u;
    SET_GPR_U32(ctx, 31, 0x2D49BCu);
    ctx->pc = 0x2D49B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D49B4u;
            // 0x2d49b8: 0x24840950  addiu       $a0, $a0, 0x950 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2384));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D4740u;
    if (runtime->hasFunction(0x2D4740u)) {
        auto targetFn = runtime->lookupFunction(0x2D4740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D49BCu; }
        if (ctx->pc != 0x2D49BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetFontNo__FPc_0x2d4740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D49BCu; }
        if (ctx->pc != 0x2D49BCu) { return; }
    }
    ctx->pc = 0x2D49BCu;
label_2d49bc:
    // 0x2d49bc: 0x16020003  bne         $s0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2D49BCu;
    {
        const bool branch_taken_0x2d49bc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x2D49C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D49BCu;
            // 0x2d49c0: 0x3c040037  lui         $a0, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d49bc) {
            ctx->pc = 0x2D49CCu;
            goto label_2d49cc;
        }
    }
    ctx->pc = 0x2D49C4u;
    // 0x2d49c4: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2D49C4u;
    {
        const bool branch_taken_0x2d49c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D49C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D49C4u;
            // 0x2d49c8: 0x24020009  addiu       $v0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d49c4) {
            ctx->pc = 0x2D49E4u;
            goto label_2d49e4;
        }
    }
    ctx->pc = 0x2D49CCu;
label_2d49cc:
    // 0x2d49cc: 0xc0b51d0  jal         func_2D4740
    ctx->pc = 0x2D49CCu;
    SET_GPR_U32(ctx, 31, 0x2D49D4u);
    ctx->pc = 0x2D49D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D49CCu;
            // 0x2d49d0: 0x24840958  addiu       $a0, $a0, 0x958 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2392));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D4740u;
    if (runtime->hasFunction(0x2D4740u)) {
        auto targetFn = runtime->lookupFunction(0x2D4740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D49D4u; }
        if (ctx->pc != 0x2D49D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetFontNo__FPc_0x2d4740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D49D4u; }
        if (ctx->pc != 0x2D49D4u) { return; }
    }
    ctx->pc = 0x2D49D4u;
label_2d49d4:
    // 0x2d49d4: 0x16020003  bne         $s0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2D49D4u;
    {
        const bool branch_taken_0x2d49d4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x2D49D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D49D4u;
            // 0x2d49d8: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d49d4) {
            ctx->pc = 0x2D49E4u;
            goto label_2d49e4;
        }
    }
    ctx->pc = 0x2D49DCu;
    // 0x2d49dc: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x2D49DCu;
    {
        const bool branch_taken_0x2d49dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D49E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D49DCu;
            // 0x2d49e0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d49dc) {
            ctx->pc = 0x2D49E4u;
            goto label_2d49e4;
        }
    }
    ctx->pc = 0x2D49E4u;
label_2d49e4:
    // 0x2d49e4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2d49e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d49e8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2d49e8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d49ec: 0x3e00008  jr          $ra
    ctx->pc = 0x2D49ECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D49F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D49ECu;
            // 0x2d49f0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2D49F4u;
}
