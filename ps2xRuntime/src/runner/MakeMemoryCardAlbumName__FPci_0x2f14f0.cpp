#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: MakeMemoryCardAlbumName__FPci
// Address: 0x2f14f0 - 0x2f1540
void MakeMemoryCardAlbumName__FPci_0x2f14f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("MakeMemoryCardAlbumName__FPci_0x2f14f0");
#endif

    switch (ctx->pc) {
        case 0x2f1518u: goto label_2f1518;
        case 0x2f152cu: goto label_2f152c;
        default: break;
    }

    ctx->pc = 0x2f14f0u;

    // 0x2f14f0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2f14f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2f14f4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2f14f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2f14f8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2f14f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2f14fc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2f14fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2f1500: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2f1500u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1504: 0x12200009  beqz        $s1, . + 4 + (0x9 << 2)
    ctx->pc = 0x2F1504u;
    {
        const bool branch_taken_0x2f1504 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F1508u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F1504u;
            // 0x2f1508: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f1504) {
            ctx->pc = 0x2F152Cu;
            goto label_2f152c;
        }
    }
    ctx->pc = 0x2F150Cu;
    // 0x2f150c: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2f150cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x2f1510: 0xc04a3dc  jal         func_128F70
    ctx->pc = 0x2F1510u;
    SET_GPR_U32(ctx, 31, 0x2F1518u);
    ctx->pc = 0x2F1514u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F1510u;
            // 0x2f1514: 0x24a517c0  addiu       $a1, $a1, 0x17C0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6080));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128F70u;
    if (runtime->hasFunction(0x128F70u)) {
        auto targetFn = runtime->lookupFunction(0x128F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F1518u; }
        if (ctx->pc != 0x2F1518u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x128f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F1518u; }
        if (ctx->pc != 0x2F1518u) { return; }
    }
    ctx->pc = 0x2F1518u;
label_2f1518:
    // 0x2f1518: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F1518u;
    {
        const bool branch_taken_0x2f1518 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F151Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F1518u;
            // 0x2f151c: 0x3c050037  lui         $a1, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f1518) {
            ctx->pc = 0x2F152Cu;
            goto label_2f152c;
        }
    }
    ctx->pc = 0x2F1520u;
    // 0x2f1520: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2f1520u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1524: 0xc04a2da  jal         func_128B68
    ctx->pc = 0x2F1524u;
    SET_GPR_U32(ctx, 31, 0x2F152Cu);
    ctx->pc = 0x2F1528u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F1524u;
            // 0x2f1528: 0x24a517c0  addiu       $a1, $a1, 0x17C0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6080));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128B68u;
    if (runtime->hasFunction(0x128B68u)) {
        auto targetFn = runtime->lookupFunction(0x128B68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F152Cu; }
        if (ctx->pc != 0x2F152Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcat_0x128b68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F152Cu; }
        if (ctx->pc != 0x2F152Cu) { return; }
    }
    ctx->pc = 0x2F152Cu;
label_2f152c:
    // 0x2f152c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2f152cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2f1530: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2f1530u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f1534: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2f1534u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f1538: 0x3e00008  jr          $ra
    ctx->pc = 0x2F1538u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F153Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F1538u;
            // 0x2f153c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2F1540u;
}
