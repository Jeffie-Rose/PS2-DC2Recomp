#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetScale__10CEohMotherFiPf
// Address: 0x25e970 - 0x25ea90
void GetScale__10CEohMotherFiPf_0x25e970(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetScale__10CEohMotherFiPf_0x25e970");
#endif

    switch (ctx->pc) {
        case 0x25e970u: goto label_25e970;
        case 0x25e974u: goto label_25e974;
        case 0x25e978u: goto label_25e978;
        case 0x25e97cu: goto label_25e97c;
        case 0x25e980u: goto label_25e980;
        case 0x25e984u: goto label_25e984;
        case 0x25e988u: goto label_25e988;
        case 0x25e98cu: goto label_25e98c;
        case 0x25e990u: goto label_25e990;
        case 0x25e994u: goto label_25e994;
        case 0x25e998u: goto label_25e998;
        case 0x25e99cu: goto label_25e99c;
        case 0x25e9a0u: goto label_25e9a0;
        case 0x25e9a4u: goto label_25e9a4;
        case 0x25e9a8u: goto label_25e9a8;
        case 0x25e9acu: goto label_25e9ac;
        case 0x25e9b0u: goto label_25e9b0;
        case 0x25e9b4u: goto label_25e9b4;
        case 0x25e9b8u: goto label_25e9b8;
        case 0x25e9bcu: goto label_25e9bc;
        case 0x25e9c0u: goto label_25e9c0;
        case 0x25e9c4u: goto label_25e9c4;
        case 0x25e9c8u: goto label_25e9c8;
        case 0x25e9ccu: goto label_25e9cc;
        case 0x25e9d0u: goto label_25e9d0;
        case 0x25e9d4u: goto label_25e9d4;
        case 0x25e9d8u: goto label_25e9d8;
        case 0x25e9dcu: goto label_25e9dc;
        case 0x25e9e0u: goto label_25e9e0;
        case 0x25e9e4u: goto label_25e9e4;
        case 0x25e9e8u: goto label_25e9e8;
        case 0x25e9ecu: goto label_25e9ec;
        case 0x25e9f0u: goto label_25e9f0;
        case 0x25e9f4u: goto label_25e9f4;
        case 0x25e9f8u: goto label_25e9f8;
        case 0x25e9fcu: goto label_25e9fc;
        case 0x25ea00u: goto label_25ea00;
        case 0x25ea04u: goto label_25ea04;
        case 0x25ea08u: goto label_25ea08;
        case 0x25ea0cu: goto label_25ea0c;
        case 0x25ea10u: goto label_25ea10;
        case 0x25ea14u: goto label_25ea14;
        case 0x25ea18u: goto label_25ea18;
        case 0x25ea1cu: goto label_25ea1c;
        case 0x25ea20u: goto label_25ea20;
        case 0x25ea24u: goto label_25ea24;
        case 0x25ea28u: goto label_25ea28;
        case 0x25ea2cu: goto label_25ea2c;
        case 0x25ea30u: goto label_25ea30;
        case 0x25ea34u: goto label_25ea34;
        case 0x25ea38u: goto label_25ea38;
        case 0x25ea3cu: goto label_25ea3c;
        case 0x25ea40u: goto label_25ea40;
        case 0x25ea44u: goto label_25ea44;
        case 0x25ea48u: goto label_25ea48;
        case 0x25ea4cu: goto label_25ea4c;
        case 0x25ea50u: goto label_25ea50;
        case 0x25ea54u: goto label_25ea54;
        case 0x25ea58u: goto label_25ea58;
        case 0x25ea5cu: goto label_25ea5c;
        case 0x25ea60u: goto label_25ea60;
        case 0x25ea64u: goto label_25ea64;
        case 0x25ea68u: goto label_25ea68;
        case 0x25ea6cu: goto label_25ea6c;
        case 0x25ea70u: goto label_25ea70;
        case 0x25ea74u: goto label_25ea74;
        case 0x25ea78u: goto label_25ea78;
        case 0x25ea7cu: goto label_25ea7c;
        case 0x25ea80u: goto label_25ea80;
        case 0x25ea84u: goto label_25ea84;
        case 0x25ea88u: goto label_25ea88;
        case 0x25ea8cu: goto label_25ea8c;
        default: break;
    }

    ctx->pc = 0x25e970u;

label_25e970:
    // 0x25e970: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x25e970u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_25e974:
    // 0x25e974: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x25e974u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_25e978:
    // 0x25e978: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x25e978u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_25e97c:
    // 0x25e97c: 0x4a00004  bltz        $a1, . + 4 + (0x4 << 2)
label_25e980:
    if (ctx->pc == 0x25E980u) {
        ctx->pc = 0x25E980u;
            // 0x25e980: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x25E984u;
        goto label_25e984;
    }
    ctx->pc = 0x25E97Cu;
    {
        const bool branch_taken_0x25e97c = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x25E980u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25E97Cu;
            // 0x25e980: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25e97c) {
            ctx->pc = 0x25E990u;
            goto label_25e990;
        }
    }
    ctx->pc = 0x25E984u;
label_25e984:
    // 0x25e984: 0x28a20020  slti        $v0, $a1, 0x20
    ctx->pc = 0x25e984u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)32) ? 1 : 0);
label_25e988:
    // 0x25e988: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_25e98c:
    if (ctx->pc == 0x25E98Cu) {
        ctx->pc = 0x25E98Cu;
            // 0x25e98c: 0x51900  sll         $v1, $a1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
        ctx->pc = 0x25E990u;
        goto label_25e990;
    }
    ctx->pc = 0x25E988u;
    {
        const bool branch_taken_0x25e988 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x25E98Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25E988u;
            // 0x25e98c: 0x51900  sll         $v1, $a1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25e988) {
            ctx->pc = 0x25E998u;
            goto label_25e998;
        }
    }
    ctx->pc = 0x25E990u;
label_25e990:
    // 0x25e990: 0x1000003b  b           . + 4 + (0x3B << 2)
label_25e994:
    if (ctx->pc == 0x25E994u) {
        ctx->pc = 0x25E994u;
            // 0x25e994: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x25E998u;
        goto label_25e998;
    }
    ctx->pc = 0x25E990u;
    {
        const bool branch_taken_0x25e990 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25E994u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25E990u;
            // 0x25e994: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25e990) {
            ctx->pc = 0x25EA80u;
            goto label_25ea80;
        }
    }
    ctx->pc = 0x25E998u;
label_25e998:
    // 0x25e998: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x25e998u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_25e99c:
    // 0x25e99c: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x25e99cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_25e9a0:
    // 0x25e9a0: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x25e9a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_25e9a4:
    // 0x25e9a4: 0x1062002e  beq         $v1, $v0, . + 4 + (0x2E << 2)
label_25e9a8:
    if (ctx->pc == 0x25E9A8u) {
        ctx->pc = 0x25E9A8u;
            // 0x25e9a8: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x25E9ACu;
        goto label_25e9ac;
    }
    ctx->pc = 0x25E9A4u;
    {
        const bool branch_taken_0x25e9a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x25E9A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25E9A4u;
            // 0x25e9a8: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25e9a4) {
            ctx->pc = 0x25EA60u;
            goto label_25ea60;
        }
    }
    ctx->pc = 0x25E9ACu;
label_25e9ac:
    // 0x25e9ac: 0x1062001d  beq         $v1, $v0, . + 4 + (0x1D << 2)
label_25e9b0:
    if (ctx->pc == 0x25E9B0u) {
        ctx->pc = 0x25E9B0u;
            // 0x25e9b0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x25E9B4u;
        goto label_25e9b4;
    }
    ctx->pc = 0x25E9ACu;
    {
        const bool branch_taken_0x25e9ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x25E9B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25E9ACu;
            // 0x25e9b0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25e9ac) {
            ctx->pc = 0x25EA24u;
            goto label_25ea24;
        }
    }
    ctx->pc = 0x25E9B4u;
label_25e9b4:
    // 0x25e9b4: 0x10620010  beq         $v1, $v0, . + 4 + (0x10 << 2)
label_25e9b8:
    if (ctx->pc == 0x25E9B8u) {
        ctx->pc = 0x25E9BCu;
        goto label_25e9bc;
    }
    ctx->pc = 0x25E9B4u;
    {
        const bool branch_taken_0x25e9b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x25e9b4) {
            ctx->pc = 0x25E9F8u;
            goto label_25e9f8;
        }
    }
    ctx->pc = 0x25E9BCu;
label_25e9bc:
    // 0x25e9bc: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_25e9c0:
    if (ctx->pc == 0x25E9C0u) {
        ctx->pc = 0x25E9C4u;
        goto label_25e9c4;
    }
    ctx->pc = 0x25E9BCu;
    {
        const bool branch_taken_0x25e9bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x25e9bc) {
            ctx->pc = 0x25E9CCu;
            goto label_25e9cc;
        }
    }
    ctx->pc = 0x25E9C4u;
label_25e9c4:
    // 0x25e9c4: 0x1000002e  b           . + 4 + (0x2E << 2)
label_25e9c8:
    if (ctx->pc == 0x25E9C8u) {
        ctx->pc = 0x25E9C8u;
            // 0x25e9c8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x25E9CCu;
        goto label_25e9cc;
    }
    ctx->pc = 0x25E9C4u;
    {
        const bool branch_taken_0x25e9c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25E9C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25E9C4u;
            // 0x25e9c8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25e9c4) {
            ctx->pc = 0x25EA80u;
            goto label_25ea80;
        }
    }
    ctx->pc = 0x25E9CCu;
label_25e9cc:
    // 0x25e9cc: 0x8c84000c  lw          $a0, 0xC($a0)
    ctx->pc = 0x25e9ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_25e9d0:
    // 0x25e9d0: 0x14800003  bnez        $a0, . + 4 + (0x3 << 2)
label_25e9d4:
    if (ctx->pc == 0x25E9D4u) {
        ctx->pc = 0x25E9D4u;
            // 0x25e9d4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x25E9D8u;
        goto label_25e9d8;
    }
    ctx->pc = 0x25E9D0u;
    {
        const bool branch_taken_0x25e9d0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x25E9D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25E9D0u;
            // 0x25e9d4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25e9d0) {
            ctx->pc = 0x25E9E0u;
            goto label_25e9e0;
        }
    }
    ctx->pc = 0x25E9D8u;
label_25e9d8:
    // 0x25e9d8: 0x1000002a  b           . + 4 + (0x2A << 2)
label_25e9dc:
    if (ctx->pc == 0x25E9DCu) {
        ctx->pc = 0x25E9DCu;
            // 0x25e9dc: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->pc = 0x25E9E0u;
        goto label_25e9e0;
    }
    ctx->pc = 0x25E9D8u;
    {
        const bool branch_taken_0x25e9d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25E9DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25E9D8u;
            // 0x25e9dc: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25e9d8) {
            ctx->pc = 0x25EA84u;
            goto label_25ea84;
        }
    }
    ctx->pc = 0x25E9E0u;
label_25e9e0:
    // 0x25e9e0: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x25e9e0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_25e9e4:
    // 0x25e9e4: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x25e9e4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_25e9e8:
    // 0x25e9e8: 0x320f809  jalr        $t9
label_25e9ec:
    if (ctx->pc == 0x25E9ECu) {
        ctx->pc = 0x25E9ECu;
            // 0x25e9ec: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x25E9F0u;
        goto label_25e9f0;
    }
    ctx->pc = 0x25E9E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x25E9F0u);
        ctx->pc = 0x25E9ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25E9E8u;
            // 0x25e9ec: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x25E9F0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x25E9F0u; }
            if (ctx->pc != 0x25E9F0u) { return; }
        }
        }
    }
    ctx->pc = 0x25E9F0u;
label_25e9f0:
    // 0x25e9f0: 0x10000023  b           . + 4 + (0x23 << 2)
label_25e9f4:
    if (ctx->pc == 0x25E9F4u) {
        ctx->pc = 0x25E9F4u;
            // 0x25e9f4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x25E9F8u;
        goto label_25e9f8;
    }
    ctx->pc = 0x25E9F0u;
    {
        const bool branch_taken_0x25e9f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25E9F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25E9F0u;
            // 0x25e9f4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25e9f0) {
            ctx->pc = 0x25EA80u;
            goto label_25ea80;
        }
    }
    ctx->pc = 0x25E9F8u;
label_25e9f8:
    // 0x25e9f8: 0x8c84000c  lw          $a0, 0xC($a0)
    ctx->pc = 0x25e9f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_25e9fc:
    // 0x25e9fc: 0x14800003  bnez        $a0, . + 4 + (0x3 << 2)
label_25ea00:
    if (ctx->pc == 0x25EA00u) {
        ctx->pc = 0x25EA00u;
            // 0x25ea00: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x25EA04u;
        goto label_25ea04;
    }
    ctx->pc = 0x25E9FCu;
    {
        const bool branch_taken_0x25e9fc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x25EA00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25E9FCu;
            // 0x25ea00: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25e9fc) {
            ctx->pc = 0x25EA0Cu;
            goto label_25ea0c;
        }
    }
    ctx->pc = 0x25EA04u;
label_25ea04:
    // 0x25ea04: 0x1000001e  b           . + 4 + (0x1E << 2)
label_25ea08:
    if (ctx->pc == 0x25EA08u) {
        ctx->pc = 0x25EA0Cu;
        goto label_25ea0c;
    }
    ctx->pc = 0x25EA04u;
    {
        const bool branch_taken_0x25ea04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25ea04) {
            ctx->pc = 0x25EA80u;
            goto label_25ea80;
        }
    }
    ctx->pc = 0x25EA0Cu;
label_25ea0c:
    // 0x25ea0c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x25ea0cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_25ea10:
    // 0x25ea10: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x25ea10u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_25ea14:
    // 0x25ea14: 0x320f809  jalr        $t9
label_25ea18:
    if (ctx->pc == 0x25EA18u) {
        ctx->pc = 0x25EA18u;
            // 0x25ea18: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x25EA1Cu;
        goto label_25ea1c;
    }
    ctx->pc = 0x25EA14u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x25EA1Cu);
        ctx->pc = 0x25EA18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25EA14u;
            // 0x25ea18: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x25EA1Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x25EA1Cu; }
            if (ctx->pc != 0x25EA1Cu) { return; }
        }
        }
    }
    ctx->pc = 0x25EA1Cu;
label_25ea1c:
    // 0x25ea1c: 0x10000018  b           . + 4 + (0x18 << 2)
label_25ea20:
    if (ctx->pc == 0x25EA20u) {
        ctx->pc = 0x25EA20u;
            // 0x25ea20: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x25EA24u;
        goto label_25ea24;
    }
    ctx->pc = 0x25EA1Cu;
    {
        const bool branch_taken_0x25ea1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25EA20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25EA1Cu;
            // 0x25ea20: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25ea1c) {
            ctx->pc = 0x25EA80u;
            goto label_25ea80;
        }
    }
    ctx->pc = 0x25EA24u;
label_25ea24:
    // 0x25ea24: 0x8c84000c  lw          $a0, 0xC($a0)
    ctx->pc = 0x25ea24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_25ea28:
    // 0x25ea28: 0x14800003  bnez        $a0, . + 4 + (0x3 << 2)
label_25ea2c:
    if (ctx->pc == 0x25EA2Cu) {
        ctx->pc = 0x25EA2Cu;
            // 0x25ea2c: 0x27a50028  addiu       $a1, $sp, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 40));
        ctx->pc = 0x25EA30u;
        goto label_25ea30;
    }
    ctx->pc = 0x25EA28u;
    {
        const bool branch_taken_0x25ea28 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x25EA2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25EA28u;
            // 0x25ea2c: 0x27a50028  addiu       $a1, $sp, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25ea28) {
            ctx->pc = 0x25EA38u;
            goto label_25ea38;
        }
    }
    ctx->pc = 0x25EA30u;
label_25ea30:
    // 0x25ea30: 0x10000013  b           . + 4 + (0x13 << 2)
label_25ea34:
    if (ctx->pc == 0x25EA34u) {
        ctx->pc = 0x25EA34u;
            // 0x25ea34: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x25EA38u;
        goto label_25ea38;
    }
    ctx->pc = 0x25EA30u;
    {
        const bool branch_taken_0x25ea30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25EA34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25EA30u;
            // 0x25ea34: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25ea30) {
            ctx->pc = 0x25EA80u;
            goto label_25ea80;
        }
    }
    ctx->pc = 0x25EA38u;
label_25ea38:
    // 0x25ea38: 0xc0a42f8  jal         func_290BE0
label_25ea3c:
    if (ctx->pc == 0x25EA3Cu) {
        ctx->pc = 0x25EA3Cu;
            // 0x25ea3c: 0x27a6002c  addiu       $a2, $sp, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
        ctx->pc = 0x25EA40u;
        goto label_25ea40;
    }
    ctx->pc = 0x25EA38u;
    SET_GPR_U32(ctx, 31, 0x25EA40u);
    ctx->pc = 0x25EA3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25EA38u;
            // 0x25ea3c: 0x27a6002c  addiu       $a2, $sp, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
        ctx->in_delay_slot = false;
    ctx->pc = 0x290BE0u;
    if (runtime->hasFunction(0x290BE0u)) {
        auto targetFn = runtime->lookupFunction(0x290BE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25EA40u; }
        if (ctx->pc != 0x25EA40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetScale__13CEventSprite2FPfPf_0x290be0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25EA40u; }
        if (ctx->pc != 0x25EA40u) { return; }
    }
    ctx->pc = 0x25EA40u;
label_25ea40:
    // 0x25ea40: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x25ea40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_25ea44:
    // 0x25ea44: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x25ea44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_25ea48:
    // 0x25ea48: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x25ea48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
label_25ea4c:
    // 0x25ea4c: 0xc7a0002c  lwc1        $f0, 0x2C($sp)
    ctx->pc = 0x25ea4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_25ea50:
    // 0x25ea50: 0xe6000004  swc1        $f0, 0x4($s0)
    ctx->pc = 0x25ea50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
label_25ea54:
    // 0x25ea54: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x25ea54u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
label_25ea58:
    // 0x25ea58: 0x10000009  b           . + 4 + (0x9 << 2)
label_25ea5c:
    if (ctx->pc == 0x25EA5Cu) {
        ctx->pc = 0x25EA5Cu;
            // 0x25ea5c: 0xae00000c  sw          $zero, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
        ctx->pc = 0x25EA60u;
        goto label_25ea60;
    }
    ctx->pc = 0x25EA58u;
    {
        const bool branch_taken_0x25ea58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25EA5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25EA58u;
            // 0x25ea5c: 0xae00000c  sw          $zero, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25ea58) {
            ctx->pc = 0x25EA80u;
            goto label_25ea80;
        }
    }
    ctx->pc = 0x25EA60u;
label_25ea60:
    // 0x25ea60: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x25ea60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_25ea64:
    // 0x25ea64: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_25ea68:
    if (ctx->pc == 0x25EA68u) {
        ctx->pc = 0x25EA6Cu;
        goto label_25ea6c;
    }
    ctx->pc = 0x25EA64u;
    {
        const bool branch_taken_0x25ea64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x25ea64) {
            ctx->pc = 0x25EA74u;
            goto label_25ea74;
        }
    }
    ctx->pc = 0x25EA6Cu;
label_25ea6c:
    // 0x25ea6c: 0x10000004  b           . + 4 + (0x4 << 2)
label_25ea70:
    if (ctx->pc == 0x25EA70u) {
        ctx->pc = 0x25EA70u;
            // 0x25ea70: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x25EA74u;
        goto label_25ea74;
    }
    ctx->pc = 0x25EA6Cu;
    {
        const bool branch_taken_0x25ea6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25EA70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25EA6Cu;
            // 0x25ea70: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25ea6c) {
            ctx->pc = 0x25EA80u;
            goto label_25ea80;
        }
    }
    ctx->pc = 0x25EA74u;
label_25ea74:
    // 0x25ea74: 0x784301a0  lq          $v1, 0x1A0($v0)
    ctx->pc = 0x25ea74u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 416)));
label_25ea78:
    // 0x25ea78: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x25ea78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_25ea7c:
    // 0x25ea7c: 0x7e030000  sq          $v1, 0x0($s0)
    ctx->pc = 0x25ea7cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), GPR_VEC(ctx, 3));
label_25ea80:
    // 0x25ea80: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x25ea80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_25ea84:
    // 0x25ea84: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x25ea84u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_25ea88:
    // 0x25ea88: 0x3e00008  jr          $ra
label_25ea8c:
    if (ctx->pc == 0x25EA8Cu) {
        ctx->pc = 0x25EA8Cu;
            // 0x25ea8c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x25EA90u;
        goto label_fallthrough_0x25ea88;
    }
    ctx->pc = 0x25EA88u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25EA8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25EA88u;
            // 0x25ea8c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x25ea88:
    ctx->pc = 0x25EA90u;
}
