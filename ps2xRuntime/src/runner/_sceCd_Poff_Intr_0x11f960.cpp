#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _sceCd_Poff_Intr
// Address: 0x11f960 - 0x11f99c
void _sceCd_Poff_Intr_0x11f960(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_sceCd_Poff_Intr_0x11f960");
#endif

    switch (ctx->pc) {
        case 0x11f960u: goto label_11f960;
        case 0x11f964u: goto label_11f964;
        case 0x11f968u: goto label_11f968;
        case 0x11f96cu: goto label_11f96c;
        case 0x11f970u: goto label_11f970;
        case 0x11f974u: goto label_11f974;
        case 0x11f978u: goto label_11f978;
        case 0x11f97cu: goto label_11f97c;
        case 0x11f980u: goto label_11f980;
        case 0x11f984u: goto label_11f984;
        case 0x11f988u: goto label_11f988;
        case 0x11f98cu: goto label_11f98c;
        case 0x11f990u: goto label_11f990;
        case 0x11f994u: goto label_11f994;
        case 0x11f998u: goto label_11f998;
        default: break;
    }

    ctx->pc = 0x11f960u;

label_11f960:
    // 0x11f960: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x11f960u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
label_11f964:
    // 0x11f964: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x11f964u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_11f968:
    // 0x11f968: 0x8c45e1c4  lw          $a1, -0x1E3C($v0)
    ctx->pc = 0x11f968u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294959556)));
label_11f96c:
    // 0x11f96c: 0x10a00008  beqz        $a1, . + 4 + (0x8 << 2)
label_11f970:
    if (ctx->pc == 0x11F970u) {
        ctx->pc = 0x11F970u;
            // 0x11f970: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->pc = 0x11F974u;
        goto label_11f974;
    }
    ctx->pc = 0x11F96Cu;
    {
        const bool branch_taken_0x11f96c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x11F970u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11F96Cu;
            // 0x11f970: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f96c) {
            ctx->pc = 0x11F990u;
            goto label_11f990;
        }
    }
    ctx->pc = 0x11F974u;
label_11f974:
    // 0x11f974: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x11f974u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
label_11f978:
    // 0x11f978: 0x8c431de4  lw          $v1, 0x1DE4($v0)
    ctx->pc = 0x11f978u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7652)));
label_11f97c:
    // 0x11f97c: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
label_11f980:
    if (ctx->pc == 0x11F980u) {
        ctx->pc = 0x11F980u;
            // 0x11f980: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x11F984u;
        goto label_11f984;
    }
    ctx->pc = 0x11F97Cu;
    {
        const bool branch_taken_0x11f97c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x11F980u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11F97Cu;
            // 0x11f980: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f97c) {
            ctx->pc = 0x11F994u;
            goto label_11f994;
        }
    }
    ctx->pc = 0x11F984u;
label_11f984:
    // 0x11f984: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x11f984u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
label_11f988:
    // 0x11f988: 0xa0f809  jalr        $a1
label_11f98c:
    if (ctx->pc == 0x11F98Cu) {
        ctx->pc = 0x11F98Cu;
            // 0x11f98c: 0x8c44e1c8  lw          $a0, -0x1E38($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294959560)));
        ctx->pc = 0x11F990u;
        goto label_11f990;
    }
    ctx->pc = 0x11F988u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x11F990u);
        ctx->pc = 0x11F98Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11F988u;
            // 0x11f98c: 0x8c44e1c8  lw          $a0, -0x1E38($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294959560)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x11F990u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x11F990u; }
            if (ctx->pc != 0x11F990u) { return; }
        }
        }
    }
    ctx->pc = 0x11F990u;
label_11f990:
    // 0x11f990: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x11f990u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_11f994:
    // 0x11f994: 0x3e00008  jr          $ra
label_11f998:
    if (ctx->pc == 0x11F998u) {
        ctx->pc = 0x11F998u;
            // 0x11f998: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x11F99Cu;
        goto label_fallthrough_0x11f994;
    }
    ctx->pc = 0x11F994u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11F998u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11F994u;
            // 0x11f998: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x11f994:
    ctx->pc = 0x11F99Cu;
}
