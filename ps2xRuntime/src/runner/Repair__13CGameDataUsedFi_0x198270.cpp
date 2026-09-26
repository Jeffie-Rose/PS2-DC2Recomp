#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Repair__13CGameDataUsedFi
// Address: 0x198270 - 0x1982ec
void Repair__13CGameDataUsedFi_0x198270(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Repair__13CGameDataUsedFi_0x198270");
#endif

    switch (ctx->pc) {
        case 0x1982dcu: goto label_1982dc;
        default: break;
    }

    ctx->pc = 0x198270u;

    // 0x198270: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x198270u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x198274: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x198274u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x198278: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x198278u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x19827c: 0x84830000  lh          $v1, 0x0($a0)
    ctx->pc = 0x19827cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x198280: 0x10620008  beq         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x198280u;
    {
        const bool branch_taken_0x198280 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x198284u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x198280u;
            // 0x198284: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x198280) {
            ctx->pc = 0x1982A4u;
            goto label_1982a4;
        }
    }
    ctx->pc = 0x198288u;
    // 0x198288: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x198288u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x19828c: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x19828Cu;
    {
        const bool branch_taken_0x19828c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x19828c) {
            ctx->pc = 0x19829Cu;
            goto label_19829c;
        }
    }
    ctx->pc = 0x198294u;
    // 0x198294: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x198294u;
    {
        const bool branch_taken_0x198294 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x198294) {
            ctx->pc = 0x1982C4u;
            goto label_1982c4;
        }
    }
    ctx->pc = 0x19829Cu;
label_19829c:
    // 0x19829c: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x19829Cu;
    {
        const bool branch_taken_0x19829c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1982A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19829Cu;
            // 0x1982a0: 0x24860010  addiu       $a2, $a0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19829c) {
            ctx->pc = 0x1982C4u;
            goto label_1982c4;
        }
    }
    ctx->pc = 0x1982A4u;
label_1982a4:
    // 0x1982a4: 0x80830004  lb          $v1, 0x4($a0)
    ctx->pc = 0x1982a4u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1982a8: 0x2402000d  addiu       $v0, $zero, 0xD
    ctx->pc = 0x1982a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x1982ac: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1982ACu;
    {
        const bool branch_taken_0x1982ac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1982B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1982ACu;
            // 0x1982b0: 0x2402000f  addiu       $v0, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1982ac) {
            ctx->pc = 0x1982B8u;
            goto label_1982b8;
        }
    }
    ctx->pc = 0x1982B4u;
    // 0x1982b4: 0x24860018  addiu       $a2, $a0, 0x18
    ctx->pc = 0x1982b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 24));
label_1982b8:
    // 0x1982b8: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1982B8u;
    {
        const bool branch_taken_0x1982b8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1982b8) {
            ctx->pc = 0x1982C4u;
            goto label_1982c4;
        }
    }
    ctx->pc = 0x1982C0u;
    // 0x1982c0: 0x24860010  addiu       $a2, $a0, 0x10
    ctx->pc = 0x1982c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
label_1982c4:
    // 0x1982c4: 0x10c00005  beqz        $a2, . + 4 + (0x5 << 2)
    ctx->pc = 0x1982C4u;
    {
        const bool branch_taken_0x1982c4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x1982c4) {
            ctx->pc = 0x1982DCu;
            goto label_1982dc;
        }
    }
    ctx->pc = 0x1982CCu;
    // 0x1982cc: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x1982ccu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1982d0: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x1982d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1982d4: 0xc065b44  jal         func_196D10
    ctx->pc = 0x1982D4u;
    SET_GPR_U32(ctx, 31, 0x1982DCu);
    ctx->pc = 0x1982D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1982D4u;
            // 0x1982d8: 0x46800320  cvt.s.w     $f12, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x196D10u;
    if (runtime->hasFunction(0x196D10u)) {
        auto targetFn = runtime->lookupFunction(0x196D10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1982DCu; }
        if (ctx->pc != 0x1982DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AddPoint__11COMMON_GAGEFf_0x196d10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1982DCu; }
        if (ctx->pc != 0x1982DCu) { return; }
    }
    ctx->pc = 0x1982DCu;
label_1982dc:
    // 0x1982dc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1982dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1982e0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1982e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1982e4: 0x3e00008  jr          $ra
    ctx->pc = 0x1982E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1982E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1982E4u;
            // 0x1982e8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1982ECu;
}
