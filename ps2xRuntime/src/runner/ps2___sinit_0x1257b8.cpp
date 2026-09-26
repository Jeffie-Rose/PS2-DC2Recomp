#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: __sinit
// Address: 0x1257b8 - 0x125844
void ps2___sinit_0x1257b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___sinit_0x1257b8");
#endif

    switch (ctx->pc) {
        case 0x1257f8u: goto label_1257f8;
        case 0x12580cu: goto label_12580c;
        case 0x125820u: goto label_125820;
        default: break;
    }

    ctx->pc = 0x1257b8u;

    // 0x1257b8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1257b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1257bc: 0x3c020012  lui         $v0, 0x12
    ctx->pc = 0x1257bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18 << 16));
    // 0x1257c0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1257c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1257c4: 0x24425798  addiu       $v0, $v0, 0x5798
    ctx->pc = 0x1257c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22424));
    // 0x1257c8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1257c8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1257cc: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x1257ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x1257d0: 0x261101e4  addiu       $s1, $s0, 0x1E4
    ctx->pc = 0x1257d0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 484));
    // 0x1257d4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1257d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1257d8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1257d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1257dc: 0xae02003c  sw          $v0, 0x3C($s0)
    ctx->pc = 0x1257dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 2));
    // 0x1257e0: 0xae030038  sw          $v1, 0x38($s0)
    ctx->pc = 0x1257e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 3));
    // 0x1257e4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1257e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1257e8: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x1257e8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1257ec: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x1257ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1257f0: 0xc04957c  jal         func_1255F0
    ctx->pc = 0x1257F0u;
    SET_GPR_U32(ctx, 31, 0x1257F8u);
    ctx->pc = 0x1257F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1257F0u;
            // 0x1257f4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1255F0u;
    if (runtime->hasFunction(0x1255F0u)) {
        auto targetFn = runtime->lookupFunction(0x1255F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1257F8u; }
        if (ctx->pc != 0x1257F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        std_0x1255f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1257F8u; }
        if (ctx->pc != 0x1257F8u) { return; }
    }
    ctx->pc = 0x1257F8u;
label_1257f8:
    // 0x1257f8: 0x2604023c  addiu       $a0, $s0, 0x23C
    ctx->pc = 0x1257f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 572));
    // 0x1257fc: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x1257fcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x125800: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x125800u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x125804: 0xc04957c  jal         func_1255F0
    ctx->pc = 0x125804u;
    SET_GPR_U32(ctx, 31, 0x12580Cu);
    ctx->pc = 0x125808u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x125804u;
            // 0x125808: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1255F0u;
    if (runtime->hasFunction(0x1255F0u)) {
        auto targetFn = runtime->lookupFunction(0x1255F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12580Cu; }
        if (ctx->pc != 0x12580Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        std_0x1255f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12580Cu; }
        if (ctx->pc != 0x12580Cu) { return; }
    }
    ctx->pc = 0x12580Cu;
label_12580c:
    // 0x12580c: 0x26040294  addiu       $a0, $s0, 0x294
    ctx->pc = 0x12580cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 660));
    // 0x125810: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x125810u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x125814: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x125814u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x125818: 0xc04957c  jal         func_1255F0
    ctx->pc = 0x125818u;
    SET_GPR_U32(ctx, 31, 0x125820u);
    ctx->pc = 0x12581Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x125818u;
            // 0x12581c: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1255F0u;
    if (runtime->hasFunction(0x1255F0u)) {
        auto targetFn = runtime->lookupFunction(0x1255F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x125820u; }
        if (ctx->pc != 0x125820u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        std_0x1255f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x125820u; }
        if (ctx->pc != 0x125820u) { return; }
    }
    ctx->pc = 0x125820u;
label_125820:
    // 0x125820: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x125820u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x125824: 0xae1101e0  sw          $s1, 0x1E0($s0)
    ctx->pc = 0x125824u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 480), GPR_U32(ctx, 17));
    // 0x125828: 0xae0201dc  sw          $v0, 0x1DC($s0)
    ctx->pc = 0x125828u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 476), GPR_U32(ctx, 2));
    // 0x12582c: 0xae0001d8  sw          $zero, 0x1D8($s0)
    ctx->pc = 0x12582cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 472), GPR_U32(ctx, 0));
    // 0x125830: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x125830u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x125834: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x125834u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x125838: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x125838u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12583c: 0x3e00008  jr          $ra
    ctx->pc = 0x12583Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x125840u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12583Cu;
            // 0x125840: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x125844u;
}
