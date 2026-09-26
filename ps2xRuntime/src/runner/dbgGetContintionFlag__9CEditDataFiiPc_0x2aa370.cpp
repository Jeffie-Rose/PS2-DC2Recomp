#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: dbgGetContintionFlag__9CEditDataFiiPc
// Address: 0x2aa370 - 0x2aa414
void dbgGetContintionFlag__9CEditDataFiiPc_0x2aa370(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("dbgGetContintionFlag__9CEditDataFiiPc_0x2aa370");
#endif

    switch (ctx->pc) {
        case 0x2aa3f4u: goto label_2aa3f4;
        default: break;
    }

    ctx->pc = 0x2aa370u;

    // 0x2aa370: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2aa370u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2aa374: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2aa374u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2aa378: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2aa378u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2aa37c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2aa37cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2aa380: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x2aa380u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aa384: 0x6000004  bltz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2AA384u;
    {
        const bool branch_taken_0x2aa384 = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x2AA388u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AA384u;
            // 0x2aa388: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aa384) {
            ctx->pc = 0x2AA398u;
            goto label_2aa398;
        }
    }
    ctx->pc = 0x2AA38Cu;
    // 0x2aa38c: 0x2a020040  slti        $v0, $s0, 0x40
    ctx->pc = 0x2aa38cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)64) ? 1 : 0);
    // 0x2aa390: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2AA390u;
    {
        const bool branch_taken_0x2aa390 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2aa390) {
            ctx->pc = 0x2AA3A0u;
            goto label_2aa3a0;
        }
    }
    ctx->pc = 0x2AA398u;
label_2aa398:
    // 0x2aa398: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x2AA398u;
    {
        const bool branch_taken_0x2aa398 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AA39Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AA398u;
            // 0x2aa39c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aa398) {
            ctx->pc = 0x2AA400u;
            goto label_2aa400;
        }
    }
    ctx->pc = 0x2AA3A0u;
label_2aa3a0:
    // 0x2aa3a0: 0x10e00015  beqz        $a3, . + 4 + (0x15 << 2)
    ctx->pc = 0x2AA3A0u;
    {
        const bool branch_taken_0x2aa3a0 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AA3A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AA3A0u;
            // 0x2aa3a4: 0x2111021  addu        $v0, $s0, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aa3a0) {
            ctx->pc = 0x2AA3F8u;
            goto label_2aa3f8;
        }
    }
    ctx->pc = 0x2AA3A8u;
    // 0x2aa3a8: 0x4a00012  bltz        $a1, . + 4 + (0x12 << 2)
    ctx->pc = 0x2AA3A8u;
    {
        const bool branch_taken_0x2aa3a8 = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x2AA3ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AA3A8u;
            // 0x2aa3ac: 0xa0e00000  sb          $zero, 0x0($a3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aa3a8) {
            ctx->pc = 0x2AA3F4u;
            goto label_2aa3f4;
        }
    }
    ctx->pc = 0x2AA3B0u;
    // 0x2aa3b0: 0x28a10006  slti        $at, $a1, 0x6
    ctx->pc = 0x2aa3b0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x2aa3b4: 0x1020000f  beqz        $at, . + 4 + (0xF << 2)
    ctx->pc = 0x2AA3B4u;
    {
        const bool branch_taken_0x2aa3b4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AA3B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AA3B4u;
            // 0x2aa3b8: 0x51040  sll         $v0, $a1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aa3b4) {
            ctx->pc = 0x2AA3F4u;
            goto label_2aa3f4;
        }
    }
    ctx->pc = 0x2AA3BCu;
    // 0x2aa3bc: 0x3c0301f0  lui         $v1, 0x1F0
    ctx->pc = 0x2aa3bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)496 << 16));
    // 0x2aa3c0: 0x452021  addu        $a0, $v0, $a1
    ctx->pc = 0x2aa3c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x2aa3c4: 0x24636300  addiu       $v1, $v1, 0x6300
    ctx->pc = 0x2aa3c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 25344));
    // 0x2aa3c8: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x2aa3c8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2aa3cc: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x2aa3ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x2aa3d0: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x2aa3d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x2aa3d4: 0x42180  sll         $a0, $a0, 6
    ctx->pc = 0x2aa3d4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 6));
    // 0x2aa3d8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2aa3d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2aa3dc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2aa3dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2aa3e0: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x2aa3e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2aa3e4: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2AA3E4u;
    {
        const bool branch_taken_0x2aa3e4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AA3E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AA3E4u;
            // 0x2aa3e8: 0xe0202d  daddu       $a0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aa3e4) {
            ctx->pc = 0x2AA3F4u;
            goto label_2aa3f4;
        }
    }
    ctx->pc = 0x2AA3ECu;
    // 0x2aa3ec: 0xc04a3dc  jal         func_128F70
    ctx->pc = 0x2AA3ECu;
    SET_GPR_U32(ctx, 31, 0x2AA3F4u);
    ctx->pc = 0x128F70u;
    if (runtime->hasFunction(0x128F70u)) {
        auto targetFn = runtime->lookupFunction(0x128F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AA3F4u; }
        if (ctx->pc != 0x2AA3F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x128f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AA3F4u; }
        if (ctx->pc != 0x2AA3F4u) { return; }
    }
    ctx->pc = 0x2AA3F4u;
label_2aa3f4:
    // 0x2aa3f4: 0x2111021  addu        $v0, $s0, $s1
    ctx->pc = 0x2aa3f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
label_2aa3f8:
    // 0x2aa3f8: 0x80425050  lb          $v0, 0x5050($v0)
    ctx->pc = 0x2aa3f8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 20560)));
    // 0x2aa3fc: 0x0  nop
    ctx->pc = 0x2aa3fcu;
    // NOP
label_2aa400:
    // 0x2aa400: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2aa400u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2aa404: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2aa404u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2aa408: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2aa408u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2aa40c: 0x3e00008  jr          $ra
    ctx->pc = 0x2AA40Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AA410u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AA40Cu;
            // 0x2aa410: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2AA414u;
}
