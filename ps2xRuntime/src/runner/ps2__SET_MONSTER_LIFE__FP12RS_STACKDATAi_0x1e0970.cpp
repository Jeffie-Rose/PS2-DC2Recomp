#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _SET_MONSTER_LIFE__FP12RS_STACKDATAi
// Address: 0x1e0970 - 0x1e0a20
void ps2__SET_MONSTER_LIFE__FP12RS_STACKDATAi_0x1e0970(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__SET_MONSTER_LIFE__FP12RS_STACKDATAi_0x1e0970");
#endif

    switch (ctx->pc) {
        case 0x1e09a0u: goto label_1e09a0;
        case 0x1e09b0u: goto label_1e09b0;
        case 0x1e09c4u: goto label_1e09c4;
        default: break;
    }

    ctx->pc = 0x1e0970u;

    // 0x1e0970: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1e0970u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1e0974: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e0974u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e0978: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e0978u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1e097c: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1e097cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1e0980: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1E0980u;
    {
        const bool branch_taken_0x1e0980 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1e0980) {
            ctx->pc = 0x1E09A8u;
            goto label_1e09a8;
        }
    }
    ctx->pc = 0x1E0988u;
    // 0x1e0988: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E0988u;
    {
        const bool branch_taken_0x1e0988 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e0988) {
            ctx->pc = 0x1E0998u;
            goto label_1e0998;
        }
    }
    ctx->pc = 0x1E0990u;
    // 0x1e0990: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x1E0990u;
    {
        const bool branch_taken_0x1e0990 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E0994u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E0990u;
            // 0x1e0994: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0990) {
            ctx->pc = 0x1E09CCu;
            goto label_1e09cc;
        }
    }
    ctx->pc = 0x1E0998u;
label_1e0998:
    // 0x1e0998: 0xc07819c  jal         func_1E0670
    ctx->pc = 0x1E0998u;
    SET_GPR_U32(ctx, 31, 0x1E09A0u);
    ctx->pc = 0x1E0670u;
    if (runtime->hasFunction(0x1E0670u)) {
        auto targetFn = runtime->lookupFunction(0x1E0670u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E09A0u; }
        if (ctx->pc != 0x1E09A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x1e0670(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E09A0u; }
        if (ctx->pc != 0x1E09A0u) { return; }
    }
    ctx->pc = 0x1E09A0u;
label_1e09a0:
    // 0x1e09a0: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1E09A0u;
    {
        const bool branch_taken_0x1e09a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e09a0) {
            ctx->pc = 0x1E09D4u;
            goto label_1e09d4;
        }
    }
    ctx->pc = 0x1E09A8u;
label_1e09a8:
    // 0x1e09a8: 0xc0781ac  jal         func_1E06B0
    ctx->pc = 0x1E09A8u;
    SET_GPR_U32(ctx, 31, 0x1E09B0u);
    ctx->pc = 0x1E06B0u;
    if (runtime->hasFunction(0x1E06B0u)) {
        auto targetFn = runtime->lookupFunction(0x1E06B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E09B0u; }
        if (ctx->pc != 0x1E09B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackFloat__FP12RS_STACKDATA_0x1e06b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E09B0u; }
        if (ctx->pc != 0x1E09B0u) { return; }
    }
    ctx->pc = 0x1E09B0u;
label_1e09b0:
    // 0x1e09b0: 0x8f828e70  lw          $v0, -0x7190($gp)
    ctx->pc = 0x1e09b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938224)));
    // 0x1e09b4: 0xc4411310  lwc1        $f1, 0x1310($v0)
    ctx->pc = 0x1e09b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4880)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e09b8: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1e09b8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1e09bc: 0xc0a248c  jal         func_289230
    ctx->pc = 0x1E09BCu;
    SET_GPR_U32(ctx, 31, 0x1E09C4u);
    ctx->pc = 0x1E09C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E09BCu;
            // 0x1e09c0: 0x46000b02  mul.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E09C4u; }
        if (ctx->pc != 0x1E09C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E09C4u; }
        if (ctx->pc != 0x1E09C4u) { return; }
    }
    ctx->pc = 0x1E09C4u;
label_1e09c4:
    // 0x1e09c4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1E09C4u;
    {
        const bool branch_taken_0x1e09c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e09c4) {
            ctx->pc = 0x1E09D4u;
            goto label_1e09d4;
        }
    }
    ctx->pc = 0x1E09CCu;
label_1e09cc:
    // 0x1e09cc: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x1E09CCu;
    {
        const bool branch_taken_0x1e09cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E09D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E09CCu;
            // 0x1e09d0: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e09cc) {
            ctx->pc = 0x1E0A18u;
            goto label_1e0a18;
        }
    }
    ctx->pc = 0x1E09D4u;
label_1e09d4:
    // 0x1e09d4: 0x4410002  bgez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1E09D4u;
    {
        const bool branch_taken_0x1e09d4 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x1e09d4) {
            ctx->pc = 0x1E09E0u;
            goto label_1e09e0;
        }
    }
    ctx->pc = 0x1E09DCu;
    // 0x1e09dc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1e09dcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e09e0:
    // 0x1e09e0: 0x8f848e70  lw          $a0, -0x7190($gp)
    ctx->pc = 0x1e09e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938224)));
    // 0x1e09e4: 0x8c831310  lw          $v1, 0x1310($a0)
    ctx->pc = 0x1e09e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4880)));
    // 0x1e09e8: 0x62082a  slt         $at, $v1, $v0
    ctx->pc = 0x1e09e8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1e09ec: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E09ECu;
    {
        const bool branch_taken_0x1e09ec = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E09F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E09ECu;
            // 0x1e09f0: 0x2082a  slt         $at, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e09ec) {
            ctx->pc = 0x1E09FCu;
            goto label_1e09fc;
        }
    }
    ctx->pc = 0x1E09F4u;
    // 0x1e09f4: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x1e09f4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e09f8: 0x2082a  slt         $at, $zero, $v0
    ctx->pc = 0x1e09f8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_1e09fc:
    // 0x1e09fc: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x1E09FCu;
    {
        const bool branch_taken_0x1e09fc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E0A00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E09FCu;
            // 0x1e0a00: 0xac821314  sw          $v0, 0x1314($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4884), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e09fc) {
            ctx->pc = 0x1E0A10u;
            goto label_1e0a10;
        }
    }
    ctx->pc = 0x1E0A04u;
    // 0x1e0a04: 0x8f828e70  lw          $v0, -0x7190($gp)
    ctx->pc = 0x1e0a04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938224)));
    // 0x1e0a08: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1e0a08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e0a0c: 0xac431330  sw          $v1, 0x1330($v0)
    ctx->pc = 0x1e0a0cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4912), GPR_U32(ctx, 3));
label_1e0a10:
    // 0x1e0a10: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e0a10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e0a14: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e0a14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1e0a18:
    // 0x1e0a18: 0x3e00008  jr          $ra
    ctx->pc = 0x1E0A18u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E0A1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E0A18u;
            // 0x1e0a1c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E0A20u;
}
