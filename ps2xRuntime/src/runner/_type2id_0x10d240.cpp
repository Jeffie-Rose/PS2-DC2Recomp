#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _type2id
// Address: 0x10d240 - 0x10d2c8
void _type2id_0x10d240(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_type2id_0x10d240");
#endif

    ctx->pc = 0x10d240u;

    // 0x10d240: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x10d240u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10d244: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x10d244u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x10d248: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x10d248u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10d24c: 0x2c82000a  sltiu       $v0, $a0, 0xA
    ctx->pc = 0x10d24cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x10d250: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x10D250u;
    {
        const bool branch_taken_0x10d250 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10D254u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10D250u;
            // 0x10d254: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10d250) {
            ctx->pc = 0x10D2BCu;
            goto label_10d2bc;
        }
    }
    ctx->pc = 0x10D258u;
    // 0x10d258: 0x3c080033  lui         $t0, 0x33
    ctx->pc = 0x10d258u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)51 << 16));
    // 0x10d25c: 0x43100  sll         $a2, $a0, 4
    ctx->pc = 0x10d25cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x10d260: 0x250204f8  addiu       $v0, $t0, 0x4F8
    ctx->pc = 0x10d260u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 1272));
    // 0x10d264: 0x3404ffff  ori         $a0, $zero, 0xFFFF
    ctx->pc = 0x10d264u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x10d268: 0x42638  dsll        $a0, $a0, 24
    ctx->pc = 0x10d268u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 24);
    // 0x10d26c: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x10d26cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x10d270: 0xdc430008  ld          $v1, 0x8($v0)
    ctx->pc = 0x10d270u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x10d274: 0x10640009  beq         $v1, $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x10D274u;
    {
        const bool branch_taken_0x10d274 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x10D278u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10D274u;
            // 0x10d278: 0x83102b  sltu        $v0, $a0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x10d274) {
            ctx->pc = 0x10D29Cu;
            goto label_10d29c;
        }
    }
    ctx->pc = 0x10D27Cu;
    // 0x10d27c: 0x5440000a  bnel        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x10D27Cu;
    {
        const bool branch_taken_0x10d27c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x10d27c) {
            ctx->pc = 0x10D280u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x10D27Cu;
            // 0x10d280: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x10D2A8u;
            goto label_10d2a8;
        }
    }
    ctx->pc = 0x10D284u;
    // 0x10d284: 0x3402ff00  ori         $v0, $zero, 0xFF00
    ctx->pc = 0x10d284u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65280);
    // 0x10d288: 0x21638  dsll        $v0, $v0, 24
    ctx->pc = 0x10d288u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 24);
    // 0x10d28c: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x10D28Cu;
    {
        const bool branch_taken_0x10d28c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x10D290u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10D28Cu;
            // 0x10d290: 0x250204f8  addiu       $v0, $t0, 0x4F8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 1272));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10d28c) {
            ctx->pc = 0x10D2A4u;
            goto label_10d2a4;
        }
    }
    ctx->pc = 0x10D294u;
    // 0x10d294: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x10D294u;
    {
        const bool branch_taken_0x10d294 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10D298u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10D294u;
            // 0x10d298: 0xa72014  dsllv       $a0, $a3, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) << (GPR_U32(ctx, 5) & 0x3F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10d294) {
            ctx->pc = 0x10D2B0u;
            goto label_10d2b0;
        }
    }
    ctx->pc = 0x10D29Cu;
label_10d29c:
    // 0x10d29c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x10D29Cu;
    {
        const bool branch_taken_0x10d29c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10D2A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10D29Cu;
            // 0x10d2a0: 0x24050018  addiu       $a1, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10d29c) {
            ctx->pc = 0x10D2A8u;
            goto label_10d2a8;
        }
    }
    ctx->pc = 0x10D2A4u;
label_10d2a4:
    // 0x10d2a4: 0x24050020  addiu       $a1, $zero, 0x20
    ctx->pc = 0x10d2a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_10d2a8:
    // 0x10d2a8: 0x250204f8  addiu       $v0, $t0, 0x4F8
    ctx->pc = 0x10d2a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 1272));
    // 0x10d2ac: 0xa72014  dsllv       $a0, $a3, $a1
    ctx->pc = 0x10d2acu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) << (GPR_U32(ctx, 5) & 0x3F));
label_10d2b0:
    // 0x10d2b0: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x10d2b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x10d2b4: 0xdc430000  ld          $v1, 0x0($v0)
    ctx->pc = 0x10d2b4u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x10d2b8: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x10d2b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
label_10d2bc:
    // 0x10d2bc: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x10d2bcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10d2c0: 0x3e00008  jr          $ra
    ctx->pc = 0x10D2C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10D2C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10D2C0u;
            // 0x10d2c4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10D2C8u;
}
