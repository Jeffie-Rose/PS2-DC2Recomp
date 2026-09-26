#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SaveToMc__18CMemoryCardManagerFi
// Address: 0x2f2bf0 - 0x2f3238
void SaveToMc__18CMemoryCardManagerFi_0x2f2bf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SaveToMc__18CMemoryCardManagerFi_0x2f2bf0");
#endif

    switch (ctx->pc) {
        case 0x2f2c1cu: goto label_2f2c1c;
        case 0x2f2cbcu: goto label_2f2cbc;
        case 0x2f2cf4u: goto label_2f2cf4;
        case 0x2f2d24u: goto label_2f2d24;
        case 0x2f2d38u: goto label_2f2d38;
        case 0x2f2d48u: goto label_2f2d48;
        case 0x2f2d74u: goto label_2f2d74;
        case 0x2f2d98u: goto label_2f2d98;
        case 0x2f2dc0u: goto label_2f2dc0;
        case 0x2f2de0u: goto label_2f2de0;
        case 0x2f2e3cu: goto label_2f2e3c;
        case 0x2f2e50u: goto label_2f2e50;
        case 0x2f2eccu: goto label_2f2ecc;
        case 0x2f2f04u: goto label_2f2f04;
        case 0x2f2f60u: goto label_2f2f60;
        case 0x2f2f8cu: goto label_2f2f8c;
        case 0x2f2fa8u: goto label_2f2fa8;
        case 0x2f2fc4u: goto label_2f2fc4;
        case 0x2f2fe0u: goto label_2f2fe0;
        case 0x2f3000u: goto label_2f3000;
        case 0x2f302cu: goto label_2f302c;
        case 0x2f3058u: goto label_2f3058;
        case 0x2f3098u: goto label_2f3098;
        case 0x2f30d8u: goto label_2f30d8;
        case 0x2f30ecu: goto label_2f30ec;
        case 0x2f3108u: goto label_2f3108;
        case 0x2f3120u: goto label_2f3120;
        case 0x2f3130u: goto label_2f3130;
        case 0x2f314cu: goto label_2f314c;
        case 0x2f3168u: goto label_2f3168;
        case 0x2f3184u: goto label_2f3184;
        case 0x2f3194u: goto label_2f3194;
        case 0x2f31b0u: goto label_2f31b0;
        case 0x2f31ccu: goto label_2f31cc;
        case 0x2f320cu: goto label_2f320c;
        default: break;
    }

    ctx->pc = 0x2f2bf0u;

    // 0x2f2bf0: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x2f2bf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
    // 0x2f2bf4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2f2bf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2f2bf8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2f2bf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2f2bfc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2f2bfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2f2c00: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2f2c00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2f2c04: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2f2c04u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f2c08: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2f2c08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2f2c0c: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x2f2c0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2f2c10: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2f2c10u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f2c14: 0xc0bc50c  jal         func_2F1430
    ctx->pc = 0x2F2C14u;
    SET_GPR_U32(ctx, 31, 0x2F2C1Cu);
    ctx->pc = 0x2F2C18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F2C14u;
            // 0x2f2c18: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F1430u;
    if (runtime->hasFunction(0x2F1430u)) {
        auto targetFn = runtime->lookupFunction(0x2F1430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F2C1Cu; }
        if (ctx->pc != 0x2F2C1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MakeMemoryCardFileName__FiPc_0x2f1430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F2C1Cu; }
        if (ctx->pc != 0x2F2C1Cu) { return; }
    }
    ctx->pc = 0x2F2C1Cu;
label_2f2c1c:
    // 0x2f2c1c: 0x8e0304c8  lw          $v1, 0x4C8($s0)
    ctx->pc = 0x2f2c1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1224)));
    // 0x2f2c20: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2F2C20u;
    {
        const bool branch_taken_0x2f2c20 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F2C24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F2C20u;
            // 0x2f2c24: 0x31140  sll         $v0, $v1, 5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f2c20) {
            ctx->pc = 0x2F2C38u;
            goto label_2f2c38;
        }
    }
    ctx->pc = 0x2F2C28u;
    // 0x2f2c28: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2f2c28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f2c2c: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F2C2Cu;
    {
        const bool branch_taken_0x2f2c2c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2F2C30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F2C2Cu;
            // 0x2f2c30: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f2c2c) {
            ctx->pc = 0x2F2C40u;
            goto label_2f2c40;
        }
    }
    ctx->pc = 0x2F2C34u;
    // 0x2f2c34: 0x31140  sll         $v0, $v1, 5
    ctx->pc = 0x2f2c34u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
label_2f2c38:
    // 0x2f2c38: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x2f2c38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x2f2c3c: 0x24510d5c  addiu       $s1, $v0, 0xD5C
    ctx->pc = 0x2f2c3cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 3420));
label_2f2c40:
    // 0x2f2c40: 0x83829ef4  lb          $v0, -0x610C($gp)
    ctx->pc = 0x2f2c40u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294942452)));
    // 0x2f2c44: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2F2C44u;
    {
        const bool branch_taken_0x2f2c44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F2C48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F2C44u;
            // 0x2f2c48: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f2c44) {
            ctx->pc = 0x2F2C54u;
            goto label_2f2c54;
        }
    }
    ctx->pc = 0x2F2C4Cu;
    // 0x2f2c4c: 0xaf809ef0  sw          $zero, -0x6110($gp)
    ctx->pc = 0x2f2c4cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942448), GPR_U32(ctx, 0));
    // 0x2f2c50: 0xa3829ef4  sb          $v0, -0x610C($gp)
    ctx->pc = 0x2f2c50u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294942452), (uint8_t)GPR_U32(ctx, 2));
label_2f2c54:
    // 0x2f2c54: 0x8e030058  lw          $v1, 0x58($s0)
    ctx->pc = 0x2f2c54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
    // 0x2f2c58: 0x24020069  addiu       $v0, $zero, 0x69
    ctx->pc = 0x2f2c58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 105));
    // 0x2f2c5c: 0x10620161  beq         $v1, $v0, . + 4 + (0x161 << 2)
    ctx->pc = 0x2F2C5Cu;
    {
        const bool branch_taken_0x2f2c5c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2F2C60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F2C5Cu;
            // 0x2f2c60: 0x121180  sll         $v0, $s2, 6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f2c5c) {
            ctx->pc = 0x2F31E4u;
            goto label_2f31e4;
        }
    }
    ctx->pc = 0x2F2C64u;
    // 0x2f2c64: 0x24020068  addiu       $v0, $zero, 0x68
    ctx->pc = 0x2f2c64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 104));
    // 0x2f2c68: 0x1062014e  beq         $v1, $v0, . + 4 + (0x14E << 2)
    ctx->pc = 0x2F2C68u;
    {
        const bool branch_taken_0x2f2c68 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2F2C6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F2C68u;
            // 0x2f2c6c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f2c68) {
            ctx->pc = 0x2F31A4u;
            goto label_2f31a4;
        }
    }
    ctx->pc = 0x2F2C70u;
    // 0x2f2c70: 0x24020067  addiu       $v0, $zero, 0x67
    ctx->pc = 0x2f2c70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 103));
    // 0x2f2c74: 0x10620139  beq         $v1, $v0, . + 4 + (0x139 << 2)
    ctx->pc = 0x2F2C74u;
    {
        const bool branch_taken_0x2f2c74 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2F2C78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F2C74u;
            // 0x2f2c78: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f2c74) {
            ctx->pc = 0x2F315Cu;
            goto label_2f315c;
        }
    }
    ctx->pc = 0x2F2C7Cu;
    // 0x2f2c7c: 0x24020066  addiu       $v0, $zero, 0x66
    ctx->pc = 0x2f2c7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 102));
    // 0x2f2c80: 0x10620117  beq         $v1, $v0, . + 4 + (0x117 << 2)
    ctx->pc = 0x2F2C80u;
    {
        const bool branch_taken_0x2f2c80 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2F2C84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F2C80u;
            // 0x2f2c84: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f2c80) {
            ctx->pc = 0x2F30E0u;
            goto label_2f30e0;
        }
    }
    ctx->pc = 0x2F2C88u;
    // 0x2f2c88: 0x24020065  addiu       $v0, $zero, 0x65
    ctx->pc = 0x2f2c88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 101));
    // 0x2f2c8c: 0x106200e4  beq         $v1, $v0, . + 4 + (0xE4 << 2)
    ctx->pc = 0x2F2C8Cu;
    {
        const bool branch_taken_0x2f2c8c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2F2C90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F2C8Cu;
            // 0x2f2c90: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f2c8c) {
            ctx->pc = 0x2F3020u;
            goto label_2f3020;
        }
    }
    ctx->pc = 0x2F2C94u;
    // 0x2f2c94: 0x24020064  addiu       $v0, $zero, 0x64
    ctx->pc = 0x2f2c94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x2f2c98: 0x106200c7  beq         $v1, $v0, . + 4 + (0xC7 << 2)
    ctx->pc = 0x2F2C98u;
    {
        const bool branch_taken_0x2f2c98 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2F2C9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F2C98u;
            // 0x2f2c9c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f2c98) {
            ctx->pc = 0x2F2FB8u;
            goto label_2f2fb8;
        }
    }
    ctx->pc = 0x2F2CA0u;
    // 0x2f2ca0: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2F2CA0u;
    {
        const bool branch_taken_0x2f2ca0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F2CA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F2CA0u;
            // 0x2f2ca4: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f2ca0) {
            ctx->pc = 0x2F2CB0u;
            goto label_2f2cb0;
        }
    }
    ctx->pc = 0x2F2CA8u;
    // 0x2f2ca8: 0x1000015c  b           . + 4 + (0x15C << 2)
    ctx->pc = 0x2F2CA8u;
    {
        const bool branch_taken_0x2f2ca8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F2CACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F2CA8u;
            // 0x2f2cac: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f2ca8) {
            ctx->pc = 0x2F321Cu;
            goto label_2f321c;
        }
    }
    ctx->pc = 0x2F2CB0u;
label_2f2cb0:
    // 0x2f2cb0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2f2cb0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f2cb4: 0xc048b7a  jal         func_122DE8
    ctx->pc = 0x2F2CB4u;
    SET_GPR_U32(ctx, 31, 0x2F2CBCu);
    ctx->pc = 0x2F2CB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F2CB4u;
            // 0x2f2cb8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x122DE8u;
    if (runtime->hasFunction(0x122DE8u)) {
        auto targetFn = runtime->lookupFunction(0x122DE8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F2CBCu; }
        if (ctx->pc != 0x2F2CBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceMcSync_0x122de8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F2CBCu; }
        if (ctx->pc != 0x2F2CBCu) { return; }
    }
    ctx->pc = 0x2F2CBCu;
label_2f2cbc:
    // 0x2f2cbc: 0x10400156  beqz        $v0, . + 4 + (0x156 << 2)
    ctx->pc = 0x2F2CBCu;
    {
        const bool branch_taken_0x2f2cbc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f2cbc) {
            ctx->pc = 0x2F3218u;
            goto label_2f3218;
        }
    }
    ctx->pc = 0x2F2CC4u;
    // 0x2f2cc4: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2f2cc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2f2cc8: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2F2CC8u;
    {
        const bool branch_taken_0x2f2cc8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F2CCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F2CC8u;
            // 0x2f2ccc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f2cc8) {
            ctx->pc = 0x2F2CE4u;
            goto label_2f2ce4;
        }
    }
    ctx->pc = 0x2F2CD0u;
    // 0x2f2cd0: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x2f2cd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x2f2cd4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2f2cd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2f2cd8: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F2CD8u;
    {
        const bool branch_taken_0x2f2cd8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2f2cd8) {
            ctx->pc = 0x2F2CECu;
            goto label_2f2cec;
        }
    }
    ctx->pc = 0x2F2CE0u;
    // 0x2f2ce0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2f2ce0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2f2ce4:
    // 0x2f2ce4: 0x1000014e  b           . + 4 + (0x14E << 2)
    ctx->pc = 0x2F2CE4u;
    {
        const bool branch_taken_0x2f2ce4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F2CE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F2CE4u;
            // 0x2f2ce8: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f2ce4) {
            ctx->pc = 0x2F3220u;
            goto label_2f3220;
        }
    }
    ctx->pc = 0x2F2CECu;
label_2f2cec:
    // 0x2f2cec: 0xc064220  jal         func_190880
    ctx->pc = 0x2F2CECu;
    SET_GPR_U32(ctx, 31, 0x2F2CF4u);
    ctx->pc = 0x190880u;
    if (runtime->hasFunction(0x190880u)) {
        auto targetFn = runtime->lookupFunction(0x190880u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F2CF4u; }
        if (ctx->pc != 0x2F2CF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetSaveData__Fv_0x190880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F2CF4u; }
        if (ctx->pc != 0x2F2CF4u) { return; }
    }
    ctx->pc = 0x2F2CF4u;
label_2f2cf4:
    // 0x2f2cf4: 0xae000910  sw          $zero, 0x910($s0)
    ctx->pc = 0x2f2cf4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2320), GPR_U32(ctx, 0));
    // 0x2f2cf8: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x2f2cf8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x2f2cfc: 0xae000914  sw          $zero, 0x914($s0)
    ctx->pc = 0x2f2cfcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2324), GPR_U32(ctx, 0));
    // 0x2f2d00: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2f2d00u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f2d04: 0x8e0408ec  lw          $a0, 0x8EC($s0)
    ctx->pc = 0x2f2d04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2284)));
    // 0x2f2d08: 0x3421c5b4  ori         $at, $at, 0xC5B4
    ctx->pc = 0x2f2d08u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)50612);
    // 0x2f2d0c: 0x2219021  addu        $s2, $s1, $at
    ctx->pc = 0x2f2d0cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 1)));
    // 0x2f2d10: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2f2d10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f2d14: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x2f2d14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x2f2d18: 0x3421d2a0  ori         $at, $at, 0xD2A0
    ctx->pc = 0x2f2d18u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)53920);
    // 0x2f2d1c: 0xc04a3dc  jal         func_128F70
    ctx->pc = 0x2F2D1Cu;
    SET_GPR_U32(ctx, 31, 0x2F2D24u);
    ctx->pc = 0x2F2D20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F2D1Cu;
            // 0x2f2d20: 0x2219821  addu        $s3, $s1, $at (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 1)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128F70u;
    if (runtime->hasFunction(0x128F70u)) {
        auto targetFn = runtime->lookupFunction(0x128F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F2D24u; }
        if (ctx->pc != 0x2F2D24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x128f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F2D24u; }
        if (ctx->pc != 0x2F2D24u) { return; }
    }
    ctx->pc = 0x2F2D24u;
label_2f2d24:
    // 0x2f2d24: 0x8e0208ec  lw          $v0, 0x8EC($s0)
    ctx->pc = 0x2f2d24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2284)));
    // 0x2f2d28: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2f2d28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f2d2c: 0x2405031f  addiu       $a1, $zero, 0x31F
    ctx->pc = 0x2f2d2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 799));
    // 0x2f2d30: 0xc0bd920  jal         func_2F6480
    ctx->pc = 0x2F2D30u;
    SET_GPR_U32(ctx, 31, 0x2F2D38u);
    ctx->pc = 0x2F2D34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F2D30u;
            // 0x2f2d34: 0xfc400010  sd          $zero, 0x10($v0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 2), 16), GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F6480u;
    if (runtime->hasFunction(0x2F6480u)) {
        auto targetFn = runtime->lookupFunction(0x2F6480u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F2D38u; }
        if (ctx->pc != 0x2F2D38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetBitFlag__9CSaveDataFi_0x2f6480(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F2D38u; }
        if (ctx->pc != 0x2F2D38u) { return; }
    }
    ctx->pc = 0x2F2D38u;
label_2f2d38:
    // 0x2f2d38: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2F2D38u;
    {
        const bool branch_taken_0x2f2d38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F2D3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F2D38u;
            // 0x2f2d3c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f2d38) {
            ctx->pc = 0x2F2D50u;
            goto label_2f2d50;
        }
    }
    ctx->pc = 0x2F2D40u;
    // 0x2f2d40: 0xc067ae0  jal         func_19EB80
    ctx->pc = 0x2F2D40u;
    SET_GPR_U32(ctx, 31, 0x2F2D48u);
    ctx->pc = 0x19EB80u;
    if (runtime->hasFunction(0x19EB80u)) {
        auto targetFn = runtime->lookupFunction(0x19EB80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F2D48u; }
        if (ctx->pc != 0x2F2D48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCostumeBit__16CUserDataManagerFv_0x19eb80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F2D48u; }
        if (ctx->pc != 0x2F2D48u) { return; }
    }
    ctx->pc = 0x2F2D48u;
label_2f2d48:
    // 0x2f2d48: 0x8e0308ec  lw          $v1, 0x8EC($s0)
    ctx->pc = 0x2f2d48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2284)));
    // 0x2f2d4c: 0xfc620010  sd          $v0, 0x10($v1)
    ctx->pc = 0x2f2d4cu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 16), GPR_U64(ctx, 2));
label_2f2d50:
    // 0x2f2d50: 0x8e0308ec  lw          $v1, 0x8EC($s0)
    ctx->pc = 0x2f2d50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2284)));
    // 0x2f2d54: 0x3c020003  lui         $v0, 0x3
    ctx->pc = 0x2f2d54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)3 << 16));
    // 0x2f2d58: 0x34462c98  ori         $a2, $v0, 0x2C98
    ctx->pc = 0x2f2d58u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)11416);
    // 0x2f2d5c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2f2d5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f2d60: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2f2d60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f2d64: 0xac600020  sw          $zero, 0x20($v1)
    ctx->pc = 0x2f2d64u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 32), GPR_U32(ctx, 0));
    // 0x2f2d68: 0x8e0208ec  lw          $v0, 0x8EC($s0)
    ctx->pc = 0x2f2d68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2284)));
    // 0x2f2d6c: 0xc0bc550  jal         func_2F1540
    ctx->pc = 0x2F2D6Cu;
    SET_GPR_U32(ctx, 31, 0x2F2D74u);
    ctx->pc = 0x2F2D70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F2D6Cu;
            // 0x2f2d70: 0xac400024  sw          $zero, 0x24($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 36), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F1540u;
    if (runtime->hasFunction(0x2F1540u)) {
        auto targetFn = runtime->lookupFunction(0x2F1540u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F2D74u; }
        if (ctx->pc != 0x2F2D74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MakeCheckDigit__FiPci_0x2f1540(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F2D74u; }
        if (ctx->pc != 0x2F2D74u) { return; }
    }
    ctx->pc = 0x2F2D74u;
label_2f2d74:
    // 0x2f2d74: 0x8e0708ec  lw          $a3, 0x8EC($s0)
    ctx->pc = 0x2f2d74u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2284)));
    // 0x2f2d78: 0x3c030006  lui         $v1, 0x6
    ctx->pc = 0x2f2d78u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)6 << 16));
    // 0x2f2d7c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2f2d7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f2d80: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2f2d80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f2d84: 0x34665930  ori         $a2, $v1, 0x5930
    ctx->pc = 0x2f2d84u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)22832);
    // 0x2f2d88: 0xace20028  sw          $v0, 0x28($a3)
    ctx->pc = 0x2f2d88u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 40), GPR_U32(ctx, 2));
    // 0x2f2d8c: 0x8e0208ec  lw          $v0, 0x8EC($s0)
    ctx->pc = 0x2f2d8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2284)));
    // 0x2f2d90: 0xc0bc550  jal         func_2F1540
    ctx->pc = 0x2F2D90u;
    SET_GPR_U32(ctx, 31, 0x2F2D98u);
    ctx->pc = 0x2F2D94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F2D90u;
            // 0x2f2d94: 0xac40002c  sw          $zero, 0x2C($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F1540u;
    if (runtime->hasFunction(0x2F1540u)) {
        auto targetFn = runtime->lookupFunction(0x2F1540u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F2D98u; }
        if (ctx->pc != 0x2F2D98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MakeCheckDigit__FiPci_0x2f1540(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F2D98u; }
        if (ctx->pc != 0x2F2D98u) { return; }
    }
    ctx->pc = 0x2F2D98u;
label_2f2d98:
    // 0x2f2d98: 0x8e0608ec  lw          $a2, 0x8EC($s0)
    ctx->pc = 0x2f2d98u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2284)));
    // 0x2f2d9c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2f2d9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f2da0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2f2da0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f2da4: 0x240501a8  addiu       $a1, $zero, 0x1A8
    ctx->pc = 0x2f2da4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 424));
    // 0x2f2da8: 0xacc2002c  sw          $v0, 0x2C($a2)
    ctx->pc = 0x2f2da8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 44), GPR_U32(ctx, 2));
    // 0x2f2dac: 0x8e0208ec  lw          $v0, 0x8EC($s0)
    ctx->pc = 0x2f2dacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2284)));
    // 0x2f2db0: 0xa0430045  sb          $v1, 0x45($v0)
    ctx->pc = 0x2f2db0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 69), (uint8_t)GPR_U32(ctx, 3));
    // 0x2f2db4: 0x8e0208ec  lw          $v0, 0x8EC($s0)
    ctx->pc = 0x2f2db4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2284)));
    // 0x2f2db8: 0xc0bd920  jal         func_2F6480
    ctx->pc = 0x2F2DB8u;
    SET_GPR_U32(ctx, 31, 0x2F2DC0u);
    ctx->pc = 0x2F2DBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F2DB8u;
            // 0x2f2dbc: 0xa0400046  sb          $zero, 0x46($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 70), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F6480u;
    if (runtime->hasFunction(0x2F6480u)) {
        auto targetFn = runtime->lookupFunction(0x2F6480u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F2DC0u; }
        if (ctx->pc != 0x2F2DC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetBitFlag__9CSaveDataFi_0x2f6480(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F2DC0u; }
        if (ctx->pc != 0x2F2DC0u) { return; }
    }
    ctx->pc = 0x2F2DC0u;
label_2f2dc0:
    // 0x2f2dc0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2F2DC0u;
    {
        const bool branch_taken_0x2f2dc0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F2DC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F2DC0u;
            // 0x2f2dc4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f2dc0) {
            ctx->pc = 0x2F2DD8u;
            goto label_2f2dd8;
        }
    }
    ctx->pc = 0x2F2DC8u;
    // 0x2f2dc8: 0x8e0308ec  lw          $v1, 0x8EC($s0)
    ctx->pc = 0x2f2dc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2284)));
    // 0x2f2dcc: 0x90620046  lbu         $v0, 0x46($v1)
    ctx->pc = 0x2f2dccu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 70)));
    // 0x2f2dd0: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x2f2dd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x2f2dd4: 0xa0620046  sb          $v0, 0x46($v1)
    ctx->pc = 0x2f2dd4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 70), (uint8_t)GPR_U32(ctx, 2));
label_2f2dd8:
    // 0x2f2dd8: 0xc0bd920  jal         func_2F6480
    ctx->pc = 0x2F2DD8u;
    SET_GPR_U32(ctx, 31, 0x2F2DE0u);
    ctx->pc = 0x2F2DDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F2DD8u;
            // 0x2f2ddc: 0x2405031f  addiu       $a1, $zero, 0x31F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 799));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F6480u;
    if (runtime->hasFunction(0x2F6480u)) {
        auto targetFn = runtime->lookupFunction(0x2F6480u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F2DE0u; }
        if (ctx->pc != 0x2F2DE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetBitFlag__9CSaveDataFi_0x2f6480(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F2DE0u; }
        if (ctx->pc != 0x2F2DE0u) { return; }
    }
    ctx->pc = 0x2F2DE0u;
label_2f2de0:
    // 0x2f2de0: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2F2DE0u;
    {
        const bool branch_taken_0x2f2de0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f2de0) {
            ctx->pc = 0x2F2E08u;
            goto label_2f2e08;
        }
    }
    ctx->pc = 0x2F2DE8u;
    // 0x2f2de8: 0x8e0308ec  lw          $v1, 0x8EC($s0)
    ctx->pc = 0x2f2de8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2284)));
    // 0x2f2dec: 0x90620046  lbu         $v0, 0x46($v1)
    ctx->pc = 0x2f2decu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 70)));
    // 0x2f2df0: 0x34420080  ori         $v0, $v0, 0x80
    ctx->pc = 0x2f2df0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
    // 0x2f2df4: 0xa0620046  sb          $v0, 0x46($v1)
    ctx->pc = 0x2f2df4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 70), (uint8_t)GPR_U32(ctx, 2));
    // 0x2f2df8: 0x8e0308ec  lw          $v1, 0x8EC($s0)
    ctx->pc = 0x2f2df8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2284)));
    // 0x2f2dfc: 0x90620046  lbu         $v0, 0x46($v1)
    ctx->pc = 0x2f2dfcu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 70)));
    // 0x2f2e00: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x2f2e00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x2f2e04: 0xa0620046  sb          $v0, 0x46($v1)
    ctx->pc = 0x2f2e04u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 70), (uint8_t)GPR_U32(ctx, 2));
label_2f2e08:
    // 0x2f2e08: 0x8e0208ec  lw          $v0, 0x8EC($s0)
    ctx->pc = 0x2f2e08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2284)));
    // 0x2f2e0c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2f2e0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f2e10: 0xa4400018  sh          $zero, 0x18($v0)
    ctx->pc = 0x2f2e10u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 24), (uint16_t)GPR_U32(ctx, 0));
    // 0x2f2e14: 0x8e0208ec  lw          $v0, 0x8EC($s0)
    ctx->pc = 0x2f2e14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2284)));
    // 0x2f2e18: 0xa440001a  sh          $zero, 0x1A($v0)
    ctx->pc = 0x2f2e18u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 26), (uint16_t)GPR_U32(ctx, 0));
    // 0x2f2e1c: 0x8e0208ec  lw          $v0, 0x8EC($s0)
    ctx->pc = 0x2f2e1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2284)));
    // 0x2f2e20: 0xac40001c  sw          $zero, 0x1C($v0)
    ctx->pc = 0x2f2e20u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 0));
    // 0x2f2e24: 0x8e0208ec  lw          $v0, 0x8EC($s0)
    ctx->pc = 0x2f2e24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2284)));
    // 0x2f2e28: 0xa0400047  sb          $zero, 0x47($v0)
    ctx->pc = 0x2f2e28u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 71), (uint8_t)GPR_U32(ctx, 0));
    // 0x2f2e2c: 0x83839ee0  lb          $v1, -0x6120($gp)
    ctx->pc = 0x2f2e2cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294942432)));
    // 0x2f2e30: 0x8e0208ec  lw          $v0, 0x8EC($s0)
    ctx->pc = 0x2f2e30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2284)));
    // 0x2f2e34: 0xc0bc74c  jal         func_2F1D30
    ctx->pc = 0x2F2E34u;
    SET_GPR_U32(ctx, 31, 0x2F2E3Cu);
    ctx->pc = 0x2F2E38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F2E34u;
            // 0x2f2e38: 0xa0430044  sb          $v1, 0x44($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 68), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F1D30u;
    if (runtime->hasFunction(0x2F1D30u)) {
        auto targetFn = runtime->lookupFunction(0x2F1D30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F2E3Cu; }
        if (ctx->pc != 0x2F2E3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckMaxUniqueCounter__18CMemoryCardManagerFv_0x2f1d30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F2E3Cu; }
        if (ctx->pc != 0x2F2E3Cu) { return; }
    }
    ctx->pc = 0x2F2E3Cu;
label_2f2e3c:
    // 0x2f2e3c: 0x8e0408ec  lw          $a0, 0x8EC($s0)
    ctx->pc = 0x2f2e3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2284)));
    // 0x2f2e40: 0x64450001  daddiu      $a1, $v0, 0x1
    ctx->pc = 0x2f2e40u;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)1);
    // 0x2f2e44: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2f2e44u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f2e48: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x2f2e48u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f2e4c: 0xfc850078  sd          $a1, 0x78($a0)
    ctx->pc = 0x2f2e4cu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 120), GPR_U64(ctx, 5));
label_2f2e50:
    // 0x2f2e50: 0x8e0508ec  lw          $a1, 0x8EC($s0)
    ctx->pc = 0x2f2e50u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2284)));
    // 0x2f2e54: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x2f2e54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x2f2e58: 0x28440004  slti        $a0, $v0, 0x4
    ctx->pc = 0x2f2e58u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x2f2e5c: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x2f2e5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x2f2e60: 0xaca0004c  sw          $zero, 0x4C($a1)
    ctx->pc = 0x2f2e60u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 76), GPR_U32(ctx, 0));
    // 0x2f2e64: 0x8e0508ec  lw          $a1, 0x8EC($s0)
    ctx->pc = 0x2f2e64u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2284)));
    // 0x2f2e68: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x2f2e68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x2f2e6c: 0xaca00050  sw          $zero, 0x50($a1)
    ctx->pc = 0x2f2e6cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 80), GPR_U32(ctx, 0));
    // 0x2f2e70: 0x8e0508ec  lw          $a1, 0x8EC($s0)
    ctx->pc = 0x2f2e70u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2284)));
    // 0x2f2e74: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x2f2e74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x2f2e78: 0xaca00054  sw          $zero, 0x54($a1)
    ctx->pc = 0x2f2e78u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 84), GPR_U32(ctx, 0));
    // 0x2f2e7c: 0x8e0508ec  lw          $a1, 0x8EC($s0)
    ctx->pc = 0x2f2e7cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2284)));
    // 0x2f2e80: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x2f2e80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x2f2e84: 0xaca00058  sw          $zero, 0x58($a1)
    ctx->pc = 0x2f2e84u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 88), GPR_U32(ctx, 0));
    // 0x2f2e88: 0x8e0508ec  lw          $a1, 0x8EC($s0)
    ctx->pc = 0x2f2e88u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2284)));
    // 0x2f2e8c: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x2f2e8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x2f2e90: 0xaca0005c  sw          $zero, 0x5C($a1)
    ctx->pc = 0x2f2e90u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 92), GPR_U32(ctx, 0));
    // 0x2f2e94: 0x8e0508ec  lw          $a1, 0x8EC($s0)
    ctx->pc = 0x2f2e94u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2284)));
    // 0x2f2e98: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x2f2e98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x2f2e9c: 0xaca00060  sw          $zero, 0x60($a1)
    ctx->pc = 0x2f2e9cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 96), GPR_U32(ctx, 0));
    // 0x2f2ea0: 0x8e0508ec  lw          $a1, 0x8EC($s0)
    ctx->pc = 0x2f2ea0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2284)));
    // 0x2f2ea4: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x2f2ea4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x2f2ea8: 0xaca00064  sw          $zero, 0x64($a1)
    ctx->pc = 0x2f2ea8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 100), GPR_U32(ctx, 0));
    // 0x2f2eac: 0x8e0508ec  lw          $a1, 0x8EC($s0)
    ctx->pc = 0x2f2eacu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2284)));
    // 0x2f2eb0: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x2f2eb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x2f2eb4: 0xaca00068  sw          $zero, 0x68($a1)
    ctx->pc = 0x2f2eb4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 104), GPR_U32(ctx, 0));
    // 0x2f2eb8: 0x1480ffe5  bnez        $a0, . + 4 + (-0x1B << 2)
    ctx->pc = 0x2F2EB8u;
    {
        const bool branch_taken_0x2f2eb8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F2EBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F2EB8u;
            // 0x2f2ebc: 0x24630020  addiu       $v1, $v1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f2eb8) {
            ctx->pc = 0x2F2E50u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2f2e50;
        }
    }
    ctx->pc = 0x2F2EC0u;
    // 0x2f2ec0: 0x2841000c  slti        $at, $v0, 0xC
    ctx->pc = 0x2f2ec0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)12) ? 1 : 0);
    // 0x2f2ec4: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
    ctx->pc = 0x2F2EC4u;
    {
        const bool branch_taken_0x2f2ec4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F2EC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F2EC4u;
            // 0x2f2ec8: 0x22880  sll         $a1, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f2ec4) {
            ctx->pc = 0x2F2EECu;
            goto label_2f2eec;
        }
    }
    ctx->pc = 0x2F2ECCu;
label_2f2ecc:
    // 0x2f2ecc: 0x8e0408ec  lw          $a0, 0x8EC($s0)
    ctx->pc = 0x2f2eccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2284)));
    // 0x2f2ed0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2f2ed0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2f2ed4: 0x2843000c  slti        $v1, $v0, 0xC
    ctx->pc = 0x2f2ed4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)12) ? 1 : 0);
    // 0x2f2ed8: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x2f2ed8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x2f2edc: 0xac80004c  sw          $zero, 0x4C($a0)
    ctx->pc = 0x2f2edcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 76), GPR_U32(ctx, 0));
    // 0x2f2ee0: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x2f2ee0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x2f2ee4: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x2F2EE4u;
    {
        const bool branch_taken_0x2f2ee4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f2ee4) {
            ctx->pc = 0x2F2ECCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2f2ecc;
        }
    }
    ctx->pc = 0x2F2EECu;
label_2f2eec:
    // 0x2f2eec: 0x0  nop
    ctx->pc = 0x2f2eecu;
    // NOP
    // 0x2f2ef0: 0x8e231a08  lw          $v1, 0x1A08($s1)
    ctx->pc = 0x2f2ef0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 6664)));
    // 0x2f2ef4: 0x8e0208ec  lw          $v0, 0x8EC($s0)
    ctx->pc = 0x2f2ef4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2284)));
    // 0x2f2ef8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2f2ef8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f2efc: 0xc067afc  jal         func_19EBF0
    ctx->pc = 0x2F2EFCu;
    SET_GPR_U32(ctx, 31, 0x2F2F04u);
    ctx->pc = 0x2F2F00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F2EFCu;
            // 0x2f2f00: 0xac430040  sw          $v1, 0x40($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 64), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19EBF0u;
    if (runtime->hasFunction(0x19EBF0u)) {
        auto targetFn = runtime->lookupFunction(0x19EBF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F2F04u; }
        if (ctx->pc != 0x2F2F04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CountFish__16CUserDataManagerFv_0x19ebf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F2F04u; }
        if (ctx->pc != 0x2F2F04u) { return; }
    }
    ctx->pc = 0x2F2F04u;
label_2f2f04:
    // 0x2f2f04: 0x8e0408ec  lw          $a0, 0x8EC($s0)
    ctx->pc = 0x2f2f04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2284)));
    // 0x2f2f08: 0x3c030006  lui         $v1, 0x6
    ctx->pc = 0x2f2f08u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)6 << 16));
    // 0x2f2f0c: 0x34665930  ori         $a2, $v1, 0x5930
    ctx->pc = 0x2f2f0cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)22832);
    // 0x2f2f10: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2f2f10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f2f14: 0xac820048  sw          $v0, 0x48($a0)
    ctx->pc = 0x2f2f14u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 72), GPR_U32(ctx, 2));
    // 0x2f2f18: 0x878385d4  lh          $v1, -0x7A2C($gp)
    ctx->pc = 0x2f2f18u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294936020)));
    // 0x2f2f1c: 0x8e0208ec  lw          $v0, 0x8EC($s0)
    ctx->pc = 0x2f2f1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2284)));
    // 0x2f2f20: 0xac430034  sw          $v1, 0x34($v0)
    ctx->pc = 0x2f2f20u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 52), GPR_U32(ctx, 3));
    // 0x2f2f24: 0x86231a18  lh          $v1, 0x1A18($s1)
    ctx->pc = 0x2f2f24u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 6680)));
    // 0x2f2f28: 0x8e0208ec  lw          $v0, 0x8EC($s0)
    ctx->pc = 0x2f2f28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2284)));
    // 0x2f2f2c: 0xac430030  sw          $v1, 0x30($v0)
    ctx->pc = 0x2f2f2cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 48), GPR_U32(ctx, 3));
    // 0x2f2f30: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x2f2f30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2f2f34: 0x8e0208ec  lw          $v0, 0x8EC($s0)
    ctx->pc = 0x2f2f34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2284)));
    // 0x2f2f38: 0xac430038  sw          $v1, 0x38($v0)
    ctx->pc = 0x2f2f38u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 56), GPR_U32(ctx, 3));
    // 0x2f2f3c: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x2f2f3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2f2f40: 0x8e0208ec  lw          $v0, 0x8EC($s0)
    ctx->pc = 0x2f2f40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2284)));
    // 0x2f2f44: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2f2f44u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2f2f48: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x2f2f48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x2f2f4c: 0x8c630004  lw          $v1, 0x4($v1)
    ctx->pc = 0x2f2f4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x2f2f50: 0xac43003c  sw          $v1, 0x3C($v0)
    ctx->pc = 0x2f2f50u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 60), GPR_U32(ctx, 3));
    // 0x2f2f54: 0x8e0208ec  lw          $v0, 0x8EC($s0)
    ctx->pc = 0x2f2f54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2284)));
    // 0x2f2f58: 0xc049c18  jal         func_127060
    ctx->pc = 0x2F2F58u;
    SET_GPR_U32(ctx, 31, 0x2F2F60u);
    ctx->pc = 0x2F2F5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F2F58u;
            // 0x2f2f5c: 0x24440080  addiu       $a0, $v0, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127060u;
    if (runtime->hasFunction(0x127060u)) {
        auto targetFn = runtime->lookupFunction(0x127060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F2F60u; }
        if (ctx->pc != 0x2F2F60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memcpy_0x127060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F2F60u; }
        if (ctx->pc != 0x2F2F60u) { return; }
    }
    ctx->pc = 0x2F2F60u;
label_2f2f60:
    // 0x2f2f60: 0x3c020006  lui         $v0, 0x6
    ctx->pc = 0x2f2f60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)6 << 16));
    // 0x2f2f64: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2f2f64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f2f68: 0x344259c0  ori         $v0, $v0, 0x59C0
    ctx->pc = 0x2f2f68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)22976);
    // 0x2f2f6c: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x2f2f6cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2f2f70: 0xae020918  sw          $v0, 0x918($s0)
    ctx->pc = 0x2f2f70u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2328), GPR_U32(ctx, 2));
    // 0x2f2f74: 0xae00091c  sw          $zero, 0x91C($s0)
    ctx->pc = 0x2f2f74u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2332), GPR_U32(ctx, 0));
    // 0x2f2f78: 0x8e0208ec  lw          $v0, 0x8EC($s0)
    ctx->pc = 0x2f2f78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2284)));
    // 0x2f2f7c: 0xae0204e4  sw          $v0, 0x4E4($s0)
    ctx->pc = 0x2f2f7cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1252), GPR_U32(ctx, 2));
    // 0x2f2f80: 0x8e0404c8  lw          $a0, 0x4C8($s0)
    ctx->pc = 0x2f2f80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1224)));
    // 0x2f2f84: 0xc0489d2  jal         func_122748
    ctx->pc = 0x2F2F84u;
    SET_GPR_U32(ctx, 31, 0x2F2F8Cu);
    ctx->pc = 0x2F2F88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F2F84u;
            // 0x2f2f88: 0x24070202  addiu       $a3, $zero, 0x202 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 514));
        ctx->in_delay_slot = false;
    ctx->pc = 0x122748u;
    if (runtime->hasFunction(0x122748u)) {
        auto targetFn = runtime->lookupFunction(0x122748u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F2F8Cu; }
        if (ctx->pc != 0x2F2F8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceMcOpen_0x122748(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F2F8Cu; }
        if (ctx->pc != 0x2F2F8Cu) { return; }
    }
    ctx->pc = 0x2F2F8Cu;
label_2f2f8c:
    // 0x2f2f8c: 0x2403ff38  addiu       $v1, $zero, -0xC8
    ctx->pc = 0x2f2f8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967096));
    // 0x2f2f90: 0x14430007  bne         $v0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x2F2F90u;
    {
        const bool branch_taken_0x2f2f90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x2F2F94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F2F90u;
            // 0x2f2f94: 0x24020064  addiu       $v0, $zero, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f2f90) {
            ctx->pc = 0x2F2FB0u;
            goto label_2f2fb0;
        }
    }
    ctx->pc = 0x2F2F98u;
    // 0x2f2f98: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2f2f98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f2f9c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2f2f9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f2fa0: 0xc048b7a  jal         func_122DE8
    ctx->pc = 0x2F2FA0u;
    SET_GPR_U32(ctx, 31, 0x2F2FA8u);
    ctx->pc = 0x2F2FA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F2FA0u;
            // 0x2f2fa4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x122DE8u;
    if (runtime->hasFunction(0x122DE8u)) {
        auto targetFn = runtime->lookupFunction(0x122DE8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F2FA8u; }
        if (ctx->pc != 0x2F2FA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceMcSync_0x122de8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F2FA8u; }
        if (ctx->pc != 0x2F2FA8u) { return; }
    }
    ctx->pc = 0x2F2FA8u;
label_2f2fa8:
    // 0x2f2fa8: 0x1000009b  b           . + 4 + (0x9B << 2)
    ctx->pc = 0x2F2FA8u;
    {
        const bool branch_taken_0x2f2fa8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f2fa8) {
            ctx->pc = 0x2F3218u;
            goto label_2f3218;
        }
    }
    ctx->pc = 0x2F2FB0u;
label_2f2fb0:
    // 0x2f2fb0: 0x10000099  b           . + 4 + (0x99 << 2)
    ctx->pc = 0x2F2FB0u;
    {
        const bool branch_taken_0x2f2fb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F2FB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F2FB0u;
            // 0x2f2fb4: 0xae020058  sw          $v0, 0x58($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f2fb0) {
            ctx->pc = 0x2F3218u;
            goto label_2f3218;
        }
    }
    ctx->pc = 0x2F2FB8u;
label_2f2fb8:
    // 0x2f2fb8: 0x27a500dc  addiu       $a1, $sp, 0xDC
    ctx->pc = 0x2f2fb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 220));
    // 0x2f2fbc: 0xc048b7a  jal         func_122DE8
    ctx->pc = 0x2F2FBCu;
    SET_GPR_U32(ctx, 31, 0x2F2FC4u);
    ctx->pc = 0x2F2FC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F2FBCu;
            // 0x2f2fc0: 0x27a600d8  addiu       $a2, $sp, 0xD8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 216));
        ctx->in_delay_slot = false;
    ctx->pc = 0x122DE8u;
    if (runtime->hasFunction(0x122DE8u)) {
        auto targetFn = runtime->lookupFunction(0x122DE8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F2FC4u; }
        if (ctx->pc != 0x2F2FC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceMcSync_0x122de8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F2FC4u; }
        if (ctx->pc != 0x2F2FC4u) { return; }
    }
    ctx->pc = 0x2F2FC4u;
label_2f2fc4:
    // 0x2f2fc4: 0x10400094  beqz        $v0, . + 4 + (0x94 << 2)
    ctx->pc = 0x2F2FC4u;
    {
        const bool branch_taken_0x2f2fc4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f2fc4) {
            ctx->pc = 0x2F3218u;
            goto label_2f3218;
        }
    }
    ctx->pc = 0x2F2FCCu;
    // 0x2f2fcc: 0x8fa500d8  lw          $a1, 0xD8($sp)
    ctx->pc = 0x2f2fccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x2f2fd0: 0x4a10005  bgez        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2F2FD0u;
    {
        const bool branch_taken_0x2f2fd0 = (GPR_S32(ctx, 5) >= 0);
        ctx->pc = 0x2F2FD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F2FD0u;
            // 0x2f2fd4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f2fd0) {
            ctx->pc = 0x2F2FE8u;
            goto label_2f2fe8;
        }
    }
    ctx->pc = 0x2F2FD8u;
    // 0x2f2fd8: 0xc0bd2e8  jal         func_2F4BA0
    ctx->pc = 0x2F2FD8u;
    SET_GPR_U32(ctx, 31, 0x2F2FE0u);
    ctx->pc = 0x2F4BA0u;
    if (runtime->hasFunction(0x2F4BA0u)) {
        auto targetFn = runtime->lookupFunction(0x2F4BA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F2FE0u; }
        if (ctx->pc != 0x2F2FE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        McError__18CMemoryCardManagerFi_0x2f4ba0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F2FE0u; }
        if (ctx->pc != 0x2F2FE0u) { return; }
    }
    ctx->pc = 0x2F2FE0u;
label_2f2fe0:
    // 0x2f2fe0: 0x1000008e  b           . + 4 + (0x8E << 2)
    ctx->pc = 0x2F2FE0u;
    {
        const bool branch_taken_0x2f2fe0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F2FE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F2FE0u;
            // 0x2f2fe4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f2fe0) {
            ctx->pc = 0x2F321Cu;
            goto label_2f321c;
        }
    }
    ctx->pc = 0x2F2FE8u;
label_2f2fe8:
    // 0x2f2fe8: 0xae05005c  sw          $a1, 0x5C($s0)
    ctx->pc = 0x2f2fe8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 5));
    // 0x2f2fec: 0xaf809ef0  sw          $zero, -0x6110($gp)
    ctx->pc = 0x2f2fecu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942448), GPR_U32(ctx, 0));
    // 0x2f2ff0: 0x8e0504e4  lw          $a1, 0x4E4($s0)
    ctx->pc = 0x2f2ff0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1252)));
    // 0x2f2ff4: 0x8e04005c  lw          $a0, 0x5C($s0)
    ctx->pc = 0x2f2ff4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
    // 0x2f2ff8: 0xc048afe  jal         func_122BF8
    ctx->pc = 0x2F2FF8u;
    SET_GPR_U32(ctx, 31, 0x2F3000u);
    ctx->pc = 0x2F2FFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F2FF8u;
            // 0x2f2ffc: 0x24060c00  addiu       $a2, $zero, 0xC00 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3072));
        ctx->in_delay_slot = false;
    ctx->pc = 0x122BF8u;
    if (runtime->hasFunction(0x122BF8u)) {
        auto targetFn = runtime->lookupFunction(0x122BF8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F3000u; }
        if (ctx->pc != 0x2F3000u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceMcWrite_0x122bf8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F3000u; }
        if (ctx->pc != 0x2F3000u) { return; }
    }
    ctx->pc = 0x2F3000u;
label_2f3000:
    // 0x2f3000: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2F3000u;
    {
        const bool branch_taken_0x2f3000 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F3004u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F3000u;
            // 0x2f3004: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f3000) {
            ctx->pc = 0x2F3018u;
            goto label_2f3018;
        }
    }
    ctx->pc = 0x2F3008u;
    // 0x2f3008: 0x8e020058  lw          $v0, 0x58($s0)
    ctx->pc = 0x2f3008u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
    // 0x2f300c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2f300cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2f3010: 0x10000081  b           . + 4 + (0x81 << 2)
    ctx->pc = 0x2F3010u;
    {
        const bool branch_taken_0x2f3010 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F3014u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F3010u;
            // 0x2f3014: 0xae020058  sw          $v0, 0x58($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f3010) {
            ctx->pc = 0x2F3218u;
            goto label_2f3218;
        }
    }
    ctx->pc = 0x2F3018u;
label_2f3018:
    // 0x2f3018: 0x10000080  b           . + 4 + (0x80 << 2)
    ctx->pc = 0x2F3018u;
    {
        const bool branch_taken_0x2f3018 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f3018) {
            ctx->pc = 0x2F321Cu;
            goto label_2f321c;
        }
    }
    ctx->pc = 0x2F3020u;
label_2f3020:
    // 0x2f3020: 0x27a500dc  addiu       $a1, $sp, 0xDC
    ctx->pc = 0x2f3020u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 220));
    // 0x2f3024: 0xc048b7a  jal         func_122DE8
    ctx->pc = 0x2F3024u;
    SET_GPR_U32(ctx, 31, 0x2F302Cu);
    ctx->pc = 0x2F3028u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F3024u;
            // 0x2f3028: 0x2606091c  addiu       $a2, $s0, 0x91C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 2332));
        ctx->in_delay_slot = false;
    ctx->pc = 0x122DE8u;
    if (runtime->hasFunction(0x122DE8u)) {
        auto targetFn = runtime->lookupFunction(0x122DE8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F302Cu; }
        if (ctx->pc != 0x2F302Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceMcSync_0x122de8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F302Cu; }
        if (ctx->pc != 0x2F302Cu) { return; }
    }
    ctx->pc = 0x2F302Cu;
label_2f302c:
    // 0x2f302c: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2F302Cu;
    {
        const bool branch_taken_0x2f302c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f302c) {
            ctx->pc = 0x2F3044u;
            goto label_2f3044;
        }
    }
    ctx->pc = 0x2F3034u;
    // 0x2f3034: 0x8f829ef0  lw          $v0, -0x6110($gp)
    ctx->pc = 0x2f3034u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942448)));
    // 0x2f3038: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2f3038u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2f303c: 0x10000076  b           . + 4 + (0x76 << 2)
    ctx->pc = 0x2F303Cu;
    {
        const bool branch_taken_0x2f303c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F3040u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F303Cu;
            // 0x2f3040: 0xaf829ef0  sw          $v0, -0x6110($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294942448), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f303c) {
            ctx->pc = 0x2F3218u;
            goto label_2f3218;
        }
    }
    ctx->pc = 0x2F3044u;
label_2f3044:
    // 0x2f3044: 0x8e05091c  lw          $a1, 0x91C($s0)
    ctx->pc = 0x2f3044u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2332)));
    // 0x2f3048: 0x4a10005  bgez        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2F3048u;
    {
        const bool branch_taken_0x2f3048 = (GPR_S32(ctx, 5) >= 0);
        ctx->pc = 0x2F304Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F3048u;
            // 0x2f304c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f3048) {
            ctx->pc = 0x2F3060u;
            goto label_2f3060;
        }
    }
    ctx->pc = 0x2F3050u;
    // 0x2f3050: 0xc0bd2e8  jal         func_2F4BA0
    ctx->pc = 0x2F3050u;
    SET_GPR_U32(ctx, 31, 0x2F3058u);
    ctx->pc = 0x2F4BA0u;
    if (runtime->hasFunction(0x2F4BA0u)) {
        auto targetFn = runtime->lookupFunction(0x2F4BA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F3058u; }
        if (ctx->pc != 0x2F3058u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        McError__18CMemoryCardManagerFi_0x2f4ba0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F3058u; }
        if (ctx->pc != 0x2F3058u) { return; }
    }
    ctx->pc = 0x2F3058u;
label_2f3058:
    // 0x2f3058: 0x10000070  b           . + 4 + (0x70 << 2)
    ctx->pc = 0x2F3058u;
    {
        const bool branch_taken_0x2f3058 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F305Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F3058u;
            // 0x2f305c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f3058) {
            ctx->pc = 0x2F321Cu;
            goto label_2f321c;
        }
    }
    ctx->pc = 0x2F3060u;
label_2f3060:
    // 0x2f3060: 0x8e020910  lw          $v0, 0x910($s0)
    ctx->pc = 0x2f3060u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2320)));
    // 0x2f3064: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x2f3064u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x2f3068: 0xae020910  sw          $v0, 0x910($s0)
    ctx->pc = 0x2f3068u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2320), GPR_U32(ctx, 2));
    // 0x2f306c: 0x8e030914  lw          $v1, 0x914($s0)
    ctx->pc = 0x2f306cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2324)));
    // 0x2f3070: 0x8e02091c  lw          $v0, 0x91C($s0)
    ctx->pc = 0x2f3070u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2332)));
    // 0x2f3074: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x2f3074u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2f3078: 0xae020914  sw          $v0, 0x914($s0)
    ctx->pc = 0x2f3078u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2324), GPR_U32(ctx, 2));
    // 0x2f307c: 0x8e030910  lw          $v1, 0x910($s0)
    ctx->pc = 0x2f307cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2320)));
    // 0x2f3080: 0x8e040918  lw          $a0, 0x918($s0)
    ctx->pc = 0x2f3080u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2328)));
    // 0x2f3084: 0x64102a  slt         $v0, $v1, $a0
    ctx->pc = 0x2f3084u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x2f3088: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2F3088u;
    {
        const bool branch_taken_0x2f3088 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F308Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F3088u;
            // 0x2f308c: 0x831023  subu        $v0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f3088) {
            ctx->pc = 0x2F30B8u;
            goto label_2f30b8;
        }
    }
    ctx->pc = 0x2F3090u;
    // 0x2f3090: 0xc048d8e  jal         func_123638
    ctx->pc = 0x2F3090u;
    SET_GPR_U32(ctx, 31, 0x2F3098u);
    ctx->pc = 0x2F3094u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F3090u;
            // 0x2f3094: 0x8e04005c  lw          $a0, 0x5C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x123638u;
    if (runtime->hasFunction(0x123638u)) {
        auto targetFn = runtime->lookupFunction(0x123638u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F3098u; }
        if (ctx->pc != 0x2F3098u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceMcFlush_0x123638(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F3098u; }
        if (ctx->pc != 0x2F3098u) { return; }
    }
    ctx->pc = 0x2F3098u;
label_2f3098:
    // 0x2f3098: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2F3098u;
    {
        const bool branch_taken_0x2f3098 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F309Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F3098u;
            // 0x2f309c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f3098) {
            ctx->pc = 0x2F30B0u;
            goto label_2f30b0;
        }
    }
    ctx->pc = 0x2F30A0u;
    // 0x2f30a0: 0x8e020058  lw          $v0, 0x58($s0)
    ctx->pc = 0x2f30a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
    // 0x2f30a4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2f30a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2f30a8: 0x1000005b  b           . + 4 + (0x5B << 2)
    ctx->pc = 0x2F30A8u;
    {
        const bool branch_taken_0x2f30a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F30ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F30A8u;
            // 0x2f30ac: 0xae020058  sw          $v0, 0x58($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f30a8) {
            ctx->pc = 0x2F3218u;
            goto label_2f3218;
        }
    }
    ctx->pc = 0x2F30B0u;
label_2f30b0:
    // 0x2f30b0: 0x1000005a  b           . + 4 + (0x5A << 2)
    ctx->pc = 0x2F30B0u;
    {
        const bool branch_taken_0x2f30b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f30b0) {
            ctx->pc = 0x2F321Cu;
            goto label_2f321c;
        }
    }
    ctx->pc = 0x2F30B8u;
label_2f30b8:
    // 0x2f30b8: 0x28410c00  slti        $at, $v0, 0xC00
    ctx->pc = 0x2f30b8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)3072) ? 1 : 0);
    // 0x2f30bc: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x2F30BCu;
    {
        const bool branch_taken_0x2f30bc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F30C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F30BCu;
            // 0x2f30c0: 0x24060c00  addiu       $a2, $zero, 0xC00 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3072));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f30bc) {
            ctx->pc = 0x2F30C8u;
            goto label_2f30c8;
        }
    }
    ctx->pc = 0x2F30C4u;
    // 0x2f30c4: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2f30c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2f30c8:
    // 0x2f30c8: 0x8e0204e4  lw          $v0, 0x4E4($s0)
    ctx->pc = 0x2f30c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1252)));
    // 0x2f30cc: 0x8e04005c  lw          $a0, 0x5C($s0)
    ctx->pc = 0x2f30ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
    // 0x2f30d0: 0xc048afe  jal         func_122BF8
    ctx->pc = 0x2F30D0u;
    SET_GPR_U32(ctx, 31, 0x2F30D8u);
    ctx->pc = 0x2F30D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F30D0u;
            // 0x2f30d4: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x122BF8u;
    if (runtime->hasFunction(0x122BF8u)) {
        auto targetFn = runtime->lookupFunction(0x122BF8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F30D8u; }
        if (ctx->pc != 0x2F30D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceMcWrite_0x122bf8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F30D8u; }
        if (ctx->pc != 0x2F30D8u) { return; }
    }
    ctx->pc = 0x2F30D8u;
label_2f30d8:
    // 0x2f30d8: 0x1000004f  b           . + 4 + (0x4F << 2)
    ctx->pc = 0x2F30D8u;
    {
        const bool branch_taken_0x2f30d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f30d8) {
            ctx->pc = 0x2F3218u;
            goto label_2f3218;
        }
    }
    ctx->pc = 0x2F30E0u;
label_2f30e0:
    // 0x2f30e0: 0x27a500dc  addiu       $a1, $sp, 0xDC
    ctx->pc = 0x2f30e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 220));
    // 0x2f30e4: 0xc048b7a  jal         func_122DE8
    ctx->pc = 0x2F30E4u;
    SET_GPR_U32(ctx, 31, 0x2F30ECu);
    ctx->pc = 0x2F30E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F30E4u;
            // 0x2f30e8: 0x27a600d8  addiu       $a2, $sp, 0xD8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 216));
        ctx->in_delay_slot = false;
    ctx->pc = 0x122DE8u;
    if (runtime->hasFunction(0x122DE8u)) {
        auto targetFn = runtime->lookupFunction(0x122DE8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F30ECu; }
        if (ctx->pc != 0x2F30ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceMcSync_0x122de8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F30ECu; }
        if (ctx->pc != 0x2F30ECu) { return; }
    }
    ctx->pc = 0x2F30ECu;
label_2f30ec:
    // 0x2f30ec: 0x1040004a  beqz        $v0, . + 4 + (0x4A << 2)
    ctx->pc = 0x2F30ECu;
    {
        const bool branch_taken_0x2f30ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f30ec) {
            ctx->pc = 0x2F3218u;
            goto label_2f3218;
        }
    }
    ctx->pc = 0x2F30F4u;
    // 0x2f30f4: 0x8fa500d8  lw          $a1, 0xD8($sp)
    ctx->pc = 0x2f30f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x2f30f8: 0x4a10005  bgez        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2F30F8u;
    {
        const bool branch_taken_0x2f30f8 = (GPR_S32(ctx, 5) >= 0);
        ctx->pc = 0x2F30FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F30F8u;
            // 0x2f30fc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f30f8) {
            ctx->pc = 0x2F3110u;
            goto label_2f3110;
        }
    }
    ctx->pc = 0x2F3100u;
    // 0x2f3100: 0xc0bd2e8  jal         func_2F4BA0
    ctx->pc = 0x2F3100u;
    SET_GPR_U32(ctx, 31, 0x2F3108u);
    ctx->pc = 0x2F4BA0u;
    if (runtime->hasFunction(0x2F4BA0u)) {
        auto targetFn = runtime->lookupFunction(0x2F4BA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F3108u; }
        if (ctx->pc != 0x2F3108u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        McError__18CMemoryCardManagerFi_0x2f4ba0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F3108u; }
        if (ctx->pc != 0x2F3108u) { return; }
    }
    ctx->pc = 0x2F3108u;
label_2f3108:
    // 0x2f3108: 0x10000044  b           . + 4 + (0x44 << 2)
    ctx->pc = 0x2F3108u;
    {
        const bool branch_taken_0x2f3108 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F310Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F3108u;
            // 0x2f310c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f3108) {
            ctx->pc = 0x2F321Cu;
            goto label_2f321c;
        }
    }
    ctx->pc = 0x2F3110u;
label_2f3110:
    // 0x2f3110: 0x8e04005c  lw          $a0, 0x5C($s0)
    ctx->pc = 0x2f3110u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
    // 0x2f3114: 0x24050045  addiu       $a1, $zero, 0x45
    ctx->pc = 0x2f3114u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 69));
    // 0x2f3118: 0xc048a5c  jal         func_122970
    ctx->pc = 0x2F3118u;
    SET_GPR_U32(ctx, 31, 0x2F3120u);
    ctx->pc = 0x2F311Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F3118u;
            // 0x2f311c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x122970u;
    if (runtime->hasFunction(0x122970u)) {
        auto targetFn = runtime->lookupFunction(0x122970u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F3120u; }
        if (ctx->pc != 0x2F3120u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceMcSeek_0x122970(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F3120u; }
        if (ctx->pc != 0x2F3120u) { return; }
    }
    ctx->pc = 0x2F3120u;
label_2f3120:
    // 0x2f3120: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2f3120u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f3124: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2f3124u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f3128: 0xc048b7a  jal         func_122DE8
    ctx->pc = 0x2F3128u;
    SET_GPR_U32(ctx, 31, 0x2F3130u);
    ctx->pc = 0x2F312Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F3128u;
            // 0x2f312c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x122DE8u;
    if (runtime->hasFunction(0x122DE8u)) {
        auto targetFn = runtime->lookupFunction(0x122DE8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F3130u; }
        if (ctx->pc != 0x2F3130u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceMcSync_0x122de8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F3130u; }
        if (ctx->pc != 0x2F3130u) { return; }
    }
    ctx->pc = 0x2F3130u;
label_2f3130:
    // 0x2f3130: 0x8e0208ec  lw          $v0, 0x8EC($s0)
    ctx->pc = 0x2f3130u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2284)));
    // 0x2f3134: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2f3134u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f3138: 0xa0400045  sb          $zero, 0x45($v0)
    ctx->pc = 0x2f3138u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 69), (uint8_t)GPR_U32(ctx, 0));
    // 0x2f313c: 0x8e0208ec  lw          $v0, 0x8EC($s0)
    ctx->pc = 0x2f313cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2284)));
    // 0x2f3140: 0x8e04005c  lw          $a0, 0x5C($s0)
    ctx->pc = 0x2f3140u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
    // 0x2f3144: 0xc048afe  jal         func_122BF8
    ctx->pc = 0x2F3144u;
    SET_GPR_U32(ctx, 31, 0x2F314Cu);
    ctx->pc = 0x2F3148u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F3144u;
            // 0x2f3148: 0x24450045  addiu       $a1, $v0, 0x45 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 69));
        ctx->in_delay_slot = false;
    ctx->pc = 0x122BF8u;
    if (runtime->hasFunction(0x122BF8u)) {
        auto targetFn = runtime->lookupFunction(0x122BF8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F314Cu; }
        if (ctx->pc != 0x2F314Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceMcWrite_0x122bf8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F314Cu; }
        if (ctx->pc != 0x2F314Cu) { return; }
    }
    ctx->pc = 0x2F314Cu;
label_2f314c:
    // 0x2f314c: 0x8e020058  lw          $v0, 0x58($s0)
    ctx->pc = 0x2f314cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
    // 0x2f3150: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2f3150u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2f3154: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x2F3154u;
    {
        const bool branch_taken_0x2f3154 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F3158u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F3154u;
            // 0x2f3158: 0xae020058  sw          $v0, 0x58($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f3154) {
            ctx->pc = 0x2F3218u;
            goto label_2f3218;
        }
    }
    ctx->pc = 0x2F315Cu;
label_2f315c:
    // 0x2f315c: 0x27a500dc  addiu       $a1, $sp, 0xDC
    ctx->pc = 0x2f315cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 220));
    // 0x2f3160: 0xc048b7a  jal         func_122DE8
    ctx->pc = 0x2F3160u;
    SET_GPR_U32(ctx, 31, 0x2F3168u);
    ctx->pc = 0x2F3164u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F3160u;
            // 0x2f3164: 0x27a600d8  addiu       $a2, $sp, 0xD8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 216));
        ctx->in_delay_slot = false;
    ctx->pc = 0x122DE8u;
    if (runtime->hasFunction(0x122DE8u)) {
        auto targetFn = runtime->lookupFunction(0x122DE8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F3168u; }
        if (ctx->pc != 0x2F3168u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceMcSync_0x122de8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F3168u; }
        if (ctx->pc != 0x2F3168u) { return; }
    }
    ctx->pc = 0x2F3168u;
label_2f3168:
    // 0x2f3168: 0x1040002b  beqz        $v0, . + 4 + (0x2B << 2)
    ctx->pc = 0x2F3168u;
    {
        const bool branch_taken_0x2f3168 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f3168) {
            ctx->pc = 0x2F3218u;
            goto label_2f3218;
        }
    }
    ctx->pc = 0x2F3170u;
    // 0x2f3170: 0x8fa500d8  lw          $a1, 0xD8($sp)
    ctx->pc = 0x2f3170u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x2f3174: 0x4a10005  bgez        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2F3174u;
    {
        const bool branch_taken_0x2f3174 = (GPR_S32(ctx, 5) >= 0);
        ctx->pc = 0x2F3178u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F3174u;
            // 0x2f3178: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f3174) {
            ctx->pc = 0x2F318Cu;
            goto label_2f318c;
        }
    }
    ctx->pc = 0x2F317Cu;
    // 0x2f317c: 0xc0bd2e8  jal         func_2F4BA0
    ctx->pc = 0x2F317Cu;
    SET_GPR_U32(ctx, 31, 0x2F3184u);
    ctx->pc = 0x2F4BA0u;
    if (runtime->hasFunction(0x2F4BA0u)) {
        auto targetFn = runtime->lookupFunction(0x2F4BA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F3184u; }
        if (ctx->pc != 0x2F3184u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        McError__18CMemoryCardManagerFi_0x2f4ba0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F3184u; }
        if (ctx->pc != 0x2F3184u) { return; }
    }
    ctx->pc = 0x2F3184u;
label_2f3184:
    // 0x2f3184: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x2F3184u;
    {
        const bool branch_taken_0x2f3184 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F3188u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F3184u;
            // 0x2f3188: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f3184) {
            ctx->pc = 0x2F321Cu;
            goto label_2f321c;
        }
    }
    ctx->pc = 0x2F318Cu;
label_2f318c:
    // 0x2f318c: 0xc048a2e  jal         func_1228B8
    ctx->pc = 0x2F318Cu;
    SET_GPR_U32(ctx, 31, 0x2F3194u);
    ctx->pc = 0x2F3190u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F318Cu;
            // 0x2f3190: 0x8e04005c  lw          $a0, 0x5C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1228B8u;
    if (runtime->hasFunction(0x1228B8u)) {
        auto targetFn = runtime->lookupFunction(0x1228B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F3194u; }
        if (ctx->pc != 0x2F3194u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceMcClose_0x1228b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F3194u; }
        if (ctx->pc != 0x2F3194u) { return; }
    }
    ctx->pc = 0x2F3194u;
label_2f3194:
    // 0x2f3194: 0x8e020058  lw          $v0, 0x58($s0)
    ctx->pc = 0x2f3194u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
    // 0x2f3198: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2f3198u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2f319c: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x2F319Cu;
    {
        const bool branch_taken_0x2f319c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F31A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F319Cu;
            // 0x2f31a0: 0xae020058  sw          $v0, 0x58($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f319c) {
            ctx->pc = 0x2F3218u;
            goto label_2f3218;
        }
    }
    ctx->pc = 0x2F31A4u;
label_2f31a4:
    // 0x2f31a4: 0x27a500dc  addiu       $a1, $sp, 0xDC
    ctx->pc = 0x2f31a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 220));
    // 0x2f31a8: 0xc048b7a  jal         func_122DE8
    ctx->pc = 0x2F31A8u;
    SET_GPR_U32(ctx, 31, 0x2F31B0u);
    ctx->pc = 0x2F31ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F31A8u;
            // 0x2f31ac: 0x27a600d8  addiu       $a2, $sp, 0xD8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 216));
        ctx->in_delay_slot = false;
    ctx->pc = 0x122DE8u;
    if (runtime->hasFunction(0x122DE8u)) {
        auto targetFn = runtime->lookupFunction(0x122DE8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F31B0u; }
        if (ctx->pc != 0x2F31B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceMcSync_0x122de8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F31B0u; }
        if (ctx->pc != 0x2F31B0u) { return; }
    }
    ctx->pc = 0x2F31B0u;
label_2f31b0:
    // 0x2f31b0: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x2F31B0u;
    {
        const bool branch_taken_0x2f31b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f31b0) {
            ctx->pc = 0x2F3218u;
            goto label_2f3218;
        }
    }
    ctx->pc = 0x2F31B8u;
    // 0x2f31b8: 0x8fa500d8  lw          $a1, 0xD8($sp)
    ctx->pc = 0x2f31b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x2f31bc: 0x4a10005  bgez        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2F31BCu;
    {
        const bool branch_taken_0x2f31bc = (GPR_S32(ctx, 5) >= 0);
        ctx->pc = 0x2F31C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F31BCu;
            // 0x2f31c0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f31bc) {
            ctx->pc = 0x2F31D4u;
            goto label_2f31d4;
        }
    }
    ctx->pc = 0x2F31C4u;
    // 0x2f31c4: 0xc0bd2e8  jal         func_2F4BA0
    ctx->pc = 0x2F31C4u;
    SET_GPR_U32(ctx, 31, 0x2F31CCu);
    ctx->pc = 0x2F4BA0u;
    if (runtime->hasFunction(0x2F4BA0u)) {
        auto targetFn = runtime->lookupFunction(0x2F4BA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F31CCu; }
        if (ctx->pc != 0x2F31CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        McError__18CMemoryCardManagerFi_0x2f4ba0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F31CCu; }
        if (ctx->pc != 0x2F31CCu) { return; }
    }
    ctx->pc = 0x2F31CCu;
label_2f31cc:
    // 0x2f31cc: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x2F31CCu;
    {
        const bool branch_taken_0x2f31cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F31D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F31CCu;
            // 0x2f31d0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f31cc) {
            ctx->pc = 0x2F321Cu;
            goto label_2f321c;
        }
    }
    ctx->pc = 0x2F31D4u;
label_2f31d4:
    // 0x2f31d4: 0x8e020058  lw          $v0, 0x58($s0)
    ctx->pc = 0x2f31d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
    // 0x2f31d8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2f31d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2f31dc: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x2F31DCu;
    {
        const bool branch_taken_0x2f31dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F31E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F31DCu;
            // 0x2f31e0: 0xae020058  sw          $v0, 0x58($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f31dc) {
            ctx->pc = 0x2F3218u;
            goto label_2f3218;
        }
    }
    ctx->pc = 0x2F31E4u;
label_2f31e4:
    // 0x2f31e4: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x2f31e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x2f31e8: 0x24450da0  addiu       $a1, $v0, 0xDA0
    ctx->pc = 0x2f31e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 3488));
    // 0x2f31ec: 0x10a00008  beqz        $a1, . + 4 + (0x8 << 2)
    ctx->pc = 0x2F31ECu;
    {
        const bool branch_taken_0x2f31ec = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F31F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F31ECu;
            // 0x2f31f0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f31ec) {
            ctx->pc = 0x2F3210u;
            goto label_2f3210;
        }
    }
    ctx->pc = 0x2F31F4u;
    // 0x2f31f4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2f31f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f31f8: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x2f31f8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x2f31fc: 0xacb20004  sw          $s2, 0x4($a1)
    ctx->pc = 0x2f31fcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 18));
    // 0x2f3200: 0x8e0608ec  lw          $a2, 0x8EC($s0)
    ctx->pc = 0x2f3200u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2284)));
    // 0x2f3204: 0xc0bc7d0  jal         func_2F1F40
    ctx->pc = 0x2F3204u;
    SET_GPR_U32(ctx, 31, 0x2F320Cu);
    ctx->pc = 0x2F3208u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F3204u;
            // 0x2f3208: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F1F40u;
    if (runtime->hasFunction(0x2F1F40u)) {
        auto targetFn = runtime->lookupFunction(0x2F1F40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F320Cu; }
        if (ctx->pc != 0x2F320Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        UpDateViewInfo__18CMemoryCardManagerFP13SAVEDATA_INFOP15SAVEDATA_FORMAT_0x2f1f40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F320Cu; }
        if (ctx->pc != 0x2F320Cu) { return; }
    }
    ctx->pc = 0x2F320Cu;
label_2f320c:
    // 0x2f320c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2f320cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2f3210:
    // 0x2f3210: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2F3210u;
    {
        const bool branch_taken_0x2f3210 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f3210) {
            ctx->pc = 0x2F321Cu;
            goto label_2f321c;
        }
    }
    ctx->pc = 0x2F3218u;
label_2f3218:
    // 0x2f3218: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2f3218u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f321c:
    // 0x2f321c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2f321cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_2f3220:
    // 0x2f3220: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2f3220u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2f3224: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2f3224u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2f3228: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2f3228u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f322c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2f322cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f3230: 0x3e00008  jr          $ra
    ctx->pc = 0x2F3230u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F3234u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F3230u;
            // 0x2f3234: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2F3238u;
}
