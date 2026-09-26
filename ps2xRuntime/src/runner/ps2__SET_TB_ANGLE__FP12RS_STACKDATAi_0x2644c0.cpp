#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _SET_TB_ANGLE__FP12RS_STACKDATAi
// Address: 0x2644c0 - 0x264538
void ps2__SET_TB_ANGLE__FP12RS_STACKDATAi_0x2644c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__SET_TB_ANGLE__FP12RS_STACKDATAi_0x2644c0");
#endif

    switch (ctx->pc) {
        case 0x264524u: goto label_264524;
        default: break;
    }

    ctx->pc = 0x2644c0u;

    // 0x2644c0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2644c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2644c4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2644c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2644c8: 0x8f8297dc  lw          $v0, -0x6824($gp)
    ctx->pc = 0x2644c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940636)));
    // 0x2644cc: 0x24422f90  addiu       $v0, $v0, 0x2F90
    ctx->pc = 0x2644ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12176));
    // 0x2644d0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2644D0u;
    {
        const bool branch_taken_0x2644d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2644d0) {
            ctx->pc = 0x2644E0u;
            goto label_2644e0;
        }
    }
    ctx->pc = 0x2644D8u;
    // 0x2644d8: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x2644D8u;
    {
        const bool branch_taken_0x2644d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2644DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2644D8u;
            // 0x2644dc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2644d8) {
            ctx->pc = 0x26452Cu;
            goto label_26452c;
        }
    }
    ctx->pc = 0x2644E0u;
label_2644e0:
    // 0x2644e0: 0x8c43007c  lw          $v1, 0x7C($v0)
    ctx->pc = 0x2644e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 124)));
    // 0x2644e4: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2644E4u;
    {
        const bool branch_taken_0x2644e4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2644E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2644E4u;
            // 0x2644e8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2644e4) {
            ctx->pc = 0x2644F4u;
            goto label_2644f4;
        }
    }
    ctx->pc = 0x2644ECu;
    // 0x2644ec: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x2644ECu;
    {
        const bool branch_taken_0x2644ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2644F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2644ECu;
            // 0x2644f0: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2644ec) {
            ctx->pc = 0x264530u;
            goto label_264530;
        }
    }
    ctx->pc = 0x2644F4u;
label_2644f4:
    // 0x2644f4: 0x8c650a9c  lw          $a1, 0xA9C($v1)
    ctx->pc = 0x2644f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 2716)));
    // 0x2644f8: 0x510c0  sll         $v0, $a1, 3
    ctx->pc = 0x2644f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x2644fc: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x2644fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x264500: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x264500u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x264504: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x264504u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x264508: 0x24430010  addiu       $v1, $v0, 0x10
    ctx->pc = 0x264508u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x26450c: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x26450Cu;
    {
        const bool branch_taken_0x26450c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x264510u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26450Cu;
            // 0x264510: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26450c) {
            ctx->pc = 0x26451Cu;
            goto label_26451c;
        }
    }
    ctx->pc = 0x264514u;
    // 0x264514: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x264514u;
    {
        const bool branch_taken_0x264514 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x264514) {
            ctx->pc = 0x26452Cu;
            goto label_26452c;
        }
    }
    ctx->pc = 0x26451Cu;
label_26451c:
    // 0x26451c: 0xc097e28  jal         func_25F8A0
    ctx->pc = 0x26451Cu;
    SET_GPR_U32(ctx, 31, 0x264524u);
    ctx->pc = 0x25F8A0u;
    if (runtime->hasFunction(0x25F8A0u)) {
        auto targetFn = runtime->lookupFunction(0x25F8A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x264524u; }
        if (ctx->pc != 0x264524u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackFloat__FP12RS_STACKDATA_0x25f8a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x264524u; }
        if (ctx->pc != 0x264524u) { return; }
    }
    ctx->pc = 0x264524u;
label_264524:
    // 0x264524: 0xe4600050  swc1        $f0, 0x50($v1)
    ctx->pc = 0x264524u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 80), bits); }
    // 0x264528: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x264528u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_26452c:
    // 0x26452c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x26452cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_264530:
    // 0x264530: 0x3e00008  jr          $ra
    ctx->pc = 0x264530u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x264534u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x264530u;
            // 0x264534: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x264538u;
}
