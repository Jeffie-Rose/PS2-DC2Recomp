#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Initialize__8CEditMapFv
// Address: 0x1b02b0 - 0x1b0390
void Initialize__8CEditMapFv_0x1b02b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Initialize__8CEditMapFv_0x1b02b0");
#endif

    switch (ctx->pc) {
        case 0x1b02d8u: goto label_1b02d8;
        case 0x1b0344u: goto label_1b0344;
        case 0x1b0368u: goto label_1b0368;
        case 0x1b0380u: goto label_1b0380;
        default: break;
    }

    ctx->pc = 0x1b02b0u;

    // 0x1b02b0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1b02b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1b02b4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1b02b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1b02b8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1b02b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1b02bc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1b02bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1b02c0: 0xac820f80  sw          $v0, 0xF80($a0)
    ctx->pc = 0x1b02c0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 3968), GPR_U32(ctx, 2));
    // 0x1b02c4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1b02c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b02c8: 0xac800d40  sw          $zero, 0xD40($a0)
    ctx->pc = 0x1b02c8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 3392), GPR_U32(ctx, 0));
    // 0x1b02cc: 0xac800d44  sw          $zero, 0xD44($a0)
    ctx->pc = 0x1b02ccu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 3396), GPR_U32(ctx, 0));
    // 0x1b02d0: 0xc04e640  jal         func_139900
    ctx->pc = 0x1B02D0u;
    SET_GPR_U32(ctx, 31, 0x1B02D8u);
    ctx->pc = 0x1B02D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B02D0u;
            // 0x1b02d4: 0x26040d10  addiu       $a0, $s0, 0xD10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 3344));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139900u;
    if (runtime->hasFunction(0x139900u)) {
        auto targetFn = runtime->lookupFunction(0x139900u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B02D8u; }
        if (ctx->pc != 0x1B02D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Init__9mgCMemoryFv_0x139900(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B02D8u; }
        if (ctx->pc != 0x1B02D8u) { return; }
    }
    ctx->pc = 0x1B02D8u;
label_1b02d8:
    // 0x1b02d8: 0xae000f48  sw          $zero, 0xF48($s0)
    ctx->pc = 0x1b02d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3912), GPR_U32(ctx, 0));
    // 0x1b02dc: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1b02dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1b02e0: 0xae000f4c  sw          $zero, 0xF4C($s0)
    ctx->pc = 0x1b02e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3916), GPR_U32(ctx, 0));
    // 0x1b02e4: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1b02e4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b02e8: 0xae000fac  sw          $zero, 0xFAC($s0)
    ctx->pc = 0x1b02e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4012), GPR_U32(ctx, 0));
    // 0x1b02ec: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1b02ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b02f0: 0xae000fd0  sw          $zero, 0xFD0($s0)
    ctx->pc = 0x1b02f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4048), GPR_U32(ctx, 0));
    // 0x1b02f4: 0xae000fb0  sw          $zero, 0xFB0($s0)
    ctx->pc = 0x1b02f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4016), GPR_U32(ctx, 0));
    // 0x1b02f8: 0xae000fd4  sw          $zero, 0xFD4($s0)
    ctx->pc = 0x1b02f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4052), GPR_U32(ctx, 0));
    // 0x1b02fc: 0xae000fb4  sw          $zero, 0xFB4($s0)
    ctx->pc = 0x1b02fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4020), GPR_U32(ctx, 0));
    // 0x1b0300: 0xae000fd8  sw          $zero, 0xFD8($s0)
    ctx->pc = 0x1b0300u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4056), GPR_U32(ctx, 0));
    // 0x1b0304: 0xae000fb8  sw          $zero, 0xFB8($s0)
    ctx->pc = 0x1b0304u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4024), GPR_U32(ctx, 0));
    // 0x1b0308: 0xae000fdc  sw          $zero, 0xFDC($s0)
    ctx->pc = 0x1b0308u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4060), GPR_U32(ctx, 0));
    // 0x1b030c: 0xae000fbc  sw          $zero, 0xFBC($s0)
    ctx->pc = 0x1b030cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4028), GPR_U32(ctx, 0));
    // 0x1b0310: 0xae000fe0  sw          $zero, 0xFE0($s0)
    ctx->pc = 0x1b0310u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4064), GPR_U32(ctx, 0));
    // 0x1b0314: 0xae000fc0  sw          $zero, 0xFC0($s0)
    ctx->pc = 0x1b0314u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4032), GPR_U32(ctx, 0));
    // 0x1b0318: 0xae000fe4  sw          $zero, 0xFE4($s0)
    ctx->pc = 0x1b0318u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4068), GPR_U32(ctx, 0));
    // 0x1b031c: 0xae000fc4  sw          $zero, 0xFC4($s0)
    ctx->pc = 0x1b031cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4036), GPR_U32(ctx, 0));
    // 0x1b0320: 0xae000fe8  sw          $zero, 0xFE8($s0)
    ctx->pc = 0x1b0320u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4072), GPR_U32(ctx, 0));
    // 0x1b0324: 0xae000fc8  sw          $zero, 0xFC8($s0)
    ctx->pc = 0x1b0324u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4040), GPR_U32(ctx, 0));
    // 0x1b0328: 0xae000fec  sw          $zero, 0xFEC($s0)
    ctx->pc = 0x1b0328u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4076), GPR_U32(ctx, 0));
    // 0x1b032c: 0xae000ff0  sw          $zero, 0xFF0($s0)
    ctx->pc = 0x1b032cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4080), GPR_U32(ctx, 0));
    // 0x1b0330: 0xae000fcc  sw          $zero, 0xFCC($s0)
    ctx->pc = 0x1b0330u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4044), GPR_U32(ctx, 0));
    // 0x1b0334: 0xae000ff4  sw          $zero, 0xFF4($s0)
    ctx->pc = 0x1b0334u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4084), GPR_U32(ctx, 0));
    // 0x1b0338: 0xae000ff8  sw          $zero, 0xFF8($s0)
    ctx->pc = 0x1b0338u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4088), GPR_U32(ctx, 0));
    // 0x1b033c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1B033Cu;
    {
        const bool branch_taken_0x1b033c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B0340u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B033Cu;
            // 0x1b0340: 0xae020f50  sw          $v0, 0xF50($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 3920), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b033c) {
            ctx->pc = 0x1B0350u;
            goto label_1b0350;
        }
    }
    ctx->pc = 0x1B0344u;
label_1b0344:
    // 0x1b0344: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1b0344u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1b0348: 0xac400f54  sw          $zero, 0xF54($v0)
    ctx->pc = 0x1b0348u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 3924), GPR_U32(ctx, 0));
    // 0x1b034c: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x1b034cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
label_1b0350:
    // 0x1b0350: 0x8e020f50  lw          $v0, 0xF50($s0)
    ctx->pc = 0x1b0350u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3920)));
    // 0x1b0354: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x1b0354u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1b0358: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1B0358u;
    {
        const bool branch_taken_0x1b0358 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B035Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B0358u;
            // 0x1b035c: 0x2041021  addu        $v0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0358) {
            ctx->pc = 0x1B0344u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1b0344;
        }
    }
    ctx->pc = 0x1B0360u;
    // 0x1b0360: 0xc06c100  jal         func_1B0400
    ctx->pc = 0x1B0360u;
    SET_GPR_U32(ctx, 31, 0x1B0368u);
    ctx->pc = 0x1B0364u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B0360u;
            // 0x1b0364: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B0400u;
    if (runtime->hasFunction(0x1B0400u)) {
        auto targetFn = runtime->lookupFunction(0x1B0400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B0368u; }
        if (ctx->pc != 0x1B0368u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ClearHouse__8CEditMapFv_0x1b0400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B0368u; }
        if (ctx->pc != 0x1B0368u) { return; }
    }
    ctx->pc = 0x1B0368u;
label_1b0368:
    // 0x1b0368: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1b0368u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1b036c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b036cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b0370: 0xae020f64  sw          $v0, 0xF64($s0)
    ctx->pc = 0x1b0370u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3940), GPR_U32(ctx, 2));
    // 0x1b0374: 0xae000f68  sw          $zero, 0xF68($s0)
    ctx->pc = 0x1b0374u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3944), GPR_U32(ctx, 0));
    // 0x1b0378: 0xc05721c  jal         func_15C870
    ctx->pc = 0x1B0378u;
    SET_GPR_U32(ctx, 31, 0x1B0380u);
    ctx->pc = 0x1B037Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B0378u;
            // 0x1b037c: 0xae001050  sw          $zero, 0x1050($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4176), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15C870u;
    if (runtime->hasFunction(0x15C870u)) {
        auto targetFn = runtime->lookupFunction(0x15C870u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B0380u; }
        if (ctx->pc != 0x1B0380u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Initialize__4CMapFv_0x15c870(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B0380u; }
        if (ctx->pc != 0x1B0380u) { return; }
    }
    ctx->pc = 0x1B0380u;
label_1b0380:
    // 0x1b0380: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1b0380u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b0384: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1b0384u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b0388: 0x3e00008  jr          $ra
    ctx->pc = 0x1B0388u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B038Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B0388u;
            // 0x1b038c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B0390u;
}
