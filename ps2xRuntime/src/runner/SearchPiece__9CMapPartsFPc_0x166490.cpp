#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SearchPiece__9CMapPartsFPc
// Address: 0x166490 - 0x166514
void SearchPiece__9CMapPartsFPc_0x166490(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SearchPiece__9CMapPartsFPc_0x166490");
#endif

    switch (ctx->pc) {
        case 0x1664c8u: goto label_1664c8;
        case 0x1664d8u: goto label_1664d8;
        default: break;
    }

    ctx->pc = 0x166490u;

    // 0x166490: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x166490u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x166494: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x166494u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x166498: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x166498u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x16649c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x16649cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1664a0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1664a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1664a4: 0x8c9100b0  lw          $s1, 0xB0($a0)
    ctx->pc = 0x1664a4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 176)));
    // 0x1664a8: 0x12200003  beqz        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1664A8u;
    {
        const bool branch_taken_0x1664a8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1664ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1664A8u;
            // 0x1664ac: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1664a8) {
            ctx->pc = 0x1664B8u;
            goto label_1664b8;
        }
    }
    ctx->pc = 0x1664B0u;
    // 0x1664b0: 0x16400003  bnez        $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x1664B0u;
    {
        const bool branch_taken_0x1664b0 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x1664b0) {
            ctx->pc = 0x1664C0u;
            goto label_1664c0;
        }
    }
    ctx->pc = 0x1664B8u;
label_1664b8:
    // 0x1664b8: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x1664B8u;
    {
        const bool branch_taken_0x1664b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1664BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1664B8u;
            // 0x1664bc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1664b8) {
            ctx->pc = 0x1664FCu;
            goto label_1664fc;
        }
    }
    ctx->pc = 0x1664C0u;
label_1664c0:
    // 0x1664c0: 0x1220000c  beqz        $s1, . + 4 + (0xC << 2)
    ctx->pc = 0x1664C0u;
    {
        const bool branch_taken_0x1664c0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x1664c0) {
            ctx->pc = 0x1664F4u;
            goto label_1664f4;
        }
    }
    ctx->pc = 0x1664C8u;
label_1664c8:
    // 0x1664c8: 0x8e250090  lw          $a1, 0x90($s1)
    ctx->pc = 0x1664c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 144)));
    // 0x1664cc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1664ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1664d0: 0xc04a38a  jal         func_128E28
    ctx->pc = 0x1664D0u;
    SET_GPR_U32(ctx, 31, 0x1664D8u);
    ctx->pc = 0x1664D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1664D0u;
            // 0x1664d4: 0x26300010  addiu       $s0, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128E28u;
    if (runtime->hasFunction(0x128E28u)) {
        auto targetFn = runtime->lookupFunction(0x128E28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1664D8u; }
        if (ctx->pc != 0x1664D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcmp_0x128e28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1664D8u; }
        if (ctx->pc != 0x1664D8u) { return; }
    }
    ctx->pc = 0x1664D8u;
label_1664d8:
    // 0x1664d8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1664D8u;
    {
        const bool branch_taken_0x1664d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1664DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1664D8u;
            // 0x1664dc: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1664d8) {
            ctx->pc = 0x1664E8u;
            goto label_1664e8;
        }
    }
    ctx->pc = 0x1664E0u;
    // 0x1664e0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1664E0u;
    {
        const bool branch_taken_0x1664e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1664E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1664E0u;
            // 0x1664e4: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1664e0) {
            ctx->pc = 0x166500u;
            goto label_166500;
        }
    }
    ctx->pc = 0x1664E8u;
label_1664e8:
    // 0x1664e8: 0x8e310000  lw          $s1, 0x0($s1)
    ctx->pc = 0x1664e8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1664ec: 0x1620fff6  bnez        $s1, . + 4 + (-0xA << 2)
    ctx->pc = 0x1664ECu;
    {
        const bool branch_taken_0x1664ec = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x1664ec) {
            ctx->pc = 0x1664C8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1664c8;
        }
    }
    ctx->pc = 0x1664F4u;
label_1664f4:
    // 0x1664f4: 0x0  nop
    ctx->pc = 0x1664f4u;
    // NOP
    // 0x1664f8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1664f8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1664fc:
    // 0x1664fc: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1664fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_166500:
    // 0x166500: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x166500u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x166504: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x166504u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x166508: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x166508u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16650c: 0x3e00008  jr          $ra
    ctx->pc = 0x16650Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x166510u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16650Cu;
            // 0x166510: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x166514u;
}
