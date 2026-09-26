#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: LoadFontTexture__FiP8TM2_head
// Address: 0x192ca0 - 0x192fb4
void LoadFontTexture__FiP8TM2_head_0x192ca0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("LoadFontTexture__FiP8TM2_head_0x192ca0");
#endif

    switch (ctx->pc) {
        case 0x192ce4u: goto label_192ce4;
        case 0x192d28u: goto label_192d28;
        case 0x192d4cu: goto label_192d4c;
        case 0x192d54u: goto label_192d54;
        case 0x192e54u: goto label_192e54;
        case 0x192e5cu: goto label_192e5c;
        case 0x192e80u: goto label_192e80;
        case 0x192ec0u: goto label_192ec0;
        case 0x192ef4u: goto label_192ef4;
        case 0x192f08u: goto label_192f08;
        case 0x192f1cu: goto label_192f1c;
        case 0x192f2cu: goto label_192f2c;
        case 0x192f34u: goto label_192f34;
        case 0x192f48u: goto label_192f48;
        case 0x192f50u: goto label_192f50;
        case 0x192f58u: goto label_192f58;
        case 0x192f80u: goto label_192f80;
        case 0x192f8cu: goto label_192f8c;
        default: break;
    }

    ctx->pc = 0x192ca0u;

    // 0x192ca0: 0x27bdf910  addiu       $sp, $sp, -0x6F0
    ctx->pc = 0x192ca0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294965520));
    // 0x192ca4: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x192ca4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x192ca8: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x192ca8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
    // 0x192cac: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x192cacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x192cb0: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x192cb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x192cb4: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x192cb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x192cb8: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x192cb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x192cbc: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x192cbcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x192cc0: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x192cc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x192cc4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x192cc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x192cc8: 0x66000b0  bltz        $s3, . + 4 + (0xB0 << 2)
    ctx->pc = 0x192CC8u;
    {
        const bool branch_taken_0x192cc8 = (GPR_S32(ctx, 19) < 0);
        ctx->pc = 0x192CCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x192CC8u;
            // 0x192ccc: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x192cc8) {
            ctx->pc = 0x192F8Cu;
            goto label_192f8c;
        }
    }
    ctx->pc = 0x192CD0u;
    // 0x192cd0: 0x2a610002  slti        $at, $s3, 0x2
    ctx->pc = 0x192cd0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x192cd4: 0x10200006  beqz        $at, . + 4 + (0x6 << 2)
    ctx->pc = 0x192CD4u;
    {
        const bool branch_taken_0x192cd4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x192CD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x192CD4u;
            // 0x192cd8: 0x2a610002  slti        $at, $s3, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x192cd4) {
            ctx->pc = 0x192CF0u;
            goto label_192cf0;
        }
    }
    ctx->pc = 0x192CDCu;
    // 0x192cdc: 0xc051500  jal         func_145400
    ctx->pc = 0x192CDCu;
    SET_GPR_U32(ctx, 31, 0x192CE4u);
    ctx->pc = 0x145400u;
    if (runtime->hasFunction(0x145400u)) {
        auto targetFn = runtime->lookupFunction(0x145400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x192CE4u; }
        if (ctx->pc != 0x192CE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgLoadTextureZ__FiP8TM2_head_0x145400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x192CE4u; }
        if (ctx->pc != 0x192CE4u) { return; }
    }
    ctx->pc = 0x192CE4u;
label_192ce4:
    // 0x192ce4: 0x100000aa  b           . + 4 + (0xAA << 2)
    ctx->pc = 0x192CE4u;
    {
        const bool branch_taken_0x192ce4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x192CE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x192CE4u;
            // 0x192ce8: 0xdfbf0080  ld          $ra, 0x80($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x192ce4) {
            ctx->pc = 0x192F90u;
            goto label_192f90;
        }
    }
    ctx->pc = 0x192CECu;
    // 0x192cec: 0x2a610002  slti        $at, $s3, 0x2
    ctx->pc = 0x192cecu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)2) ? 1 : 0);
label_192cf0:
    // 0x192cf0: 0x102000a6  beqz        $at, . + 4 + (0xA6 << 2)
    ctx->pc = 0x192CF0u;
    {
        const bool branch_taken_0x192cf0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x192cf0) {
            ctx->pc = 0x192F8Cu;
            goto label_192f8c;
        }
    }
    ctx->pc = 0x192CF8u;
    // 0x192cf8: 0x1320c0  sll         $a0, $s3, 3
    ctx->pc = 0x192cf8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 19), 3));
    // 0x192cfc: 0x3c0301e6  lui         $v1, 0x1E6
    ctx->pc = 0x192cfcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)486 << 16));
    // 0x192d00: 0x932023  subu        $a0, $a0, $s3
    ctx->pc = 0x192d00u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 19)));
    // 0x192d04: 0x246372b0  addiu       $v1, $v1, 0x72B0
    ctx->pc = 0x192d04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 29360));
    // 0x192d08: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x192d08u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x192d0c: 0x648021  addu        $s0, $v1, $a0
    ctx->pc = 0x192d0cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x192d10: 0x1200009e  beqz        $s0, . + 4 + (0x9E << 2)
    ctx->pc = 0x192D10u;
    {
        const bool branch_taken_0x192d10 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x192d10) {
            ctx->pc = 0x192F8Cu;
            goto label_192f8c;
        }
    }
    ctx->pc = 0x192D18u;
    // 0x192d18: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x192d18u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
    // 0x192d1c: 0x26040008  addiu       $a0, $s0, 0x8
    ctx->pc = 0x192d1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x192d20: 0xc04a3dc  jal         func_128F70
    ctx->pc = 0x192D20u;
    SET_GPR_U32(ctx, 31, 0x192D28u);
    ctx->pc = 0x192D24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x192D20u;
            // 0x192d24: 0x24a550d0  addiu       $a1, $a1, 0x50D0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 20688));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128F70u;
    if (runtime->hasFunction(0x128F70u)) {
        auto targetFn = runtime->lookupFunction(0x128F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x192D28u; }
        if (ctx->pc != 0x192D28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x128f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x192D28u; }
        if (ctx->pc != 0x192D28u) { return; }
    }
    ctx->pc = 0x192D28u;
label_192d28:
    // 0x192d28: 0x87868b40  lh          $a2, -0x74C0($gp)
    ctx->pc = 0x192d28u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294937408)));
    // 0x192d2c: 0x27a506ec  addiu       $a1, $sp, 0x6EC
    ctx->pc = 0x192d2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1772));
    // 0x192d30: 0x93838b42  lbu         $v1, -0x74BE($gp)
    ctx->pc = 0x192d30u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294937410)));
    // 0x192d34: 0x26620030  addiu       $v0, $s3, 0x30
    ctx->pc = 0x192d34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 48));
    // 0x192d38: 0x26040008  addiu       $a0, $s0, 0x8
    ctx->pc = 0x192d38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x192d3c: 0xa4a60000  sh          $a2, 0x0($a1)
    ctx->pc = 0x192d3cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 6));
    // 0x192d40: 0xa0a30002  sb          $v1, 0x2($a1)
    ctx->pc = 0x192d40u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x192d44: 0xc04a2da  jal         func_128B68
    ctx->pc = 0x192D44u;
    SET_GPR_U32(ctx, 31, 0x192D4Cu);
    ctx->pc = 0x192D48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x192D44u;
            // 0x192d48: 0xa3a206ec  sb          $v0, 0x6EC($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 1772), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128B68u;
    if (runtime->hasFunction(0x128B68u)) {
        auto targetFn = runtime->lookupFunction(0x128B68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x192D4Cu; }
        if (ctx->pc != 0x192D4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcat_0x128b68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x192D4Cu; }
        if (ctx->pc != 0x192D4Cu) { return; }
    }
    ctx->pc = 0x192D4Cu;
label_192d4c:
    // 0x192d4c: 0xc050848  jal         func_142120
    ctx->pc = 0x192D4Cu;
    SET_GPR_U32(ctx, 31, 0x192D54u);
    ctx->pc = 0x192D50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x192D4Cu;
            // 0x192d50: 0x26350010  addiu       $s5, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x142120u;
    if (runtime->hasFunction(0x142120u)) {
        auto targetFn = runtime->lookupFunction(0x142120u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x192D54u; }
        if (ctx->pc != 0x192D54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgGetTopVRAMAddress__Fv_0x142120(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x192D54u; }
        if (ctx->pc != 0x192D54u) { return; }
    }
    ctx->pc = 0x192D54u;
label_192d54:
    // 0x192d54: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x192d54u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x192d58: 0x2663fffe  addiu       $v1, $s3, -0x2
    ctx->pc = 0x192d58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967294));
    // 0x192d5c: 0x220902d  daddu       $s2, $s1, $zero
    ctx->pc = 0x192d5cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x192d60: 0x31a40  sll         $v1, $v1, 9
    ctx->pc = 0x192d60u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 9));
    // 0x192d64: 0x2539021  addu        $s2, $s2, $s3
    ctx->pc = 0x192d64u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 19)));
    // 0x192d68: 0x438821  addu        $s1, $v0, $v1
    ctx->pc = 0x192d68u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x192d6c: 0x96b30014  lhu         $s3, 0x14($s5)
    ctx->pc = 0x192d6cu;
    SET_GPR_U32(ctx, 19, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 20)));
    // 0x192d70: 0x24030200  addiu       $v1, $zero, 0x200
    ctx->pc = 0x192d70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x192d74: 0x16630085  bne         $s3, $v1, . + 4 + (0x85 << 2)
    ctx->pc = 0x192D74u;
    {
        const bool branch_taken_0x192d74 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 3));
        ctx->pc = 0x192D78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x192D74u;
            // 0x192d78: 0x96b40016  lhu         $s4, 0x16($s5) (Delay Slot)
        SET_GPR_U32(ctx, 20, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 22)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x192d74) {
            ctx->pc = 0x192F8Cu;
            goto label_192f8c;
        }
    }
    ctx->pc = 0x192D7Cu;
    // 0x192d7c: 0x240301a0  addiu       $v1, $zero, 0x1A0
    ctx->pc = 0x192d7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 416));
    // 0x192d80: 0x12830003  beq         $s4, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x192D80u;
    {
        const bool branch_taken_0x192d80 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 3));
        if (branch_taken_0x192d80) {
            ctx->pc = 0x192D90u;
            goto label_192d90;
        }
    }
    ctx->pc = 0x192D88u;
    // 0x192d88: 0x10000080  b           . + 4 + (0x80 << 2)
    ctx->pc = 0x192D88u;
    {
        const bool branch_taken_0x192d88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x192d88) {
            ctx->pc = 0x192F8Cu;
            goto label_192f8c;
        }
    }
    ctx->pc = 0x192D90u;
label_192d90:
    // 0x192d90: 0x92a40013  lbu         $a0, 0x13($s5)
    ctx->pc = 0x192d90u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 19)));
    // 0x192d94: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x192d94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x192d98: 0x1483007c  bne         $a0, $v1, . + 4 + (0x7C << 2)
    ctx->pc = 0x192D98u;
    {
        const bool branch_taken_0x192d98 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x192d98) {
            ctx->pc = 0x192F8Cu;
            goto label_192f8c;
        }
    }
    ctx->pc = 0x192DA0u;
    // 0x192da0: 0x96a4000c  lhu         $a0, 0xC($s5)
    ctx->pc = 0x192da0u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 12)));
    // 0x192da4: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x192da4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x192da8: 0x8ea30008  lw          $v1, 0x8($s5)
    ctx->pc = 0x192da8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
    // 0x192dac: 0x30a20003  andi        $v0, $a1, 0x3
    ctx->pc = 0x192dacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)3);
    // 0x192db0: 0x2a4a821  addu        $s5, $s5, $a0
    ctx->pc = 0x192db0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 4)));
    // 0x192db4: 0x4a10004  bgez        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x192DB4u;
    {
        const bool branch_taken_0x192db4 = (GPR_S32(ctx, 5) >= 0);
        ctx->pc = 0x192DB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x192DB4u;
            // 0x192db8: 0x2a3b021  addu        $s6, $s5, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x192db4) {
            ctx->pc = 0x192DC8u;
            goto label_192dc8;
        }
    }
    ctx->pc = 0x192DBCu;
    // 0x192dbc: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x192DBCu;
    {
        const bool branch_taken_0x192dbc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x192dbc) {
            ctx->pc = 0x192DC8u;
            goto label_192dc8;
        }
    }
    ctx->pc = 0x192DC4u;
    // 0x192dc4: 0x2442fffc  addiu       $v0, $v0, -0x4
    ctx->pc = 0x192dc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
label_192dc8:
    // 0x192dc8: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x192DC8u;
    {
        const bool branch_taken_0x192dc8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x192DCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x192DC8u;
            // 0x192dcc: 0x12103c  dsll32      $v0, $s2, 0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) << (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x192dc8) {
            ctx->pc = 0x192DF8u;
            goto label_192df8;
        }
    }
    ctx->pc = 0x192DD0u;
    // 0x192dd0: 0x4a10004  bgez        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x192DD0u;
    {
        const bool branch_taken_0x192dd0 = (GPR_S32(ctx, 5) >= 0);
        ctx->pc = 0x192DD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x192DD0u;
            // 0x192dd4: 0x30a30003  andi        $v1, $a1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x192dd0) {
            ctx->pc = 0x192DE4u;
            goto label_192de4;
        }
    }
    ctx->pc = 0x192DD8u;
    // 0x192dd8: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x192DD8u;
    {
        const bool branch_taken_0x192dd8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x192DDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x192DD8u;
            // 0x192ddc: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x192dd8) {
            ctx->pc = 0x192DE8u;
            goto label_192de8;
        }
    }
    ctx->pc = 0x192DE0u;
    // 0x192de0: 0x2463fffc  addiu       $v1, $v1, -0x4
    ctx->pc = 0x192de0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967292));
label_192de4:
    // 0x192de4: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x192de4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_192de8:
    // 0x192de8: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x192de8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x192dec: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x192decu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x192df0: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x192df0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x192df4: 0x12103c  dsll32      $v0, $s2, 0
    ctx->pc = 0x192df4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) << (32 + 0));
label_192df8:
    // 0x192df8: 0xa6130002  sh          $s3, 0x2($s0)
    ctx->pc = 0x192df8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2), (uint16_t)GPR_U32(ctx, 19));
    // 0x192dfc: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x192dfcu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x192e00: 0x11303c  dsll32      $a2, $s1, 0
    ctx->pc = 0x192e00u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 17) << (32 + 0));
    // 0x192e04: 0x2397c  dsll32      $a3, $v0, 5
    ctx->pc = 0x192e04u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) << (32 + 5));
    // 0x192e08: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x192e08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x192e0c: 0xa6140004  sh          $s4, 0x4($s0)
    ctx->pc = 0x192e0cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4), (uint16_t)GPR_U32(ctx, 20));
    // 0x192e10: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x192e10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x192e14: 0xa6030006  sh          $v1, 0x6($s0)
    ctx->pc = 0x192e14u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 6), (uint16_t)GPR_U32(ctx, 3));
    // 0x192e18: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x192e18u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x192e1c: 0x3c036542  lui         $v1, 0x6542
    ctx->pc = 0x192e1cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)25922 << 16));
    // 0x192e20: 0x6303f  dsra32      $a2, $a2, 0
    ctx->pc = 0x192e20u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 0));
    // 0x192e24: 0x642025  or          $a0, $v1, $a0
    ctx->pc = 0x192e24u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x192e28: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x192e28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x192e2c: 0xc42025  or          $a0, $a2, $a0
    ctx->pc = 0x192e2cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) | GPR_U64(ctx, 4));
    // 0x192e30: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x192e30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x192e34: 0xe43025  or          $a2, $a3, $a0
    ctx->pc = 0x192e34u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) | GPR_U64(ctx, 4));
    // 0x192e38: 0xa6000000  sh          $zero, 0x0($s0)
    ctx->pc = 0x192e38u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x192e3c: 0xc31825  or          $v1, $a2, $v1
    ctx->pc = 0x192e3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x192e40: 0x24020261  addiu       $v0, $zero, 0x261
    ctx->pc = 0x192e40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 609));
    // 0x192e44: 0xfe030038  sd          $v1, 0x38($s0)
    ctx->pc = 0x192e44u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 56), GPR_U64(ctx, 3));
    // 0x192e48: 0x27a406d0  addiu       $a0, $sp, 0x6D0
    ctx->pc = 0x192e48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1744));
    // 0x192e4c: 0xc04198c  jal         func_106630
    ctx->pc = 0x192E4Cu;
    SET_GPR_U32(ctx, 31, 0x192E54u);
    ctx->pc = 0x192E50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x192E4Cu;
            // 0x192e50: 0xfe020040  sd          $v0, 0x40($s0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 16), 64), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106630u;
    if (runtime->hasFunction(0x106630u)) {
        auto targetFn = runtime->lookupFunction(0x106630u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x192E54u; }
        if (ctx->pc != 0x192E54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceGifPkInit_0x106630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x192E54u; }
        if (ctx->pc != 0x192E54u) { return; }
    }
    ctx->pc = 0x192E54u;
label_192e54:
    // 0x192e54: 0xc0410b0  jal         func_1042C0
    ctx->pc = 0x192E54u;
    SET_GPR_U32(ctx, 31, 0x192E5Cu);
    ctx->pc = 0x192E58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x192E54u;
            // 0x192e58: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1042C0u;
    if (runtime->hasFunction(0x1042C0u)) {
        auto targetFn = runtime->lookupFunction(0x1042C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x192E5Cu; }
        if (ctx->pc != 0x192E5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceDmaGetChan_0x1042c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x192E5Cu; }
        if (ctx->pc != 0x192E5Cu) { return; }
    }
    ctx->pc = 0x192E5Cu;
label_192e5c:
    // 0x192e5c: 0x90460000  lbu         $a2, 0x0($v0)
    ctx->pc = 0x192e5cu;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x192e60: 0x2403ffbf  addiu       $v1, $zero, -0x41
    ctx->pc = 0x192e60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967231));
    // 0x192e64: 0x64050040  daddiu      $a1, $zero, 0x40
    ctx->pc = 0x192e64u;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)64);
    // 0x192e68: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x192e68u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x192e6c: 0x27a406d0  addiu       $a0, $sp, 0x6D0
    ctx->pc = 0x192e6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1744));
    // 0x192e70: 0xc31824  and         $v1, $a2, $v1
    ctx->pc = 0x192e70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x192e74: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x192e74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x192e78: 0xc041990  jal         func_106640
    ctx->pc = 0x192E78u;
    SET_GPR_U32(ctx, 31, 0x192E80u);
    ctx->pc = 0x192E7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x192E78u;
            // 0x192e7c: 0xa0430000  sb          $v1, 0x0($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106640u;
    if (runtime->hasFunction(0x106640u)) {
        auto targetFn = runtime->lookupFunction(0x106640u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x192E80u; }
        if (ctx->pc != 0x192E80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceGifPkReset_0x106640(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x192E80u; }
        if (ctx->pc != 0x192E80u) { return; }
    }
    ctx->pc = 0x192E80u;
label_192e80:
    // 0x192e80: 0x2741018  mult        $v0, $s3, $s4
    ctx->pc = 0x192e80u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 20); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x192e84: 0xffb30000  sd          $s3, 0x0($sp)
    ctx->pc = 0x192e84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 19));
    // 0x192e88: 0x3225ffff  andi        $a1, $s1, 0xFFFF
    ctx->pc = 0x192e88u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)65535);
    // 0x192e8c: 0xffb40008  sd          $s4, 0x8($sp)
    ctx->pc = 0x192e8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 20));
    // 0x192e90: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x192e90u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x192e94: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x192E94u;
    {
        const bool branch_taken_0x192e94 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x192E98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x192E94u;
            // 0x192e98: 0x24903  sra         $t1, $v0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 9, SRA32(GPR_S32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x192e94) {
            ctx->pc = 0x192EA4u;
            goto label_192ea4;
        }
    }
    ctx->pc = 0x192E9Cu;
    // 0x192e9c: 0x2442000f  addiu       $v0, $v0, 0xF
    ctx->pc = 0x192e9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
    // 0x192ea0: 0x24903  sra         $t1, $v0, 4
    ctx->pc = 0x192ea0u;
    SET_GPR_S32(ctx, 9, SRA32(GPR_S32(ctx, 2), 4));
label_192ea4:
    // 0x192ea4: 0x27a406d0  addiu       $a0, $sp, 0x6D0
    ctx->pc = 0x192ea4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1744));
    // 0x192ea8: 0x24060014  addiu       $a2, $zero, 0x14
    ctx->pc = 0x192ea8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x192eac: 0x24070008  addiu       $a3, $zero, 0x8
    ctx->pc = 0x192eacu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x192eb0: 0x2a0402d  daddu       $t0, $s5, $zero
    ctx->pc = 0x192eb0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x192eb4: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x192eb4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x192eb8: 0xc041a56  jal         func_106958
    ctx->pc = 0x192EB8u;
    SET_GPR_U32(ctx, 31, 0x192EC0u);
    ctx->pc = 0x192EBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x192EB8u;
            // 0x192ebc: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106958u;
    if (runtime->hasFunction(0x106958u)) {
        auto targetFn = runtime->lookupFunction(0x106958u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x192EC0u; }
        if (ctx->pc != 0x192EC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceGifPkRefLoadImage_0x106958(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x192EC0u; }
        if (ctx->pc != 0x192EC0u) { return; }
    }
    ctx->pc = 0x192EC0u;
label_192ec0:
    // 0x192ec0: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x192ec0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x192ec4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x192ec4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x192ec8: 0xffa30000  sd          $v1, 0x0($sp)
    ctx->pc = 0x192ec8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 3));
    // 0x192ecc: 0x3245ffff  andi        $a1, $s2, 0xFFFF
    ctx->pc = 0x192eccu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)65535);
    // 0x192ed0: 0x2c0402d  daddu       $t0, $s6, $zero
    ctx->pc = 0x192ed0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x192ed4: 0x27a406d0  addiu       $a0, $sp, 0x6D0
    ctx->pc = 0x192ed4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1744));
    // 0x192ed8: 0xffa20008  sd          $v0, 0x8($sp)
    ctx->pc = 0x192ed8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
    // 0x192edc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x192edcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x192ee0: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x192ee0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x192ee4: 0x24090004  addiu       $t1, $zero, 0x4
    ctx->pc = 0x192ee4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x192ee8: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x192ee8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x192eec: 0xc041a56  jal         func_106958
    ctx->pc = 0x192EECu;
    SET_GPR_U32(ctx, 31, 0x192EF4u);
    ctx->pc = 0x192EF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x192EECu;
            // 0x192ef0: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106958u;
    if (runtime->hasFunction(0x106958u)) {
        auto targetFn = runtime->lookupFunction(0x106958u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x192EF4u; }
        if (ctx->pc != 0x192EF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceGifPkRefLoadImage_0x106958(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x192EF4u; }
        if (ctx->pc != 0x192EF4u) { return; }
    }
    ctx->pc = 0x192EF4u;
label_192ef4:
    // 0x192ef4: 0x27a406d0  addiu       $a0, $sp, 0x6D0
    ctx->pc = 0x192ef4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1744));
    // 0x192ef8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x192ef8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x192efc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x192efcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x192f00: 0xc0419aa  jal         func_1066A8
    ctx->pc = 0x192F00u;
    SET_GPR_U32(ctx, 31, 0x192F08u);
    ctx->pc = 0x192F04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x192F00u;
            // 0x192f04: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1066A8u;
    if (runtime->hasFunction(0x1066A8u)) {
        auto targetFn = runtime->lookupFunction(0x1066A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x192F08u; }
        if (ctx->pc != 0x192F08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceGifPkCnt_0x1066a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x192F08u; }
        if (ctx->pc != 0x192F08u) { return; }
    }
    ctx->pc = 0x192F08u;
label_192f08:
    // 0x192f08: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x192f08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x192f0c: 0x24420eb0  addiu       $v0, $v0, 0xEB0
    ctx->pc = 0x192f0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3760));
    // 0x192f10: 0x78450000  lq          $a1, 0x0($v0)
    ctx->pc = 0x192f10u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x192f14: 0xc041a12  jal         func_106848
    ctx->pc = 0x192F14u;
    SET_GPR_U32(ctx, 31, 0x192F1Cu);
    ctx->pc = 0x192F18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x192F14u;
            // 0x192f18: 0x27a406d0  addiu       $a0, $sp, 0x6D0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1744));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106848u;
    if (runtime->hasFunction(0x106848u)) {
        auto targetFn = runtime->lookupFunction(0x106848u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x192F1Cu; }
        if (ctx->pc != 0x192F1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceGifPkOpenGifTag_0x106848(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x192F1Cu; }
        if (ctx->pc != 0x192F1Cu) { return; }
    }
    ctx->pc = 0x192F1Cu;
label_192f1c:
    // 0x192f1c: 0x27a406d0  addiu       $a0, $sp, 0x6D0
    ctx->pc = 0x192f1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1744));
    // 0x192f20: 0x2405003f  addiu       $a1, $zero, 0x3F
    ctx->pc = 0x192f20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x192f24: 0xc041a4c  jal         func_106930
    ctx->pc = 0x192F24u;
    SET_GPR_U32(ctx, 31, 0x192F2Cu);
    ctx->pc = 0x192F28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x192F24u;
            // 0x192f28: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106930u;
    if (runtime->hasFunction(0x106930u)) {
        auto targetFn = runtime->lookupFunction(0x106930u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x192F2Cu; }
        if (ctx->pc != 0x192F2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceGifPkAddGsAD_0x106930(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x192F2Cu; }
        if (ctx->pc != 0x192F2Cu) { return; }
    }
    ctx->pc = 0x192F2Cu;
label_192f2c:
    // 0x192f2c: 0xc041a18  jal         func_106860
    ctx->pc = 0x192F2Cu;
    SET_GPR_U32(ctx, 31, 0x192F34u);
    ctx->pc = 0x192F30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x192F2Cu;
            // 0x192f30: 0x27a406d0  addiu       $a0, $sp, 0x6D0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1744));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106860u;
    if (runtime->hasFunction(0x106860u)) {
        auto targetFn = runtime->lookupFunction(0x106860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x192F34u; }
        if (ctx->pc != 0x192F34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceGifPkCloseGifTag_0x106860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x192F34u; }
        if (ctx->pc != 0x192F34u) { return; }
    }
    ctx->pc = 0x192F34u;
label_192f34:
    // 0x192f34: 0x27a406d0  addiu       $a0, $sp, 0x6D0
    ctx->pc = 0x192f34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1744));
    // 0x192f38: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x192f38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x192f3c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x192f3cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x192f40: 0xc0419ee  jal         func_1067B8
    ctx->pc = 0x192F40u;
    SET_GPR_U32(ctx, 31, 0x192F48u);
    ctx->pc = 0x192F44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x192F40u;
            // 0x192f44: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1067B8u;
    if (runtime->hasFunction(0x1067B8u)) {
        auto targetFn = runtime->lookupFunction(0x1067B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x192F48u; }
        if (ctx->pc != 0x192F48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceGifPkEnd_0x1067b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x192F48u; }
        if (ctx->pc != 0x192F48u) { return; }
    }
    ctx->pc = 0x192F48u;
label_192f48:
    // 0x192f48: 0xc041994  jal         func_106650
    ctx->pc = 0x192F48u;
    SET_GPR_U32(ctx, 31, 0x192F50u);
    ctx->pc = 0x192F4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x192F48u;
            // 0x192f4c: 0x27a406d0  addiu       $a0, $sp, 0x6D0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1744));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106650u;
    if (runtime->hasFunction(0x106650u)) {
        auto targetFn = runtime->lookupFunction(0x106650u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x192F50u; }
        if (ctx->pc != 0x192F50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceGifPkTerminate_0x106650(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x192F50u; }
        if (ctx->pc != 0x192F50u) { return; }
    }
    ctx->pc = 0x192F50u;
label_192f50:
    // 0x192f50: 0xc0440d8  jal         func_110360
    ctx->pc = 0x192F50u;
    SET_GPR_U32(ctx, 31, 0x192F58u);
    ctx->pc = 0x192F54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x192F50u;
            // 0x192f54: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x110360u;
    if (runtime->hasFunction(0x110360u)) {
        auto targetFn = runtime->lookupFunction(0x110360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x192F58u; }
        if (ctx->pc != 0x192F58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FlushCache_0x110360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x192F58u; }
        if (ctx->pc != 0x192F58u) { return; }
    }
    ctx->pc = 0x192F58u;
label_192f58:
    // 0x192f58: 0x92040000  lbu         $a0, 0x0($s0)
    ctx->pc = 0x192f58u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x192f5c: 0x2402ffbf  addiu       $v0, $zero, -0x41
    ctx->pc = 0x192f5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967231));
    // 0x192f60: 0x64030040  daddiu      $v1, $zero, 0x40
    ctx->pc = 0x192f60u;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)64);
    // 0x192f64: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x192f64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x192f68: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x192f68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x192f6c: 0x12a00004  beqz        $s5, . + 4 + (0x4 << 2)
    ctx->pc = 0x192F6Cu;
    {
        const bool branch_taken_0x192f6c = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x192F70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x192F6Cu;
            // 0x192f70: 0xa2020000  sb          $v0, 0x0($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x192f6c) {
            ctx->pc = 0x192F80u;
            goto label_192f80;
        }
    }
    ctx->pc = 0x192F74u;
    // 0x192f74: 0x8fa506d4  lw          $a1, 0x6D4($sp)
    ctx->pc = 0x192f74u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1748)));
    // 0x192f78: 0xc041184  jal         func_104610
    ctx->pc = 0x192F78u;
    SET_GPR_U32(ctx, 31, 0x192F80u);
    ctx->pc = 0x192F7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x192F78u;
            // 0x192f7c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x104610u;
    if (runtime->hasFunction(0x104610u)) {
        auto targetFn = runtime->lookupFunction(0x104610u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x192F80u; }
        if (ctx->pc != 0x192F80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceDmaSend_0x104610(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x192F80u; }
        if (ctx->pc != 0x192F80u) { return; }
    }
    ctx->pc = 0x192F80u;
label_192f80:
    // 0x192f80: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x192f80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x192f84: 0xc040ce6  jal         func_103398
    ctx->pc = 0x192F84u;
    SET_GPR_U32(ctx, 31, 0x192F8Cu);
    ctx->pc = 0x192F88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x192F84u;
            // 0x192f88: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x103398u;
    if (runtime->hasFunction(0x103398u)) {
        auto targetFn = runtime->lookupFunction(0x103398u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x192F8Cu; }
        if (ctx->pc != 0x192F8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceGsSyncPath_0x103398(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x192F8Cu; }
        if (ctx->pc != 0x192F8Cu) { return; }
    }
    ctx->pc = 0x192F8Cu;
label_192f8c:
    // 0x192f8c: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x192f8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_192f90:
    // 0x192f90: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x192f90u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x192f94: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x192f94u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x192f98: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x192f98u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x192f9c: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x192f9cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x192fa0: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x192fa0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x192fa4: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x192fa4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x192fa8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x192fa8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x192fac: 0x3e00008  jr          $ra
    ctx->pc = 0x192FACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x192FB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x192FACu;
            // 0x192fb0: 0x27bd06f0  addiu       $sp, $sp, 0x6F0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1776));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x192FB4u;
}
