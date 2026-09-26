#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Step__18CMemoryCardManagerFv
// Address: 0x2f1fc0 - 0x2f21c8
void Step__18CMemoryCardManagerFv_0x2f1fc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Step__18CMemoryCardManagerFv_0x2f1fc0");
#endif

    switch (ctx->pc) {
        case 0x2f2010u: goto label_2f2010;
        case 0x2f203cu: goto label_2f203c;
        case 0x2f2054u: goto label_2f2054;
        case 0x2f2064u: goto label_2f2064;
        case 0x2f2074u: goto label_2f2074;
        case 0x2f2084u: goto label_2f2084;
        case 0x2f2094u: goto label_2f2094;
        case 0x2f20a4u: goto label_2f20a4;
        case 0x2f20b4u: goto label_2f20b4;
        case 0x2f20c4u: goto label_2f20c4;
        case 0x2f20d4u: goto label_2f20d4;
        case 0x2f20e4u: goto label_2f20e4;
        case 0x2f20f4u: goto label_2f20f4;
        case 0x2f2120u: goto label_2f2120;
        case 0x2f2130u: goto label_2f2130;
        case 0x2f2140u: goto label_2f2140;
        case 0x2f2150u: goto label_2f2150;
        case 0x2f2160u: goto label_2f2160;
        case 0x2f2170u: goto label_2f2170;
        case 0x2f2184u: goto label_2f2184;
        case 0x2f219cu: goto label_2f219c;
        default: break;
    }

    ctx->pc = 0x2f1fc0u;

    // 0x2f1fc0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2f1fc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2f1fc4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2f1fc4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1fc8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2f1fc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2f1fcc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2f1fccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2f1fd0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2f1fd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2f1fd4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2f1fd4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1fd8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2f1fd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2f1fdc: 0x8c910050  lw          $s1, 0x50($a0)
    ctx->pc = 0x2f1fdcu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
    // 0x2f1fe0: 0x2e210019  sltiu       $at, $s1, 0x19
    ctx->pc = 0x2f1fe0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)25) ? 1 : 0);
    // 0x2f1fe4: 0x10200062  beqz        $at, . + 4 + (0x62 << 2)
    ctx->pc = 0x2F1FE4u;
    {
        const bool branch_taken_0x2f1fe4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F1FE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F1FE4u;
            // 0x2f1fe8: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f1fe4) {
            ctx->pc = 0x2F2170u;
            goto label_2f2170;
        }
    }
    ctx->pc = 0x2F1FECu;
    // 0x2f1fec: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2f1fecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x2f1ff0: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x2f1ff0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x2f1ff4: 0x24a51820  addiu       $a1, $a1, 0x1820
    ctx->pc = 0x2f1ff4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6176));
    // 0x2f1ff8: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x2f1ff8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2f1ffc: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x2f1ffcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2f2000: 0x600008  jr          $v1
    ctx->pc = 0x2F2000u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2F2008u: goto label_2f2008;
            case 0x2F2018u: goto label_2f2018;
            case 0x2F2044u: goto label_2f2044;
            case 0x2F204Cu: goto label_2f204c;
            case 0x2F205Cu: goto label_2f205c;
            case 0x2F206Cu: goto label_2f206c;
            case 0x2F207Cu: goto label_2f207c;
            case 0x2F208Cu: goto label_2f208c;
            case 0x2F209Cu: goto label_2f209c;
            case 0x2F20ACu: goto label_2f20ac;
            case 0x2F20BCu: goto label_2f20bc;
            case 0x2F20CCu: goto label_2f20cc;
            case 0x2F20DCu: goto label_2f20dc;
            case 0x2F20ECu: goto label_2f20ec;
            case 0x2F20FCu: goto label_2f20fc;
            case 0x2F2128u: goto label_2f2128;
            case 0x2F2138u: goto label_2f2138;
            case 0x2F2148u: goto label_2f2148;
            case 0x2F2158u: goto label_2f2158;
            case 0x2F2168u: goto label_2f2168;
            case 0x2F2170u: goto label_2f2170;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2F2008u;
label_2f2008:
    // 0x2f2008: 0xc0bc878  jal         func_2F21E0
    ctx->pc = 0x2F2008u;
    SET_GPR_U32(ctx, 31, 0x2F2010u);
    ctx->pc = 0x2F21E0u;
    if (runtime->hasFunction(0x2F21E0u)) {
        auto targetFn = runtime->lookupFunction(0x2F21E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F2010u; }
        if (ctx->pc != 0x2F2010u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SearchMcType__18CMemoryCardManagerFv_0x2f21e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F2010u; }
        if (ctx->pc != 0x2F2010u) { return; }
    }
    ctx->pc = 0x2F2010u;
label_2f2010:
    // 0x2f2010: 0x10000058  b           . + 4 + (0x58 << 2)
    ctx->pc = 0x2F2010u;
    {
        const bool branch_taken_0x2f2010 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F2014u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F2010u;
            // 0x2f2014: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f2010) {
            ctx->pc = 0x2F2174u;
            goto label_2f2174;
        }
    }
    ctx->pc = 0x2F2018u;
label_2f2018:
    // 0x2f2018: 0x8e43090c  lw          $v1, 0x90C($s2)
    ctx->pc = 0x2f2018u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2316)));
    // 0x2f201c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2f201cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2f2020: 0xae43090c  sw          $v1, 0x90C($s2)
    ctx->pc = 0x2f2020u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 2316), GPR_U32(ctx, 3));
    // 0x2f2024: 0x8e43090c  lw          $v1, 0x90C($s2)
    ctx->pc = 0x2f2024u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2316)));
    // 0x2f2028: 0x2863000a  slti        $v1, $v1, 0xA
    ctx->pc = 0x2f2028u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x2f202c: 0x14600050  bnez        $v1, . + 4 + (0x50 << 2)
    ctx->pc = 0x2F202Cu;
    {
        const bool branch_taken_0x2f202c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f202c) {
            ctx->pc = 0x2F2170u;
            goto label_2f2170;
        }
    }
    ctx->pc = 0x2F2034u;
    // 0x2f2034: 0xc0bc878  jal         func_2F21E0
    ctx->pc = 0x2F2034u;
    SET_GPR_U32(ctx, 31, 0x2F203Cu);
    ctx->pc = 0x2F21E0u;
    if (runtime->hasFunction(0x2F21E0u)) {
        auto targetFn = runtime->lookupFunction(0x2F21E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F203Cu; }
        if (ctx->pc != 0x2F203Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SearchMcType__18CMemoryCardManagerFv_0x2f21e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F203Cu; }
        if (ctx->pc != 0x2F203Cu) { return; }
    }
    ctx->pc = 0x2F203Cu;
label_2f203c:
    // 0x2f203c: 0x1000004c  b           . + 4 + (0x4C << 2)
    ctx->pc = 0x2F203Cu;
    {
        const bool branch_taken_0x2f203c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F2040u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F203Cu;
            // 0x2f2040: 0xae40090c  sw          $zero, 0x90C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 2316), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f203c) {
            ctx->pc = 0x2F2170u;
            goto label_2f2170;
        }
    }
    ctx->pc = 0x2F2044u;
label_2f2044:
    // 0x2f2044: 0x1000004a  b           . + 4 + (0x4A << 2)
    ctx->pc = 0x2F2044u;
    {
        const bool branch_taken_0x2f2044 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F2048u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F2044u;
            // 0x2f2048: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f2044) {
            ctx->pc = 0x2F2170u;
            goto label_2f2170;
        }
    }
    ctx->pc = 0x2F204Cu;
label_2f204c:
    // 0x2f204c: 0xc0bc954  jal         func_2F2550
    ctx->pc = 0x2F204Cu;
    SET_GPR_U32(ctx, 31, 0x2F2054u);
    ctx->pc = 0x2F2050u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F204Cu;
            // 0x2f2050: 0x8e4504cc  lw          $a1, 0x4CC($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1228)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F2550u;
    if (runtime->hasFunction(0x2F2550u)) {
        auto targetFn = runtime->lookupFunction(0x2F2550u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F2054u; }
        if (ctx->pc != 0x2F2054u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MakeDir__18CMemoryCardManagerFi_0x2f2550(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F2054u; }
        if (ctx->pc != 0x2F2054u) { return; }
    }
    ctx->pc = 0x2F2054u;
label_2f2054:
    // 0x2f2054: 0x10000046  b           . + 4 + (0x46 << 2)
    ctx->pc = 0x2F2054u;
    {
        const bool branch_taken_0x2f2054 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f2054) {
            ctx->pc = 0x2F2170u;
            goto label_2f2170;
        }
    }
    ctx->pc = 0x2F205Cu;
label_2f205c:
    // 0x2f205c: 0xc0bd450  jal         func_2F5140
    ctx->pc = 0x2F205Cu;
    SET_GPR_U32(ctx, 31, 0x2F2064u);
    ctx->pc = 0x2F5140u;
    if (runtime->hasFunction(0x2F5140u)) {
        auto targetFn = runtime->lookupFunction(0x2F5140u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F2064u; }
        if (ctx->pc != 0x2F2064u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetAllSaveFileInfo__18CMemoryCardManagerFv_0x2f5140(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F2064u; }
        if (ctx->pc != 0x2F2064u) { return; }
    }
    ctx->pc = 0x2F2064u;
label_2f2064:
    // 0x2f2064: 0x10000042  b           . + 4 + (0x42 << 2)
    ctx->pc = 0x2F2064u;
    {
        const bool branch_taken_0x2f2064 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f2064) {
            ctx->pc = 0x2F2170u;
            goto label_2f2170;
        }
    }
    ctx->pc = 0x2F206Cu;
label_2f206c:
    // 0x2f206c: 0xc0bc954  jal         func_2F2550
    ctx->pc = 0x2F206Cu;
    SET_GPR_U32(ctx, 31, 0x2F2074u);
    ctx->pc = 0x2F2070u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F206Cu;
            // 0x2f2070: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F2550u;
    if (runtime->hasFunction(0x2F2550u)) {
        auto targetFn = runtime->lookupFunction(0x2F2550u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F2074u; }
        if (ctx->pc != 0x2F2074u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MakeDir__18CMemoryCardManagerFi_0x2f2550(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F2074u; }
        if (ctx->pc != 0x2F2074u) { return; }
    }
    ctx->pc = 0x2F2074u;
label_2f2074:
    // 0x2f2074: 0x1000003e  b           . + 4 + (0x3E << 2)
    ctx->pc = 0x2F2074u;
    {
        const bool branch_taken_0x2f2074 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f2074) {
            ctx->pc = 0x2F2170u;
            goto label_2f2170;
        }
    }
    ctx->pc = 0x2F207Cu;
label_2f207c:
    // 0x2f207c: 0xc0bcafc  jal         func_2F2BF0
    ctx->pc = 0x2F207Cu;
    SET_GPR_U32(ctx, 31, 0x2F2084u);
    ctx->pc = 0x2F2080u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F207Cu;
            // 0x2f2080: 0x8e4504cc  lw          $a1, 0x4CC($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1228)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F2BF0u;
    if (runtime->hasFunction(0x2F2BF0u)) {
        auto targetFn = runtime->lookupFunction(0x2F2BF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F2084u; }
        if (ctx->pc != 0x2F2084u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SaveToMc__18CMemoryCardManagerFi_0x2f2bf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F2084u; }
        if (ctx->pc != 0x2F2084u) { return; }
    }
    ctx->pc = 0x2F2084u;
label_2f2084:
    // 0x2f2084: 0x1000003a  b           . + 4 + (0x3A << 2)
    ctx->pc = 0x2F2084u;
    {
        const bool branch_taken_0x2f2084 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f2084) {
            ctx->pc = 0x2F2170u;
            goto label_2f2170;
        }
    }
    ctx->pc = 0x2F208Cu;
label_2f208c:
    // 0x2f208c: 0xc0bcc90  jal         func_2F3240
    ctx->pc = 0x2F208Cu;
    SET_GPR_U32(ctx, 31, 0x2F2094u);
    ctx->pc = 0x2F2090u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F208Cu;
            // 0x2f2090: 0x8e4504cc  lw          $a1, 0x4CC($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1228)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F3240u;
    if (runtime->hasFunction(0x2F3240u)) {
        auto targetFn = runtime->lookupFunction(0x2F3240u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F2094u; }
        if (ctx->pc != 0x2F2094u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LoadFromMc__18CMemoryCardManagerFi_0x2f3240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F2094u; }
        if (ctx->pc != 0x2F2094u) { return; }
    }
    ctx->pc = 0x2F2094u;
label_2f2094:
    // 0x2f2094: 0x10000036  b           . + 4 + (0x36 << 2)
    ctx->pc = 0x2F2094u;
    {
        const bool branch_taken_0x2f2094 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f2094) {
            ctx->pc = 0x2F2170u;
            goto label_2f2170;
        }
    }
    ctx->pc = 0x2F209Cu;
label_2f209c:
    // 0x2f209c: 0xc0bcda4  jal         func_2F3690
    ctx->pc = 0x2F209Cu;
    SET_GPR_U32(ctx, 31, 0x2F20A4u);
    ctx->pc = 0x2F3690u;
    if (runtime->hasFunction(0x2F3690u)) {
        auto targetFn = runtime->lookupFunction(0x2F3690u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F20A4u; }
        if (ctx->pc != 0x2F20A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SaveAlbum__18CMemoryCardManagerFv_0x2f3690(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F20A4u; }
        if (ctx->pc != 0x2F20A4u) { return; }
    }
    ctx->pc = 0x2F20A4u;
label_2f20a4:
    // 0x2f20a4: 0x10000032  b           . + 4 + (0x32 << 2)
    ctx->pc = 0x2F20A4u;
    {
        const bool branch_taken_0x2f20a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f20a4) {
            ctx->pc = 0x2F2170u;
            goto label_2f2170;
        }
    }
    ctx->pc = 0x2F20ACu;
label_2f20ac:
    // 0x2f20ac: 0xc0bce68  jal         func_2F39A0
    ctx->pc = 0x2F20ACu;
    SET_GPR_U32(ctx, 31, 0x2F20B4u);
    ctx->pc = 0x2F39A0u;
    if (runtime->hasFunction(0x2F39A0u)) {
        auto targetFn = runtime->lookupFunction(0x2F39A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F20B4u; }
        if (ctx->pc != 0x2F20B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LoadAlbum__18CMemoryCardManagerFv_0x2f39a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F20B4u; }
        if (ctx->pc != 0x2F20B4u) { return; }
    }
    ctx->pc = 0x2F20B4u;
label_2f20b4:
    // 0x2f20b4: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x2F20B4u;
    {
        const bool branch_taken_0x2f20b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f20b4) {
            ctx->pc = 0x2F2170u;
            goto label_2f2170;
        }
    }
    ctx->pc = 0x2F20BCu;
label_2f20bc:
    // 0x2f20bc: 0xc0bcf1c  jal         func_2F3C70
    ctx->pc = 0x2F20BCu;
    SET_GPR_U32(ctx, 31, 0x2F20C4u);
    ctx->pc = 0x2F3C70u;
    if (runtime->hasFunction(0x2F3C70u)) {
        auto targetFn = runtime->lookupFunction(0x2F3C70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F20C4u; }
        if (ctx->pc != 0x2F20C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckAlbum__18CMemoryCardManagerFv_0x2f3c70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F20C4u; }
        if (ctx->pc != 0x2F20C4u) { return; }
    }
    ctx->pc = 0x2F20C4u;
label_2f20c4:
    // 0x2f20c4: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x2F20C4u;
    {
        const bool branch_taken_0x2f20c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f20c4) {
            ctx->pc = 0x2F2170u;
            goto label_2f2170;
        }
    }
    ctx->pc = 0x2F20CCu;
label_2f20cc:
    // 0x2f20cc: 0xc0bc954  jal         func_2F2550
    ctx->pc = 0x2F20CCu;
    SET_GPR_U32(ctx, 31, 0x2F20D4u);
    ctx->pc = 0x2F20D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F20CCu;
            // 0x2f20d0: 0x2405fffe  addiu       $a1, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F2550u;
    if (runtime->hasFunction(0x2F2550u)) {
        auto targetFn = runtime->lookupFunction(0x2F2550u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F20D4u; }
        if (ctx->pc != 0x2F20D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MakeDir__18CMemoryCardManagerFi_0x2f2550(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F20D4u; }
        if (ctx->pc != 0x2F20D4u) { return; }
    }
    ctx->pc = 0x2F20D4u;
label_2f20d4:
    // 0x2f20d4: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x2F20D4u;
    {
        const bool branch_taken_0x2f20d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f20d4) {
            ctx->pc = 0x2F2170u;
            goto label_2f2170;
        }
    }
    ctx->pc = 0x2F20DCu;
label_2f20dc:
    // 0x2f20dc: 0xc0bd238  jal         func_2F48E0
    ctx->pc = 0x2F20DCu;
    SET_GPR_U32(ctx, 31, 0x2F20E4u);
    ctx->pc = 0x2F48E0u;
    if (runtime->hasFunction(0x2F48E0u)) {
        auto targetFn = runtime->lookupFunction(0x2F48E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F20E4u; }
        if (ctx->pc != 0x2F20E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Format__18CMemoryCardManagerFv_0x2f48e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F20E4u; }
        if (ctx->pc != 0x2F20E4u) { return; }
    }
    ctx->pc = 0x2F20E4u;
label_2f20e4:
    // 0x2f20e4: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x2F20E4u;
    {
        const bool branch_taken_0x2f20e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f20e4) {
            ctx->pc = 0x2F2170u;
            goto label_2f2170;
        }
    }
    ctx->pc = 0x2F20ECu;
label_2f20ec:
    // 0x2f20ec: 0xc0bd328  jal         func_2F4CA0
    ctx->pc = 0x2F20ECu;
    SET_GPR_U32(ctx, 31, 0x2F20F4u);
    ctx->pc = 0x2F4CA0u;
    if (runtime->hasFunction(0x2F4CA0u)) {
        auto targetFn = runtime->lookupFunction(0x2F4CA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F20F4u; }
        if (ctx->pc != 0x2F20F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        UnFormat__18CMemoryCardManagerFv_0x2f4ca0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F20F4u; }
        if (ctx->pc != 0x2F20F4u) { return; }
    }
    ctx->pc = 0x2F20F4u;
label_2f20f4:
    // 0x2f20f4: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x2F20F4u;
    {
        const bool branch_taken_0x2f20f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f20f4) {
            ctx->pc = 0x2F2170u;
            goto label_2f2170;
        }
    }
    ctx->pc = 0x2F20FCu;
label_2f20fc:
    // 0x2f20fc: 0x8e4204d0  lw          $v0, 0x4D0($s2)
    ctx->pc = 0x2f20fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1232)));
    // 0x2f2100: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2F2100u;
    {
        const bool branch_taken_0x2f2100 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f2100) {
            ctx->pc = 0x2F2110u;
            goto label_2f2110;
        }
    }
    ctx->pc = 0x2F2108u;
    // 0x2f2108: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2F2108u;
    {
        const bool branch_taken_0x2f2108 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F210Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F2108u;
            // 0x2f210c: 0x8e4504cc  lw          $a1, 0x4CC($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1228)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f2108) {
            ctx->pc = 0x2F2118u;
            goto label_2f2118;
        }
    }
    ctx->pc = 0x2F2110u;
label_2f2110:
    // 0x2f2110: 0x8e4504d8  lw          $a1, 0x4D8($s2)
    ctx->pc = 0x2f2110u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1240)));
    // 0x2f2114: 0x0  nop
    ctx->pc = 0x2f2114u;
    // NOP
label_2f2118:
    // 0x2f2118: 0xc0bd29c  jal         func_2F4A70
    ctx->pc = 0x2F2118u;
    SET_GPR_U32(ctx, 31, 0x2F2120u);
    ctx->pc = 0x2F211Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F2118u;
            // 0x2f211c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F4A70u;
    if (runtime->hasFunction(0x2F4A70u)) {
        auto targetFn = runtime->lookupFunction(0x2F4A70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F2120u; }
        if (ctx->pc != 0x2F2120u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DeleteFile__18CMemoryCardManagerFi_0x2f4a70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F2120u; }
        if (ctx->pc != 0x2F2120u) { return; }
    }
    ctx->pc = 0x2F2120u;
label_2f2120:
    // 0x2f2120: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x2F2120u;
    {
        const bool branch_taken_0x2f2120 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f2120) {
            ctx->pc = 0x2F2170u;
            goto label_2f2170;
        }
    }
    ctx->pc = 0x2F2128u;
label_2f2128:
    // 0x2f2128: 0xc0bcf84  jal         func_2F3E10
    ctx->pc = 0x2F2128u;
    SET_GPR_U32(ctx, 31, 0x2F2130u);
    ctx->pc = 0x2F3E10u;
    if (runtime->hasFunction(0x2F3E10u)) {
        auto targetFn = runtime->lookupFunction(0x2F3E10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F2130u; }
        if (ctx->pc != 0x2F2130u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SaveOamkeFile__18CMemoryCardManagerFv_0x2f3e10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F2130u; }
        if (ctx->pc != 0x2F2130u) { return; }
    }
    ctx->pc = 0x2F2130u;
label_2f2130:
    // 0x2f2130: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x2F2130u;
    {
        const bool branch_taken_0x2f2130 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f2130) {
            ctx->pc = 0x2F2170u;
            goto label_2f2170;
        }
    }
    ctx->pc = 0x2F2138u;
label_2f2138:
    // 0x2f2138: 0xc0bd0c4  jal         func_2F4310
    ctx->pc = 0x2F2138u;
    SET_GPR_U32(ctx, 31, 0x2F2140u);
    ctx->pc = 0x2F4310u;
    if (runtime->hasFunction(0x2F4310u)) {
        auto targetFn = runtime->lookupFunction(0x2F4310u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F2140u; }
        if (ctx->pc != 0x2F2140u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LoadOmakeFile__18CMemoryCardManagerFv_0x2f4310(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F2140u; }
        if (ctx->pc != 0x2F2140u) { return; }
    }
    ctx->pc = 0x2F2140u;
label_2f2140:
    // 0x2f2140: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x2F2140u;
    {
        const bool branch_taken_0x2f2140 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f2140) {
            ctx->pc = 0x2F2170u;
            goto label_2f2170;
        }
    }
    ctx->pc = 0x2F2148u;
label_2f2148:
    // 0x2f2148: 0xc0bd174  jal         func_2F45D0
    ctx->pc = 0x2F2148u;
    SET_GPR_U32(ctx, 31, 0x2F2150u);
    ctx->pc = 0x2F45D0u;
    if (runtime->hasFunction(0x2F45D0u)) {
        auto targetFn = runtime->lookupFunction(0x2F45D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F2150u; }
        if (ctx->pc != 0x2F2150u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckOmakeFile__18CMemoryCardManagerFv_0x2f45d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F2150u; }
        if (ctx->pc != 0x2F2150u) { return; }
    }
    ctx->pc = 0x2F2150u;
label_2f2150:
    // 0x2f2150: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2F2150u;
    {
        const bool branch_taken_0x2f2150 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f2150) {
            ctx->pc = 0x2F2170u;
            goto label_2f2170;
        }
    }
    ctx->pc = 0x2F2158u;
label_2f2158:
    // 0x2f2158: 0xc0bc910  jal         func_2F2440
    ctx->pc = 0x2F2158u;
    SET_GPR_U32(ctx, 31, 0x2F2160u);
    ctx->pc = 0x2F2440u;
    if (runtime->hasFunction(0x2F2440u)) {
        auto targetFn = runtime->lookupFunction(0x2F2440u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F2160u; }
        if (ctx->pc != 0x2F2160u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Write__18CMemoryCardManagerFv_0x2f2440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F2160u; }
        if (ctx->pc != 0x2F2160u) { return; }
    }
    ctx->pc = 0x2F2160u;
label_2f2160:
    // 0x2f2160: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2F2160u;
    {
        const bool branch_taken_0x2f2160 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f2160) {
            ctx->pc = 0x2F2170u;
            goto label_2f2170;
        }
    }
    ctx->pc = 0x2F2168u;
label_2f2168:
    // 0x2f2168: 0xc0bc950  jal         func_2F2540
    ctx->pc = 0x2F2168u;
    SET_GPR_U32(ctx, 31, 0x2F2170u);
    ctx->pc = 0x2F2540u;
    if (runtime->hasFunction(0x2F2540u)) {
        auto targetFn = runtime->lookupFunction(0x2F2540u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F2170u; }
        if (ctx->pc != 0x2F2170u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Convert__18CMemoryCardManagerFv_0x2f2540(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F2170u; }
        if (ctx->pc != 0x2F2170u) { return; }
    }
    ctx->pc = 0x2F2170u;
label_2f2170:
    // 0x2f2170: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2f2170u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2f2174:
    // 0x2f2174: 0x14450005  bne         $v0, $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2F2174u;
    {
        const bool branch_taken_0x2f2174 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        ctx->pc = 0x2F2178u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F2174u;
            // 0x2f2178: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f2174) {
            ctx->pc = 0x2F218Cu;
            goto label_2f218c;
        }
    }
    ctx->pc = 0x2F217Cu;
    // 0x2f217c: 0xc0bc740  jal         func_2F1D00
    ctx->pc = 0x2F217Cu;
    SET_GPR_U32(ctx, 31, 0x2F2184u);
    ctx->pc = 0x2F2180u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F217Cu;
            // 0x2f2180: 0xae400058  sw          $zero, 0x58($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 88), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F1D00u;
    if (runtime->hasFunction(0x2F1D00u)) {
        auto targetFn = runtime->lookupFunction(0x2F1D00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F2184u; }
        if (ctx->pc != 0x2F2184u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetFuncNo__18CMemoryCardManagerFi_0x2f1d00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F2184u; }
        if (ctx->pc != 0x2F2184u) { return; }
    }
    ctx->pc = 0x2F2184u;
label_2f2184:
    // 0x2f2184: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2F2184u;
    {
        const bool branch_taken_0x2f2184 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F2188u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F2184u;
            // 0x2f2188: 0x8e420050  lw          $v0, 0x50($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f2184) {
            ctx->pc = 0x2F21A0u;
            goto label_2f21a0;
        }
    }
    ctx->pc = 0x2F218Cu;
label_2f218c:
    // 0x2f218c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2F218Cu;
    {
        const bool branch_taken_0x2f218c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F2190u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F218Cu;
            // 0x2f2190: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f218c) {
            ctx->pc = 0x2F219Cu;
            goto label_2f219c;
        }
    }
    ctx->pc = 0x2F2194u;
    // 0x2f2194: 0xc0bd2e8  jal         func_2F4BA0
    ctx->pc = 0x2F2194u;
    SET_GPR_U32(ctx, 31, 0x2F219Cu);
    ctx->pc = 0x2F2198u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F2194u;
            // 0x2f2198: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F4BA0u;
    if (runtime->hasFunction(0x2F4BA0u)) {
        auto targetFn = runtime->lookupFunction(0x2F4BA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F219Cu; }
        if (ctx->pc != 0x2F219Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        McError__18CMemoryCardManagerFi_0x2f4ba0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F219Cu; }
        if (ctx->pc != 0x2F219Cu) { return; }
    }
    ctx->pc = 0x2F219Cu;
label_2f219c:
    // 0x2f219c: 0x8e420050  lw          $v0, 0x50($s2)
    ctx->pc = 0x2f219cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 80)));
label_2f21a0:
    // 0x2f21a0: 0x12220003  beq         $s1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2F21A0u;
    {
        const bool branch_taken_0x2f21a0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x2F21A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F21A0u;
            // 0x2f21a4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f21a0) {
            ctx->pc = 0x2F21B0u;
            goto label_2f21b0;
        }
    }
    ctx->pc = 0x2F21A8u;
    // 0x2f21a8: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x2f21a8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f21ac: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2f21acu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2f21b0:
    // 0x2f21b0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2f21b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2f21b4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2f21b4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2f21b8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2f21b8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f21bc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2f21bcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f21c0: 0x3e00008  jr          $ra
    ctx->pc = 0x2F21C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F21C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F21C0u;
            // 0x2f21c4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2F21C8u;
}
